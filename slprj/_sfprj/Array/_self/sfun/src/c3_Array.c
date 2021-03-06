/* Include files */

#include "blascompat32.h"
#include "Array_sfun.h"
#include "c3_Array.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Array_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c3_debug_family_names[23] = { "q", "K", "n", "T", "Rs", "Rp",
  "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io", "Ir",
  "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void initialize_params_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void enable_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void disable_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_Array(SFc3_ArrayInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_Array(SFc3_ArrayInstanceStruct
  *chartInstance);
static void set_sim_state_c3_Array(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_st);
static void finalize_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void sf_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void c3_chartstep_c3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void initSimStructsc3_Array(SFc3_ArrayInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance, const
  mxArray *c3_I, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_c_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static uint8_T c3_d_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_Array, const char_T *c3_identifier);
static uint8_T c3_e_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_ArrayInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_is_active_c3_Array = 0U;
}

static void initialize_params_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
}

static void enable_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_Array(SFc3_ArrayInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c3_Array(SFc3_ArrayInstanceStruct
  *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  uint8_T c3_b_hoistedGlobal;
  uint8_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  real_T *c3_I;
  c3_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(2), FALSE);
  c3_hoistedGlobal = *c3_I;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = chartInstance->c3_is_active_c3_Array;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  sf_mex_assign(&c3_st, c3_y, FALSE);
  return c3_st;
}

static void set_sim_state_c3_Array(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T *c3_I;
  c3_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c3_doneDoubleBufferReInit = TRUE;
  c3_u = sf_mex_dup(c3_st);
  *c3_I = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 0)),
    "I");
  chartInstance->c3_is_active_c3_Array = c3_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 1)), "is_active_c3_Array");
  sf_mex_destroy(&c3_u);
  c3_update_debugger_state_c3_Array(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void finalize_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
}

static void sf_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
  real_T *c3_V;
  real_T *c3_I;
  real_T *c3_Radiacion;
  real_T *c3_Temp;
  c3_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c3_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c3_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c3_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c3_Temp, 3U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_Array(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArrayMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c3_chartstep_c3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
  real_T c3_hoistedGlobal;
  real_T c3_b_hoistedGlobal;
  real_T c3_c_hoistedGlobal;
  real_T c3_V;
  real_T c3_Radiacion;
  real_T c3_Temp;
  uint32_T c3_debug_family_var_map[23];
  real_T c3_q;
  real_T c3_K;
  real_T c3_n;
  real_T c3_T;
  real_T c3_Rs;
  real_T c3_Rp;
  real_T c3_Vt;
  real_T c3_Ns;
  real_T c3_Vc;
  real_T c3_Isc;
  real_T c3_Alfa;
  real_T c3_Iph;
  real_T c3_Voc_ref;
  real_T c3_Beta;
  real_T c3_Voc;
  real_T c3_Io;
  real_T c3_Ir;
  real_T c3_nargin = 3.0;
  real_T c3_nargout = 1.0;
  real_T c3_I;
  real_T c3_b;
  real_T c3_y;
  real_T c3_A;
  real_T c3_x;
  real_T c3_b_x;
  real_T c3_c_x;
  real_T c3_d_x;
  real_T c3_b_b;
  real_T c3_b_y;
  real_T c3_b_A;
  real_T c3_e_x;
  real_T c3_f_x;
  real_T c3_c_y;
  real_T c3_c_b;
  real_T c3_d_y;
  real_T c3_a;
  real_T c3_d_b;
  real_T c3_e_b;
  real_T c3_e_y;
  real_T c3_f_b;
  real_T c3_c_A;
  real_T c3_B;
  real_T c3_g_x;
  real_T c3_f_y;
  real_T c3_h_x;
  real_T c3_g_y;
  real_T c3_h_y;
  real_T c3_i_x;
  real_T c3_j_x;
  real_T c3_b_B;
  real_T c3_i_y;
  real_T c3_j_y;
  int32_T c3_i;
  real_T c3_k_x;
  real_T c3_k_y;
  real_T c3_l_x;
  real_T c3_l_y;
  real_T c3_z;
  real_T c3_m_x;
  real_T c3_n_x;
  real_T c3_d_A;
  real_T c3_o_x;
  real_T c3_p_x;
  real_T c3_m_y;
  real_T c3_n_y;
  real_T c3_o_y;
  real_T c3_b_z;
  real_T c3_b_a;
  real_T c3_g_b;
  real_T c3_p_y;
  real_T c3_q_x;
  real_T c3_q_y;
  real_T c3_r_x;
  real_T c3_r_y;
  real_T c3_c_z;
  real_T c3_s_x;
  real_T c3_t_x;
  real_T c3_u_x;
  real_T c3_s_y;
  real_T c3_v_x;
  real_T c3_t_y;
  real_T c3_d_z;
  real_T *c3_b_Temp;
  real_T *c3_b_Radiacion;
  real_T *c3_b_V;
  real_T *c3_b_I;
  c3_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  c3_hoistedGlobal = *c3_b_V;
  c3_b_hoistedGlobal = *c3_b_Radiacion;
  c3_c_hoistedGlobal = *c3_b_Temp;
  c3_V = c3_hoistedGlobal;
  c3_Radiacion = c3_b_hoistedGlobal;
  c3_Temp = c3_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c3_debug_family_names,
    c3_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c3_q, 0U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_K, 1U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_n, 2U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_T, 3U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_Rs, 4U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Rp, 5U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_Vt, 6U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_Ns, 7U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_Vc, 8U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_Isc, 9U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Alfa, 10U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_Iph, 11U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_Voc_ref, 12U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Beta, 13U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_Voc, 14U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_Io, 15U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_Ir, 16U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_nargin, 17U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_nargout, 18U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_V, 19U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Radiacion, 20U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Temp, 21U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_I, 22U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 3);
  c3_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 5);
  c3_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 7);
  c3_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 9);
  c3_T = 273.15 + c3_Temp;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 11);
  c3_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 13);
  c3_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 15);
  c3_b = c3_T;
  c3_y = 1.79484344E-23 * c3_b;
  c3_A = c3_y;
  c3_x = c3_A;
  c3_b_x = c3_x;
  c3_Vt = c3_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 16);
  c3_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 17);
  c3_c_x = c3_V;
  c3_d_x = c3_c_x;
  c3_Vc = c3_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 19);
  c3_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 20);
  c3_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 22);
  c3_b_b = c3_Radiacion;
  c3_b_y = 5.433 * c3_b_b;
  c3_b_A = c3_b_y;
  c3_e_x = c3_b_A;
  c3_f_x = c3_e_x;
  c3_c_y = c3_f_x / 1000.0;
  c3_c_b = c3_Temp - 25.0;
  c3_d_y = 0.00037 * c3_c_b;
  c3_a = c3_c_y;
  c3_d_b = 1.0 + c3_d_y;
  c3_Iph = c3_a * c3_d_b;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 24);
  c3_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 25);
  c3_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 26);
  c3_e_b = c3_Temp - 25.0;
  c3_e_y = -0.0034000000000000002 * c3_e_b;
  c3_f_b = 1.0 + c3_e_y;
  c3_Voc = 0.6166666666666667 * c3_f_b;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 32);
  c3_c_A = c3_Voc;
  c3_B = c3_Vt;
  c3_g_x = c3_c_A;
  c3_f_y = c3_B;
  c3_h_x = c3_g_x;
  c3_g_y = c3_f_y;
  c3_h_y = c3_h_x / c3_g_y;
  c3_i_x = c3_h_y;
  c3_j_x = c3_i_x;
  c3_j_x = muDoubleScalarExp(c3_j_x);
  c3_b_B = c3_j_x - 1.0;
  c3_i_y = c3_b_B;
  c3_j_y = c3_i_y;
  c3_Io = 5.433 / c3_j_y;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 33);
  c3_Ir = c3_Io;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 36);
  c3_I = 0.0;
  c3_i = 0;
  while (c3_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 38);
    c3_k_x = c3_Vc + c3_I * c3_Rs;
    c3_k_y = c3_Vt;
    c3_l_x = c3_k_x;
    c3_l_y = c3_k_y;
    c3_z = c3_l_x / c3_l_y;
    c3_m_x = c3_z;
    c3_n_x = c3_m_x;
    c3_n_x = muDoubleScalarExp(c3_n_x);
    c3_d_A = c3_Vc + c3_I * c3_Rs;
    c3_o_x = c3_d_A;
    c3_p_x = c3_o_x;
    c3_m_y = c3_p_x / 100.0;
    c3_n_y = c3_Vt;
    c3_o_y = c3_n_y;
    c3_b_z = 0.015 / c3_o_y;
    c3_b_a = c3_Ir;
    c3_g_b = c3_b_z;
    c3_p_y = c3_b_a * c3_g_b;
    c3_q_x = c3_Vc + c3_I * c3_Rs;
    c3_q_y = c3_Vt;
    c3_r_x = c3_q_x;
    c3_r_y = c3_q_y;
    c3_c_z = c3_r_x / c3_r_y;
    c3_s_x = c3_c_z;
    c3_t_x = c3_s_x;
    c3_t_x = muDoubleScalarExp(c3_t_x);
    c3_u_x = ((c3_Iph - c3_I) - c3_Ir * (c3_n_x - 1.0)) + c3_m_y;
    c3_s_y = (-1.0 - c3_p_y * c3_t_x) - 0.00015;
    c3_v_x = c3_u_x;
    c3_t_y = c3_s_y;
    c3_d_z = c3_v_x / c3_t_y;
    c3_I -= c3_d_z;
    c3_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c3_b_I = c3_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
}

static void initSimStructsc3_Array(SFc3_ArrayInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc3_ArrayInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance, const
  mxArray *c3_I, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_I), &c3_thisId);
  sf_mex_destroy(&c3_I);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_I;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc3_ArrayInstanceStruct *)chartInstanceVoid;
  c3_I = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_I), &c3_thisId);
  sf_mex_destroy(&c3_I);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_Array_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo;
  c3_ResolvedFunctionInfo c3_info[7];
  c3_ResolvedFunctionInfo (*c3_b_info)[7];
  const mxArray *c3_m0 = NULL;
  int32_T c3_i0;
  c3_ResolvedFunctionInfo *c3_r0;
  c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  c3_b_info = (c3_ResolvedFunctionInfo (*)[7])c3_info;
  (*c3_b_info)[0].context = "";
  (*c3_b_info)[0].name = "mtimes";
  (*c3_b_info)[0].dominantType = "double";
  (*c3_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c3_b_info)[0].fileTimeLo = 1289530492U;
  (*c3_b_info)[0].fileTimeHi = 0U;
  (*c3_b_info)[0].mFileTimeLo = 0U;
  (*c3_b_info)[0].mFileTimeHi = 0U;
  (*c3_b_info)[1].context = "";
  (*c3_b_info)[1].name = "mrdivide";
  (*c3_b_info)[1].dominantType = "double";
  (*c3_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c3_b_info)[1].fileTimeLo = 1325134938U;
  (*c3_b_info)[1].fileTimeHi = 0U;
  (*c3_b_info)[1].mFileTimeLo = 1319744366U;
  (*c3_b_info)[1].mFileTimeHi = 0U;
  (*c3_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c3_b_info)[2].name = "rdivide";
  (*c3_b_info)[2].dominantType = "double";
  (*c3_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c3_b_info)[2].fileTimeLo = 1286836844U;
  (*c3_b_info)[2].fileTimeHi = 0U;
  (*c3_b_info)[2].mFileTimeLo = 0U;
  (*c3_b_info)[2].mFileTimeHi = 0U;
  (*c3_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c3_b_info)[3].name = "eml_div";
  (*c3_b_info)[3].dominantType = "double";
  (*c3_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c3_b_info)[3].fileTimeLo = 1313365810U;
  (*c3_b_info)[3].fileTimeHi = 0U;
  (*c3_b_info)[3].mFileTimeLo = 0U;
  (*c3_b_info)[3].mFileTimeHi = 0U;
  (*c3_b_info)[4].context = "";
  (*c3_b_info)[4].name = "rdivide";
  (*c3_b_info)[4].dominantType = "double";
  (*c3_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c3_b_info)[4].fileTimeLo = 1286836844U;
  (*c3_b_info)[4].fileTimeHi = 0U;
  (*c3_b_info)[4].mFileTimeLo = 0U;
  (*c3_b_info)[4].mFileTimeHi = 0U;
  (*c3_b_info)[5].context = "";
  (*c3_b_info)[5].name = "exp";
  (*c3_b_info)[5].dominantType = "double";
  (*c3_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c3_b_info)[5].fileTimeLo = 1286836740U;
  (*c3_b_info)[5].fileTimeHi = 0U;
  (*c3_b_info)[5].mFileTimeLo = 0U;
  (*c3_b_info)[5].mFileTimeHi = 0U;
  (*c3_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c3_b_info)[6].name = "eml_scalar_exp";
  (*c3_b_info)[6].dominantType = "double";
  (*c3_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c3_b_info)[6].fileTimeLo = 1301346464U;
  (*c3_b_info)[6].fileTimeHi = 0U;
  (*c3_b_info)[6].mFileTimeLo = 0U;
  (*c3_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c3_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c3_i0 = 0; c3_i0 < 7; c3_i0++) {
    c3_r0 = &c3_info[c3_i0];
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c3_r0->context)), "context", "nameCaptureInfo",
                    c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c3_r0->name)), "name", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c3_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c3_r0->resolved)), "resolved", "nameCaptureInfo",
                    c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c3_i0);
  }

  sf_mex_assign(&c3_nameCaptureInfo, c3_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c3_nameCaptureInfo);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc3_ArrayInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static int32_T c3_c_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i1;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i1, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc3_ArrayInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_Array, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_active_c3_Array),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_Array);
  return c3_y;
}

static uint8_T c3_e_emlrt_marshallIn(SFc3_ArrayInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_ArrayInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c3_Array_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c3_Array_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("1KPkaEZ7HoPbK8UmULOSJ");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c3_Array(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c3_Array\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_Array_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_ArrayInstanceStruct *chartInstance;
    chartInstance = (SFc3_ArrayInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_ArrayMachineNumber_,
          3,
          1,
          1,
          4,
          0,
          0,
          0,
          0,
          0,
          &(chartInstance->chartNumber),
          &(chartInstance->instanceNumber),
          ssGetPath(S),
          (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_ArrayMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_ArrayMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_ArrayMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"V");
          _SFD_SET_DATA_PROPS(1,2,0,1,"I");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Radiacion");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Temp");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,1,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,947);
        _SFD_CV_INIT_EML_FOR(0,1,0,777,788,942);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c3_V;
          real_T *c3_I;
          real_T *c3_Radiacion;
          real_T *c3_Temp;
          c3_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c3_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c3_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c3_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_Temp);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_ArrayMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "kwI0XVztGL8WHa4f1tv08G";
}

static void sf_opaque_initialize_c3_Array(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_ArrayInstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
  initialize_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_Array(void *chartInstanceVar)
{
  enable_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_Array(void *chartInstanceVar)
{
  disable_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_Array(void *chartInstanceVar)
{
  sf_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c3_Array(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_Array((SFc3_ArrayInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_Array();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c3_Array(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_Array();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_Array((SFc3_ArrayInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c3_Array(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_Array(S);
}

static void sf_opaque_set_sim_state_c3_Array(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c3_Array(S, st);
}

static void sf_opaque_terminate_c3_Array(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_ArrayInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Array_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_Array((SFc3_ArrayInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_Array(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_Array((SFc3_ArrayInstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Array_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,3,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2281720516U));
  ssSetChecksum1(S,(4132229721U));
  ssSetChecksum2(S,(175296108U));
  ssSetChecksum3(S,(991465833U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c3_Array(SimStruct *S)
{
  SFc3_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc3_ArrayInstanceStruct *)malloc(sizeof
    (SFc3_ArrayInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_ArrayInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_Array;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_Array;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_Array;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_Array;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_Array;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_Array;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_Array;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_Array;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_Array;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_Array;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_Array;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c3_Array_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_Array(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_Array(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_Array(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_Array_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
