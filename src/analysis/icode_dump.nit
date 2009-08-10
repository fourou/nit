# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Output the intermediate code unded a textual representation
package icode_dump

import icode
import allocate_iregister_slots

redef class IRoutine
	# Output the intermediate code representation of the iroutine
	fun dump(icd: ICodeDumper)
	do
		if not params.is_empty then
			var a = new Array[String]
			for p in params do
				a.add(icd.register(p))
			end
			icd.write "Parameters: {a.join(", ")}"
		end
		var r = result
		if r != null then
			icd.write "Result: {icd.register(r)}"
		end
		var closdecls = closure_decls
		if closdecls != null then
			for c in closdecls do
				c.dump(icd)
			end
		end
		body.dump(icd)
	end
end

redef class IClosureDecl
	# Output the intermediate code representation of the iclosuredecl
	fun dump(icd: ICodeDumper)
	do
		icd.write "Closure: {icd.closdecl(self)}"
		if default != null then
			icd.indent
			default.dump(icd)
			icd.unindent
		end
	end
end

class ICodeDumper
	var _ids: HashMap[Object, String] = new HashMap[Object, String]
	var _last_value: Int = 0

	# Return the name of e
	# If e is unknown, a new name is gived
	fun register(e: IRegister): String
	do
		if _ids.has_key(e) then
			return _ids[e]
		else
			var i = e.slot_index
			if i == null then
				_last_value += 1
				var s = "r{_last_value}"
				_ids[e] = s
				return s
			else
				_last_value += 1
				var s = "REG{i}(r{_last_value})"
				_ids[e] = s
				return s
			end
		end
	end

	# Returns the names of es (separated with comma)
	fun register_all(es: nullable Collection[IRegister]): String
	do
		if es == null then return ""
		var a = new Array[String]
		for e in es do
			a.add(register(e))
		end
		return a.join(", ")
	end

	var _last_clos: Int = 0

	# Return the name of e
	# If e is unknown, a new name is gived
	fun closdecl(e: IClosureDecl): String
	do
		if _ids.has_key(e) then
			return _ids[e]
		else
			_last_clos += 1
			var s = "clos{_last_clos}"
			_ids[e] = s
			return s
		end
	end

	var _last_label: Int = 0
	# Return the name of e
	# If e is unknown, a new name is gived
	fun lab(e: ISeq): String
	do
		if _ids.has_key(e) then
			return _ids[e]
		else
			_last_label += 1
			var s = "[l{_last_label}]"
			_ids[e] = s
			return s
		end
	end

	var _last_line: Int = 0
	# Return the line index of e
	fun line(e: ICode): String
	do
		if _ids.has_key(e) then
			return _ids[e]
		else
			_last_line += 1
			var s = "{_last_line}"
			_ids[e] = s
			return s
		end
	end

	# Is the label e known? (because we goto to it)
	fun has_lab(e: ISeq): Bool
	do
		return _ids.has_key(e)
	end

	# Output something
	fun write(s: String)
	do
		for i in [0.._indent_level[ do
			printn "    "
		end
		print s
	end

	var _indent_level: Int = 0

	# Indent the next writes
	fun indent do _indent_level += 1

	# Outdent the next writes
	fun unindent do _indent_level -= 1
end

redef class ICode
	# Output the intermediate code representation
	fun dump(icd: ICodeDumper)
	do
		var result = result
		var s = ""
		var l = location
		if l != null then
			s = "        ... {l}"
		end
		if result == null then
			icd.write "{icd.line(self)}: {dump_intern(icd)}{s}"
		else
			icd.write "{icd.line(self)}: {icd.register(result)} := {dump_intern(icd)}{s}"
		end
	end

	# Output the intermediate code representation (inner method)
	fun dump_intern(icd: ICodeDumper): String do return "???"
end

redef class ICodeN
	redef fun dump(icd: ICodeDumper)
	do
		super
		var closure_defs = closure_defs
		if closure_defs != null then
			for clos in closure_defs do
				if clos == null then
					icd.write "CLOSURE = NULL"
				else
					icd.write "CLOSURE"
					icd.indent
					clos.dump(icd)
					icd.unindent
				end
			end
		end
	end
end

redef class ISeq
	redef fun dump(icd)
	do
		for ic in icodes do
			ic.dump(icd)
		end
		if icd.has_lab(self) then icd.write("{icd.lab(self)}:")
	end
end

redef class IIf
	redef fun dump(icd)
	do
		icd.write "IF({icd.register(expr)}) \{"
		icd.indent
		then_seq.dump(icd)
		icd.unindent
		icd.write "} ELSE \{"
		icd.indent
		else_seq.dump(icd)
		icd.unindent
		icd.write "}"
	end
end

redef class ILoop
	redef fun dump(icd)
	do
		icd.write "LOOP \{"
		icd.indent
		for ic in icodes do
			ic.dump(icd)
		end
		icd.unindent
		icd.write "}"
		if icd.has_lab(self) then icd.write("{icd.lab(self)}:")
	end
end

redef class IEscape
	redef fun dump_intern(icd)
	do
		return "ESCAPE {icd.lab(seq)}"
	end
end

redef class IAbort
	redef fun dump_intern(icd)
	do
		return "ABORT (\"{texts.join("\", \"")}\")"
	end
end

redef class ICall
	redef fun dump_intern(icd)
	do
		return "CALL {property.full_name}({icd.register_all(exprs)})"
	end
end

redef class IClosCall
	redef fun dump_intern(icd)
	do
		return "CLOS_CALL {icd.closdecl(closure_decl)}({icd.register_all(exprs)})"
	end
end

redef class IAttrRead
	redef fun dump_intern(icd)
	do
		return "ATTR_READ {property.full_name}({icd.register(expr)})"
	end
end

redef class IAttrWrite
	redef fun dump_intern(icd)
	do
		return "ATTR_WRITE {property.full_name}({icd.register(expr1)}) := {icd.register(expr2)}"
	end
end

redef class IAttrIsset
	redef fun dump_intern(icd)
	do
		return "ATTR_ISSET {property.full_name}({icd.register(expr)})"
	end
end

redef class ITypeCheck
	redef fun dump_intern(icd)
	do
		return "CHECKTYPE {icd.register(expr)} isa {stype}"
	end
end

redef class INative
	redef fun dump_intern(icd)
	do
		if exprs.is_empty then
			return "NATIVE \"{code}\""
		else
			return "NATIVE \"{code}\"({icd.register_all(exprs)})"
		end
	end
end

redef class IMove
	redef fun dump_intern(icd)
	do
		return "{icd.register(expr)}"
	end
end

redef class IIs
	redef fun dump_intern(icd)
	do
		return "{icd.register(expr1)} is {icd.register(expr2)}"
	end
end

redef class INot
	redef fun dump_intern(icd)
	do
		return "NOT {icd.register(expr)}"
	end
end

redef class IOnce
	redef fun dump(icd)
	do
		icd.write "{icd.register(result.as(not null))} := ONCE \{"
		icd.indent
		body.dump(icd)
		icd.unindent
		icd.write "}"
	end
end

redef class IHasClos
	redef fun dump_intern(icd)
	do
		return "HASCLOS {icd.closdecl(closure_decl)}"
	end
end
