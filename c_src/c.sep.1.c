#include "c.sep.0.h"
/* method c#FFILanguageAssignationPhase#c_language for (self: FFILanguageAssignationPhase): FFILanguage */
val* c__FFILanguageAssignationPhase__c_language(val* self) {
val* var /* : FFILanguage */;
val* var1 /* : FFILanguage */;
var1 = self->attrs[COLOR_c__FFILanguageAssignationPhase___64dc_language].val; /* @c_language on <self:FFILanguageAssignationPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @c_language");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#FFILanguageAssignationPhase#c_language for (self: Object): FFILanguage */
val* VIRTUAL_c__FFILanguageAssignationPhase__c_language(val* self) {
val* var /* : FFILanguage */;
val* var1 /* : FFILanguage */;
var1 = c__FFILanguageAssignationPhase__c_language(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#FFILanguageAssignationPhase#c_language= for (self: FFILanguageAssignationPhase, FFILanguage) */
void c__FFILanguageAssignationPhase__c_language_61d(val* self, val* p0) {
self->attrs[COLOR_c__FFILanguageAssignationPhase___64dc_language].val = p0; /* @c_language on <self:FFILanguageAssignationPhase> */
RET_LABEL:;
}
/* method c#FFILanguageAssignationPhase#c_language= for (self: Object, FFILanguage) */
void VIRTUAL_c__FFILanguageAssignationPhase__c_language_61d(val* self, val* p0) {
c__FFILanguageAssignationPhase__c_language_61d(self, p0);
RET_LABEL:;
}
/* method c#CLanguage#identify_language for (self: CLanguage, AExternCodeBlock): Bool */
short int c__CLanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
var1 = ((short int (*)(val*))(var_n->class->vft[COLOR_c__AExternCodeBlock__is_c]))(var_n) /* is_c on <var_n:AExternCodeBlock>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CLanguage#identify_language for (self: Object, AExternCodeBlock): Bool */
short int VIRTUAL_c__CLanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c__CLanguage__identify_language(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method c#CLanguage#compile_module_block for (self: CLanguage, AExternCodeBlock, CCompilationUnit, AModule) */
void c__CLanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
val* var1 /* : Template */;
val* var2 /* : Location */;
val* var3 /* : String */;
val* var4 /* : Template */;
val* var5 /* : String */;
short int var6 /* : Bool */;
val* var7 /* : Template */;
val* var8 /* : Location */;
val* var9 /* : String */;
val* var10 /* : Template */;
val* var11 /* : String */;
var_block = p0;
var_ecc = p1;
var_nmodule = p2;
var = ((short int (*)(val*))(var_block->class->vft[COLOR_c__AExternCodeBlock__is_c_header]))(var_block) /* is_c_header on <var_block:AExternCodeBlock>*/;
if (var){
var1 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_ecc) /* header_custom on <var_ecc:CCompilationUnit>*/;
var2 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_c__Location__as_line_pragma]))(var2) /* as_line_pragma on <var2:Location>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_template__Template__add]))(var1, var3) /* add on <var1:Template>*/;
var4 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_ecc) /* header_custom on <var_ecc:CCompilationUnit>*/;
var5 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_template__Template__add]))(var4, var5) /* add on <var4:Template>*/;
} else {
var6 = ((short int (*)(val*))(var_block->class->vft[COLOR_c__AExternCodeBlock__is_c_body]))(var_block) /* is_c_body on <var_block:AExternCodeBlock>*/;
if (var6){
var7 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(var_ecc) /* body_custom on <var_ecc:CCompilationUnit>*/;
var8 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_c__Location__as_line_pragma]))(var8) /* as_line_pragma on <var8:Location>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_template__Template__add]))(var7, var9) /* add on <var7:Template>*/;
var10 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(var_ecc) /* body_impl on <var_ecc:CCompilationUnit>*/;
var11 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_template__Template__add]))(var10, var11) /* add on <var10:Template>*/;
} else {
}
}
RET_LABEL:;
}
/* method c#CLanguage#compile_module_block for (self: Object, AExternCodeBlock, CCompilationUnit, AModule) */
void VIRTUAL_c__CLanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
c__CLanguage__compile_module_block(self, p0, p1, p2);
RET_LABEL:;
}
/* method c#CLanguage#compile_extern_method for (self: CLanguage, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void c__CLanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AExternPropdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ExternCFunction */;
val* var1 /* : nullable MModule */;
val* var_fc /* var fc: ExternCFunction */;
val* var2 /* : Template */;
val* var3 /* : Location */;
val* var4 /* : String */;
val* var5 /* : Template */;
val* var6 /* : String */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_nmodule = p3;
var = NEW_c__ExternCFunction(&type_c__ExternCFunction);
var1 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 44);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var->class->vft[COLOR_c__ExternCFunction__init]))(var, var_m, var1) /* init on <var:ExternCFunction>*/;
var_fc = var;
var2 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__decls]))(var_fc) /* decls on <var_fc:ExternCFunction>*/;
var3 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_c__Location__as_line_pragma]))(var3) /* as_line_pragma on <var3:Location>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_template__Template__add]))(var2, var4) /* add on <var2:Template>*/;
var5 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:ExternCFunction>*/;
var6 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_template__Template__add]))(var5, var6) /* add on <var5:Template>*/;
((void (*)(val*, val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__add_exported_function]))(var_ecc, var_fc) /* add_exported_function on <var_ecc:CCompilationUnit>*/;
RET_LABEL:;
}
/* method c#CLanguage#compile_extern_method for (self: Object, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void VIRTUAL_c__CLanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
c__CLanguage__compile_extern_method(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method c#CLanguage#compile_extern_class for (self: CLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void c__CLanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_nmodule = p3;
RET_LABEL:;
}
/* method c#CLanguage#compile_extern_class for (self: Object, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void VIRTUAL_c__CLanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
c__CLanguage__compile_extern_class(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method c#CLanguage#get_ftype for (self: CLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* c__CLanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignCType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_c__ForeignCType(&type_c__ForeignCType);
var2 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_c__ForeignCType__init]))(var1, var2) /* init on <var1:ForeignCType>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CLanguage#get_ftype for (self: Object, AExternCodeBlock, AClassdef): ForeignType */
val* VIRTUAL_c__CLanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var1 /* : ForeignType */;
var1 = c__CLanguage__get_ftype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method c#CLanguage#compile_callback for (self: CLanguage, NitniCallback, AModule, MModule, CCompilationUnit) */
void c__CLanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_nmodule /* var nmodule: AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_ecc /* var ecc: CCompilationUnit */;
var_callback = p0;
var_nmodule = p1;
var_mmodule = p2;
var_ecc = p3;
((void (*)(val*, val*, val*))(var_callback->class->vft[COLOR_c__NitniCallback__compile_callback_to_c]))(var_callback, var_mmodule, var_ecc) /* compile_callback_to_c on <var_callback:NitniCallback>*/;
RET_LABEL:;
}
/* method c#CLanguage#compile_callback for (self: Object, NitniCallback, AModule, MModule, CCompilationUnit) */
void VIRTUAL_c__CLanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
c__CLanguage__compile_callback(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method c#AExternCodeBlock#is_c for (self: AExternCodeBlock): Bool */
short int c__AExternCodeBlock__is_c(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
var_ = var5;
if (var5){
var2 = var_;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "c";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (var6 == NULL) {
var11 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:nullable String>*/;
}
var2 = var11;
}
var_12 = var2;
if (var2){
var1 = var_12;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "c ";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 62);
show_backtrace(1);
} else {
var19 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_string__AbstractString__has_prefix]))(var13, var15) /* has_prefix on <var13:nullable String>*/;
}
var1 = var19;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#AExternCodeBlock#is_c for (self: Object): Bool */
short int VIRTUAL_c__AExternCodeBlock__is_c(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c__AExternCodeBlock__is_c(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#AExternCodeBlock#is_c_body for (self: AExternCodeBlock): Bool */
short int c__AExternCodeBlock__is_c_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
var_ = var5;
if (var5){
var2 = var_;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "c";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (var6 == NULL) {
var11 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:nullable String>*/;
}
var2 = var11;
}
var_12 = var2;
if (var2){
var1 = var_12;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "c body";
var17 = 6;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var13 == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var19 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var15) /* == on <var13:nullable String>*/;
}
var1 = var19;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#AExternCodeBlock#is_c_body for (self: Object): Bool */
short int VIRTUAL_c__AExternCodeBlock__is_c_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c__AExternCodeBlock__is_c_body(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#AExternCodeBlock#is_c_header for (self: AExternCodeBlock): Bool */
short int c__AExternCodeBlock__is_c_header(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
short int var6 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "c header";
var4 = 8;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (var1 == NULL) {
var6 = 0; /* <var2:String> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var2) /* == on <var1:nullable String>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#AExternCodeBlock#is_c_header for (self: Object): Bool */
short int VIRTUAL_c__AExternCodeBlock__is_c_header(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c__AExternCodeBlock__is_c_header(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#Location#as_line_pragma for (self: Location): String */
val* c__Location__as_line_pragma(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : nullable SourceFile */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "#line ";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var8 = BOX_kernel__Int(var7); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " \"";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 71);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_location__SourceFile__filename]))(var14) /* filename on <var14:nullable SourceFile>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\"\n";
var19 = 2;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
var21 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#Location#as_line_pragma for (self: Object): String */
val* VIRTUAL_c__Location__as_line_pragma(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__Location__as_line_pragma(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#AModule#c_compiler_options for (self: AModule): String */
val* c__AModule__c_compiler_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c__AModule___64dc_compiler_options].val; /* @c_compiler_options on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @c_compiler_options");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 75);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#AModule#c_compiler_options for (self: Object): String */
val* VIRTUAL_c__AModule__c_compiler_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__AModule__c_compiler_options(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#AModule#c_compiler_options= for (self: AModule, String) */
void c__AModule__c_compiler_options_61d(val* self, val* p0) {
self->attrs[COLOR_c__AModule___64dc_compiler_options].val = p0; /* @c_compiler_options on <self:AModule> */
RET_LABEL:;
}
/* method c#AModule#c_compiler_options= for (self: Object, String) */
void VIRTUAL_c__AModule__c_compiler_options_61d(val* self, val* p0) {
c__AModule__c_compiler_options_61d(self, p0);
RET_LABEL:;
}
/* method c#AModule#c_linker_options for (self: AModule): String */
val* c__AModule__c_linker_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c__AModule___64dc_linker_options].val; /* @c_linker_options on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @c_linker_options");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 76);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#AModule#c_linker_options for (self: Object): String */
val* VIRTUAL_c__AModule__c_linker_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__AModule__c_linker_options(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#AModule#c_linker_options= for (self: AModule, String) */
void c__AModule__c_linker_options_61d(val* self, val* p0) {
self->attrs[COLOR_c__AModule___64dc_linker_options].val = p0; /* @c_linker_options on <self:AModule> */
RET_LABEL:;
}
/* method c#AModule#c_linker_options= for (self: Object, String) */
void VIRTUAL_c__AModule__c_linker_options_61d(val* self, val* p0) {
c__AModule__c_linker_options_61d(self, p0);
RET_LABEL:;
}
/* method c#ExternCFile#init for (self: ExternCFile, String, String) */
void c__ExternCFile__init(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_cflags /* var cflags: String */;
var_filename = p0;
var_cflags = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_ffi_base__ExternFile__init]))(self, var_filename) /* init on <self:ExternCFile>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_c__ExternCFile__cflags_61d]))(self, var_cflags) /* cflags= on <self:ExternCFile>*/;
RET_LABEL:;
}
/* method c#ExternCFile#init for (self: Object, String, String) */
void VIRTUAL_c__ExternCFile__init(val* self, val* p0, val* p1) {
c__ExternCFile__init(self, p0, p1);
RET_LABEL:;
}
/* method c#ExternCFile#cflags for (self: ExternCFile): String */
val* c__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c__ExternCFile___64dcflags].val; /* @cflags on <self:ExternCFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cflags");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 90);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFile#cflags for (self: Object): String */
val* VIRTUAL_c__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__ExternCFile__cflags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFile#cflags= for (self: ExternCFile, String) */
void c__ExternCFile__cflags_61d(val* self, val* p0) {
self->attrs[COLOR_c__ExternCFile___64dcflags].val = p0; /* @cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method c#ExternCFile#cflags= for (self: Object, String) */
void VIRTUAL_c__ExternCFile__cflags_61d(val* self, val* p0) {
c__ExternCFile__cflags_61d(self, p0);
RET_LABEL:;
}
/* method c#ExternCFile#hash for (self: ExternCFile): Int */
long c__ExternCFile__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ExternFile__filename]))(self) /* filename on <self:ExternCFile>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:String>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#ExternCFile#hash for (self: Object): Int */
long VIRTUAL_c__ExternCFile__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = c__ExternCFile__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFile#== for (self: ExternCFile, nullable Object): Bool */
short int c__ExternCFile___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var4 /* : String */;
short int var5 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa ExternCFile */
cltype = type_c__ExternCFile.color;
idtype = type_c__ExternCFile.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ExternFile__filename]))(self) /* filename on <self:ExternCFile>*/;
var4 = ((val* (*)(val*))(var_o->class->vft[COLOR_ffi_base__ExternFile__filename]))(var_o) /* filename on <var_o:nullable Object(ExternCFile)>*/;
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:String>*/;
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#ExternCFile#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_c__ExternCFile___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c__ExternCFile___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ForeignCType#ctype for (self: ForeignCType): String */
val* c__ForeignCType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c__ForeignCType___64dctype].val; /* @ctype on <self:ForeignCType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ctype");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 100);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#ForeignCType#ctype for (self: Object): String */
val* VIRTUAL_c__ForeignCType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__ForeignCType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ForeignCType#ctype= for (self: ForeignCType, String) */
void c__ForeignCType__ctype_61d(val* self, val* p0) {
self->attrs[COLOR_c__ForeignCType___64dctype].val = p0; /* @ctype on <self:ForeignCType> */
RET_LABEL:;
}
/* method c#ForeignCType#ctype= for (self: Object, String) */
void VIRTUAL_c__ForeignCType__ctype_61d(val* self, val* p0) {
c__ForeignCType__ctype_61d(self, p0);
RET_LABEL:;
}
/* method c#ForeignCType#init for (self: ForeignCType, String) */
void c__ForeignCType__init(val* self, val* p0) {
val* var_ctype /* var ctype: String */;
var_ctype = p0;
((void (*)(val*))(self->class->vft[COLOR_ffi_base__ForeignType__init]))(self) /* init on <self:ForeignCType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_c__ForeignCType__ctype_61d]))(self, var_ctype) /* ctype= on <self:ForeignCType>*/;
RET_LABEL:;
}
/* method c#ForeignCType#init for (self: Object, String) */
void VIRTUAL_c__ForeignCType__init(val* self, val* p0) {
c__ForeignCType__init(self, p0);
RET_LABEL:;
}
/* method c#NitniCallback#compile_callback_to_c for (self: NitniCallback, MModule, CCompilationUnit) */
void c__NitniCallback__compile_callback_to_c(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: MModule */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
var_nmodule = p0;
var_ffi_ccu = p1;
RET_LABEL:;
}
/* method c#NitniCallback#compile_callback_to_c for (self: Object, MModule, CCompilationUnit) */
void VIRTUAL_c__NitniCallback__compile_callback_to_c(val* self, val* p0, val* p1) {
c__NitniCallback__compile_callback_to_c(self, p0, p1);
RET_LABEL:;
}
/* method c#Object#to_c_call_context for (self: Object): ToCCallContext */
val* c__Object__to_c_call_context(val* self) {
val* var /* : ToCCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : ToCCallContext */;
val* var2 /* : ToCCallContext */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_c__ToCCallContext(&type_c__ToCCallContext);
((void (*)(val*))(var2->class->vft[COLOR_c__ToCCallContext__init]))(var2) /* init on <var2:ToCCallContext>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#Object#to_c_call_context for (self: Object): ToCCallContext */
val* VIRTUAL_c__Object__to_c_call_context(val* self) {
val* var /* : ToCCallContext */;
val* var1 /* : ToCCallContext */;
var1 = c__Object__to_c_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#Object#from_c_call_context for (self: Object): FromCCallContext */
val* c__Object__from_c_call_context(val* self) {
val* var /* : FromCCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromCCallContext */;
val* var2 /* : FromCCallContext */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_c__FromCCallContext(&type_c__FromCCallContext);
((void (*)(val*))(var2->class->vft[COLOR_c__FromCCallContext__init]))(var2) /* init on <var2:FromCCallContext>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#Object#from_c_call_context for (self: Object): FromCCallContext */
val* VIRTUAL_c__Object__from_c_call_context(val* self) {
val* var /* : FromCCallContext */;
val* var1 /* : FromCCallContext */;
var1 = c__Object__from_c_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#MExplicitCall#compile_callback_to_c for (self: MExplicitCall, MModule, CCompilationUnit) */
void c__MExplicitCall__compile_callback_to_c(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
val* var /* : MProperty */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mproperty /* var mproperty: MMethod */;
val* var2 /* : MClassType */;
val* var3 /* : null */;
val* var4 /* : SignatureLength */;
val* var5 /* : String */;
val* var_full_cname /* var full_cname: String */;
val* var6 /* : MClassType */;
val* var7 /* : null */;
val* var8 /* : SignatureLength */;
val* var9 /* : String */;
val* var_friendly_cname /* var friendly_cname: String */;
val* var10 /* : Template */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
var_mmodule = p0;
var_ffi_ccu = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
/* <var:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethod", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 123);
show_backtrace(1);
}
var_mproperty = var;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var3 = NULL;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitCall>*/;
var5 = ((val* (*)(val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var2, var_mmodule, var3, var4) /* build_cname on <var_mproperty:MMethod>*/;
var_full_cname = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var7 = NULL;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__short_signature]))(self) /* short_signature on <self:MExplicitCall>*/;
var9 = ((val* (*)(val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var6, var_mmodule, var7, var8) /* build_cname on <var_mproperty:MMethod>*/;
var_friendly_cname = var9;
var10 = ((val* (*)(val*))(var_ffi_ccu->class->vft[COLOR_c_tools__CCompilationUnit__body_decl]))(var_ffi_ccu) /* body_decl on <var_ffi_ccu:CCompilationUnit>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "#define ";
var13 = 8;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = " ";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\n";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 5;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_friendly_cname;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[3] = (val*) var_full_cname;
((struct instance_array__NativeArray*)var27)->values[4] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_template__Template__add]))(var10, var28) /* add on <var10:Template>*/;
RET_LABEL:;
}
/* method c#MExplicitCall#compile_callback_to_c for (self: Object, MModule, CCompilationUnit) */
void VIRTUAL_c__MExplicitCall__compile_callback_to_c(val* self, val* p0, val* p1) {
c__MExplicitCall__compile_callback_to_c(self, p0, p1);
RET_LABEL:;
}
/* method c#ToCCallContext#init for (self: ToCCallContext) */
void c__ToCCallContext__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_nitni_utilities__CallContext__init]))(self) /* init on <self:ToCCallContext>*/;
RET_LABEL:;
}
/* method c#ToCCallContext#init for (self: Object) */
void VIRTUAL_c__ToCCallContext__init(val* self) {
c__ToCCallContext__init(self);
RET_LABEL:;
}
/* method c#ToCCallContext#name_mtype for (self: ToCCallContext, MType): String */
val* c__ToCCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
val* var5 /* : MClassKind */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : String */;
var_mtype = p0;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClass__kind]))(var3) /* kind on <var3:MClass>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:ToCCallContext>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:MClassKind>*/;
var1 = var6;
} else {
var1 = var_;
}
if (var1){
if (varonce) {
var7 = varonce;
} else {
var8 = "void *";
var9 = 6;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var = var7;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__cname]))(var_mtype) /* cname on <var_mtype:MType>*/;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#ToCCallContext#name_mtype for (self: Object, MType): String */
val* VIRTUAL_c__ToCCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__ToCCallContext__name_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method c#FromCCallContext#init for (self: FromCCallContext) */
void c__FromCCallContext__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_nitni_utilities__CallContext__init]))(self) /* init on <self:FromCCallContext>*/;
RET_LABEL:;
}
/* method c#FromCCallContext#init for (self: Object) */
void VIRTUAL_c__FromCCallContext__init(val* self) {
c__FromCCallContext__init(self);
RET_LABEL:;
}
/* method c#FromCCallContext#name_mtype for (self: FromCCallContext, MType): String */
val* c__FromCCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
var1 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__cname]))(var_mtype) /* cname on <var_mtype:MType>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#FromCCallContext#name_mtype for (self: Object, MType): String */
val* VIRTUAL_c__FromCCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c__FromCCallContext__name_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFunction#method for (self: ExternCFunction): AExternPropdef */
val* c__ExternCFunction__method(val* self) {
val* var /* : AExternPropdef */;
val* var1 /* : AExternPropdef */;
var1 = self->attrs[COLOR_c__ExternCFunction___64dmethod].val; /* @method on <self:ExternCFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @method");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 156);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFunction#method for (self: Object): AExternPropdef */
val* VIRTUAL_c__ExternCFunction__method(val* self) {
val* var /* : AExternPropdef */;
val* var1 /* : AExternPropdef */;
var1 = c__ExternCFunction__method(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c#ExternCFunction#method= for (self: ExternCFunction, AExternPropdef) */
void c__ExternCFunction__method_61d(val* self, val* p0) {
self->attrs[COLOR_c__ExternCFunction___64dmethod].val = p0; /* @method on <self:ExternCFunction> */
RET_LABEL:;
}
/* method c#ExternCFunction#method= for (self: Object, AExternPropdef) */
void VIRTUAL_c__ExternCFunction__method_61d(val* self, val* p0) {
c__ExternCFunction__method_61d(self, p0);
RET_LABEL:;
}
/* method c#ExternCFunction#init for (self: ExternCFunction, AExternPropdef, MModule) */
void c__ExternCFunction__init(val* self, val* p0, val* p1) {
val* var_method /* var method: AExternPropdef */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable MPropDef */;
val* var1 /* : MClassDef */;
val* var2 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MProperty */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : SignatureLength */;
val* var10 /* : FromCCallContext */;
val* var11 /* : String */;
val* var_csignature /* var csignature: String */;
var_method = p0;
var_mmodule = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_c__ExternCFunction__method_61d]))(self, var_method) /* method= on <self:ExternCFunction>*/;
var = ((val* (*)(val*))(var_method->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_method) /* mpropdef on <var_method:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 162);
show_backtrace(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mclassdef]))(var) /* mclassdef on <var:nullable MPropDef(nullable MMethodDef)>*/;
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:MClassDef>*/;
var_recv_mtype = var2;
var3 = ((val* (*)(val*))(var_method->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_method) /* mpropdef on <var_method:AExternPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 163);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mproperty]))(var3) /* mproperty on <var3:nullable MPropDef(nullable MMethodDef)>*/;
}
if (varonce) {
var5 = varonce;
} else {
var6 = "___impl";
var7 = 7;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:ExternCFunction>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_c__Object__from_c_call_context]))(self) /* from_c_call_context on <self:ExternCFunction>*/;
var11 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var4->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var4, var_recv_mtype, var_mmodule, var5, var9, var10) /* build_csignature on <var4:MProperty(MMethod)>*/;
var_csignature = var11;
((void (*)(val*, val*))(self->class->vft[COLOR_c_tools__CFunction__init]))(self, var_csignature) /* init on <self:ExternCFunction>*/;
RET_LABEL:;
}
/* method c#ExternCFunction#init for (self: Object, AExternPropdef, MModule) */
void VIRTUAL_c__ExternCFunction__init(val* self, val* p0, val* p1) {
c__ExternCFunction__init(self, p0, p1);
RET_LABEL:;
}
