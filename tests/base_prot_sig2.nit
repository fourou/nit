# This file is part of NIT ( http://www.nitlanguage.org ).
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

import kernel
private import base_prot_sig

class C
	#alt1#fun pubA(a: A) do end
	#alt2#protected fun proA(a: A) do end
	private fun priA(a: A) do end

	#alt3#var vpubA: nullable A writable
	#alt4#protected var vproA: nullable A protected writable
	private var vpriA: nullable A

	#alt5#var vpubA2 writable = new A
	#alt6#protected var vproA2 protected writable = new A
	private var vpriA2 = new A

	init do end
end

private class D
	fun pubA(a: A) do end
	private fun priA(a: A) do end

	var vpubA: nullable A writable
	private var vpriA: nullable A

	var vpubA2 writable = new A
	private var vpriA2 = new A

	init do end
end
