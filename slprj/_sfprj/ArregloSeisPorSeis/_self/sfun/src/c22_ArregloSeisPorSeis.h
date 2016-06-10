#ifndef __c22_ArregloSeisPorSeis_h__
#define __c22_ArregloSeisPorSeis_h__

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
} c22_ResolvedFunctionInfo;

typedef struct {
  int32_T c22_sfEvent;
  boolean_T c22_isStable;
  boolean_T c22_doneDoubleBufferReInit;
  uint8_T c22_is_active_c22_ArregloSeisPorSeis;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
} SFc22_ArregloSeisPorSeisInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c22_ArregloSeisPorSeis_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c22_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
extern void c22_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
