#ifndef __c35_ArregloSeisPorSeis_h__
#define __c35_ArregloSeisPorSeis_h__

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
} c35_ResolvedFunctionInfo;

typedef struct {
  int32_T c35_sfEvent;
  boolean_T c35_isStable;
  boolean_T c35_doneDoubleBufferReInit;
  uint8_T c35_is_active_c35_ArregloSeisPorSeis;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
} SFc35_ArregloSeisPorSeisInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c35_ArregloSeisPorSeis_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c35_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
extern void c35_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
