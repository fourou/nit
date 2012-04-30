/* This C header file is generated by NIT to compile modules and programs that requires ./global/reachable_from_init_method_analysis. */
#ifndef global___reachable_from_init_method_analysis_sep
#define global___reachable_from_init_method_analysis_sep
#include "global___reachable_method_analysis._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis[];

extern const classtable_elt_t VFT_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis[];
extern const char *LOCATE_global___reachable_from_init_method_analysis;
extern const int SFT_global___reachable_from_init_method_analysis[];
#define ATTR_global___reachable_from_init_method_analysis___Program____rfima(recv) ATTR(recv, (SFT_global___reachable_from_init_method_analysis[0] + 0))
#define CALL_global___reachable_from_init_method_analysis___Program___rfima(recv) ((global___reachable_from_init_method_analysis___Program___rfima_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[1] + 0)))
#define CALL_global___reachable_from_init_method_analysis___Program___rfima__eq(recv) ((global___reachable_from_init_method_analysis___Program___rfima__eq_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[1] + 1)))
#define CALL_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init(recv) ((global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[1] + 2)))
#define CALL_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init(recv) ((global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[1] + 3)))
#define ID_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[2])
#define COLOR_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[3])
#define INIT_TABLE_POS_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[4] + 0)
#define CALL_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init(recv) ((global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[4] + 1)))
#define CALL_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init(recv) ((global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[4] + 2)))
#define ID_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[5])
#define COLOR_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[6])
#define INIT_TABLE_POS_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis (SFT_global___reachable_from_init_method_analysis[7] + 0)
#define CALL_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init(recv) ((global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init_t)CALL((recv), (SFT_global___reachable_from_init_method_analysis[7] + 1)))
static const char * const LOCATE_global___reachable_from_init_method_analysis___Program___rfima = "reachable_from_init_method_analysis::Program::rfima";
val_t global___reachable_from_init_method_analysis___Program___rfima(val_t p0);
typedef val_t (*global___reachable_from_init_method_analysis___Program___rfima_t)(val_t p0);
static const char * const LOCATE_global___reachable_from_init_method_analysis___Program___rfima__eq = "reachable_from_init_method_analysis::Program::rfima=";
void global___reachable_from_init_method_analysis___Program___rfima__eq(val_t p0, val_t p1);
typedef void (*global___reachable_from_init_method_analysis___Program___rfima__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init = "reachable_from_init_method_analysis::Program::dump_reachable_methods_from_init";
void global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init(val_t p0, val_t p1);
typedef void (*global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_t)(val_t p0, val_t p1);
  void OC_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_4(struct stack_frame_t *closctx, val_t p0);
  typedef void (*OC_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_4_t)(struct stack_frame_t *closctx, val_t p0);
static const char * const LOCATE_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init = "reachable_from_init_method_analysis::Program::dump_unreachable_methods_from_init";
void global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init(val_t p0, val_t p1);
typedef void (*global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_t)(val_t p0, val_t p1);
  void OC_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_4(struct stack_frame_t *closctx, val_t p0);
  typedef void (*OC_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_4_t)(struct stack_frame_t *closctx, val_t p0);
val_t NEW_Program_program___Program___init(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init = "reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_iroutine_reachable_from_init";
val_t global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init(val_t p0, val_t p1);
typedef val_t (*global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init_t)(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init = "reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_method_reachable_from_init";
val_t global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init(val_t p0, val_t p1);
typedef val_t (*global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init_t)(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::(reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_iroutine_reachable_from_init)";
val_t global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init(val_t p0, val_t p1);
typedef val_t (*global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init_t)(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::(reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_method_reachable_from_init)";
val_t global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init(val_t p0, val_t p1);
typedef val_t (*global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init_t)(val_t p0, val_t p1);
static const char * const LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::init";
void global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init(val_t p0, int* init_table);
typedef void (*global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init_t)(val_t p0, int* init_table);
val_t NEW_DefaultReachableFromInitMethodAnalysis_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init();
#endif