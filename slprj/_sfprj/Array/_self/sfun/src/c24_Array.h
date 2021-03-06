#ifndef __c24_Array_h__
#define __c24_Array_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c24_ResolvedFunctionInfo;

typedef struct {
  int32_T c24_sfEvent;
  boolean_T c24_isStable;
  boolean_T c24_doneDoubleBufferReInit;
  uint8_T c24_is_active_c24_Array;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
} SFc24_ArrayInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c24_Array_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c24_Array_get_check_sum(mxArray *plhs[]);
extern void c24_Array_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
