# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

class A
	type E: T
	
	readable writable var _e: nullable E = null 
end

class B
	super A
	init do end
end

class T
	fun foo do 0.output
	init do end
end

var b = new B
var t = new T
var i = 2
var t2 = b.e
#alt1#i = b.e
#alt2#b.e = i
b.e = t2
b.e = t
#alt3#b.e = b
b.e.foo
