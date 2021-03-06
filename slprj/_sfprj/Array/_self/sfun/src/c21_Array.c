/* Include files */

#include "blascompat32.h"
#include "Array_sfun.h"
#include "c21_Array.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Array_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c21_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void initialize_params_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void enable_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void disable_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void c21_update_debugger_state_c21_Array(SFc21_ArrayInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c21_Array(SFc21_ArrayInstanceStruct
  *chartInstance);
static void set_sim_state_c21_Array(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_st);
static void finalize_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void sf_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void c21_chartstep_c21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void initSimStructsc21_Array(SFc21_ArrayInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber);
static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static real_T c21_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_I, const char_T *c21_identifier);
static real_T c21_b_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static int32_T c21_c_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static uint8_T c21_d_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_b_is_active_c21_Array, const char_T *c21_identifier);
static uint8_T c21_e_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info(SFc21_ArrayInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c21_is_active_c21_Array = 0U;
}

static void initialize_params_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
}

static void enable_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c21_update_debugger_state_c21_Array(SFc21_ArrayInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c21_Array(SFc21_ArrayInstanceStruct
  *chartInstance)
{
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  real_T c21_hoistedGlobal;
  real_T c21_u;
  const mxArray *c21_b_y = NULL;
  uint8_T c21_b_hoistedGlobal;
  uint8_T c21_b_u;
  const mxArray *c21_c_y = NULL;
  real_T *c21_I;
  c21_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellarray(2), FALSE);
  c21_hoistedGlobal = *c21_I;
  c21_u = c21_hoistedGlobal;
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_b_hoistedGlobal = chartInstance->c21_is_active_c21_Array;
  c21_b_u = c21_b_hoistedGlobal;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y, FALSE);
  return c21_st;
}

static void set_sim_state_c21_Array(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_st)
{
  const mxArray *c21_u;
  real_T *c21_I;
  c21_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c21_doneDoubleBufferReInit = TRUE;
  c21_u = sf_mex_dup(c21_st);
  *c21_I = c21_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c21_u,
    0)), "I");
  chartInstance->c21_is_active_c21_Array = c21_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c21_u, 1)), "is_active_c21_Array");
  sf_mex_destroy(&c21_u);
  c21_update_debugger_state_c21_Array(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void finalize_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
}

static void sf_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
  real_T *c21_V;
  real_T *c21_I;
  real_T *c21_Radiacion;
  real_T *c21_Temp;
  c21_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c21_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c21_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c21_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c21_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c21_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c21_Temp, 3U);
  chartInstance->c21_sfEvent = CALL_EVENT;
  c21_chartstep_c21_Array(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArrayMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c21_chartstep_c21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
  real_T c21_hoistedGlobal;
  real_T c21_b_hoistedGlobal;
  real_T c21_c_hoistedGlobal;
  real_T c21_V;
  real_T c21_Radiacion;
  real_T c21_Temp;
  uint32_T c21_debug_family_var_map[23];
  real_T c21_q;
  real_T c21_K;
  real_T c21_n;
  real_T c21_T;
  real_T c21_Rs;
  real_T c21_Rp;
  real_T c21_Vt;
  real_T c21_Ns;
  real_T c21_Vc;
  real_T c21_Isc;
  real_T c21_Alfa;
  real_T c21_Iph;
  real_T c21_Voc_ref;
  real_T c21_Beta;
  real_T c21_Voc;
  real_T c21_Io;
  real_T c21_Ir;
  real_T c21_nargin = 3.0;
  real_T c21_nargout = 1.0;
  real_T c21_I;
  real_T c21_b;
  real_T c21_y;
  real_T c21_A;
  real_T c21_x;
  real_T c21_b_x;
  real_T c21_c_x;
  real_T c21_d_x;
  real_T c21_b_b;
  real_T c21_b_y;
  real_T c21_b_A;
  real_T c21_e_x;
  real_T c21_f_x;
  real_T c21_c_y;
  real_T c21_c_b;
  real_T c21_d_y;
  real_T c21_a;
  real_T c21_d_b;
  real_T c21_e_b;
  real_T c21_e_y;
  real_T c21_f_b;
  real_T c21_c_A;
  real_T c21_B;
  real_T c21_g_x;
  real_T c21_f_y;
  real_T c21_h_x;
  real_T c21_g_y;
  real_T c21_h_y;
  real_T c21_i_x;
  real_T c21_j_x;
  real_T c21_b_B;
  real_T c21_i_y;
  real_T c21_j_y;
  int32_T c21_i;
  real_T c21_k_x;
  real_T c21_k_y;
  real_T c21_l_x;
  real_T c21_l_y;
  real_T c21_z;
  real_T c21_m_x;
  real_T c21_n_x;
  real_T c21_d_A;
  real_T c21_o_x;
  real_T c21_p_x;
  real_T c21_m_y;
  real_T c21_n_y;
  real_T c21_o_y;
  real_T c21_b_z;
  real_T c21_b_a;
  real_T c21_g_b;
  real_T c21_p_y;
  real_T c21_q_x;
  real_T c21_q_y;
  real_T c21_r_x;
  real_T c21_r_y;
  real_T c21_c_z;
  real_T c21_s_x;
  real_T c21_t_x;
  real_T c21_u_x;
  real_T c21_s_y;
  real_T c21_v_x;
  real_T c21_t_y;
  real_T c21_d_z;
  real_T *c21_b_Temp;
  real_T *c21_b_Radiacion;
  real_T *c21_b_V;
  real_T *c21_b_I;
  c21_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c21_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c21_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  c21_hoistedGlobal = *c21_b_V;
  c21_b_hoistedGlobal = *c21_b_Radiacion;
  c21_c_hoistedGlobal = *c21_b_Temp;
  c21_V = c21_hoistedGlobal;
  c21_Radiacion = c21_b_hoistedGlobal;
  c21_Temp = c21_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c21_debug_family_names,
    c21_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c21_q, 0U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_K, 1U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_n, 2U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_T, 3U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_Rs, 4U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_Rp, 5U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_Vt, 6U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_Ns, 7U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_Vc, 8U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_Isc, 9U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_Alfa, 10U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_Iph, 11U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_Voc_ref, 12U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_Beta, 13U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_Voc, 14U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c21_Io, 15U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c21_Ir, 16U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c21_nargin, 17U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c21_nargout, 18U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_V, 19U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_Radiacion, 20U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c21_Temp, 21U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_I, 22U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 3);
  c21_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 5);
  c21_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 7);
  c21_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 9);
  c21_T = 273.15 + c21_Temp;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 11);
  c21_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 13);
  c21_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 15);
  c21_b = c21_T;
  c21_y = 1.79484344E-23 * c21_b;
  c21_A = c21_y;
  c21_x = c21_A;
  c21_b_x = c21_x;
  c21_Vt = c21_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 16);
  c21_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 17);
  c21_c_x = c21_V;
  c21_d_x = c21_c_x;
  c21_Vc = c21_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 19);
  c21_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 20);
  c21_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 22);
  c21_b_b = c21_Radiacion;
  c21_b_y = 5.433 * c21_b_b;
  c21_b_A = c21_b_y;
  c21_e_x = c21_b_A;
  c21_f_x = c21_e_x;
  c21_c_y = c21_f_x / 1000.0;
  c21_c_b = c21_Temp - 25.0;
  c21_d_y = 0.00037 * c21_c_b;
  c21_a = c21_c_y;
  c21_d_b = 1.0 + c21_d_y;
  c21_Iph = c21_a * c21_d_b;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 24);
  c21_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 25);
  c21_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 26);
  c21_e_b = c21_Temp - 25.0;
  c21_e_y = -0.0034000000000000002 * c21_e_b;
  c21_f_b = 1.0 + c21_e_y;
  c21_Voc = 0.6166666666666667 * c21_f_b;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 32);
  c21_c_A = c21_Voc;
  c21_B = c21_Vt;
  c21_g_x = c21_c_A;
  c21_f_y = c21_B;
  c21_h_x = c21_g_x;
  c21_g_y = c21_f_y;
  c21_h_y = c21_h_x / c21_g_y;
  c21_i_x = c21_h_y;
  c21_j_x = c21_i_x;
  c21_j_x = muDoubleScalarExp(c21_j_x);
  c21_b_B = c21_j_x - 1.0;
  c21_i_y = c21_b_B;
  c21_j_y = c21_i_y;
  c21_Io = 5.433 / c21_j_y;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 33);
  c21_Ir = c21_Io;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 36);
  c21_I = 0.0;
  c21_i = 0;
  while (c21_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 38);
    c21_k_x = c21_Vc + c21_I * c21_Rs;
    c21_k_y = c21_Vt;
    c21_l_x = c21_k_x;
    c21_l_y = c21_k_y;
    c21_z = c21_l_x / c21_l_y;
    c21_m_x = c21_z;
    c21_n_x = c21_m_x;
    c21_n_x = muDoubleScalarExp(c21_n_x);
    c21_d_A = c21_Vc + c21_I * c21_Rs;
    c21_o_x = c21_d_A;
    c21_p_x = c21_o_x;
    c21_m_y = c21_p_x / 100.0;
    c21_n_y = c21_Vt;
    c21_o_y = c21_n_y;
    c21_b_z = 0.015 / c21_o_y;
    c21_b_a = c21_Ir;
    c21_g_b = c21_b_z;
    c21_p_y = c21_b_a * c21_g_b;
    c21_q_x = c21_Vc + c21_I * c21_Rs;
    c21_q_y = c21_Vt;
    c21_r_x = c21_q_x;
    c21_r_y = c21_q_y;
    c21_c_z = c21_r_x / c21_r_y;
    c21_s_x = c21_c_z;
    c21_t_x = c21_s_x;
    c21_t_x = muDoubleScalarExp(c21_t_x);
    c21_u_x = ((c21_Iph - c21_I) - c21_Ir * (c21_n_x - 1.0)) + c21_m_y;
    c21_s_y = (-1.0 - c21_p_y * c21_t_x) - 0.00015;
    c21_v_x = c21_u_x;
    c21_t_y = c21_s_y;
    c21_d_z = c21_v_x / c21_t_y;
    c21_I -= c21_d_z;
    c21_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c21_b_I = c21_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
}

static void initSimStructsc21_Array(SFc21_ArrayInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber)
{
}

static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  real_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc21_ArrayInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(real_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, FALSE);
  return c21_mxArrayOutData;
}

static real_T c21_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_I, const char_T *c21_identifier)
{
  real_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_I), &c21_thisId);
  sf_mex_destroy(&c21_I);
  return c21_y;
}

static real_T c21_b_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_y;
  real_T c21_d0;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d0, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_I;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  SFc21_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc21_ArrayInstanceStruct *)chartInstanceVoid;
  c21_I = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_I), &c21_thisId);
  sf_mex_destroy(&c21_I);
  *(real_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

const mxArray *sf_c21_Array_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo;
  c21_ResolvedFunctionInfo c21_info[7];
  c21_ResolvedFunctionInfo (*c21_b_info)[7];
  const mxArray *c21_m0 = NULL;
  int32_T c21_i0;
  c21_ResolvedFunctionInfo *c21_r0;
  c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  c21_b_info = (c21_ResolvedFunctionInfo (*)[7])c21_info;
  (*c21_b_info)[0].context = "";
  (*c21_b_info)[0].name = "mtimes";
  (*c21_b_info)[0].dominantType = "double";
  (*c21_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c21_b_info)[0].fileTimeLo = 1289530492U;
  (*c21_b_info)[0].fileTimeHi = 0U;
  (*c21_b_info)[0].mFileTimeLo = 0U;
  (*c21_b_info)[0].mFileTimeHi = 0U;
  (*c21_b_info)[1].context = "";
  (*c21_b_info)[1].name = "mrdivide";
  (*c21_b_info)[1].dominantType = "double";
  (*c21_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c21_b_info)[1].fileTimeLo = 1325134938U;
  (*c21_b_info)[1].fileTimeHi = 0U;
  (*c21_b_info)[1].mFileTimeLo = 1319744366U;
  (*c21_b_info)[1].mFileTimeHi = 0U;
  (*c21_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c21_b_info)[2].name = "rdivide";
  (*c21_b_info)[2].dominantType = "double";
  (*c21_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c21_b_info)[2].fileTimeLo = 1286836844U;
  (*c21_b_info)[2].fileTimeHi = 0U;
  (*c21_b_info)[2].mFileTimeLo = 0U;
  (*c21_b_info)[2].mFileTimeHi = 0U;
  (*c21_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c21_b_info)[3].name = "eml_div";
  (*c21_b_info)[3].dominantType = "double";
  (*c21_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c21_b_info)[3].fileTimeLo = 1313365810U;
  (*c21_b_info)[3].fileTimeHi = 0U;
  (*c21_b_info)[3].mFileTimeLo = 0U;
  (*c21_b_info)[3].mFileTimeHi = 0U;
  (*c21_b_info)[4].context = "";
  (*c21_b_info)[4].name = "rdivide";
  (*c21_b_info)[4].dominantType = "double";
  (*c21_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c21_b_info)[4].fileTimeLo = 1286836844U;
  (*c21_b_info)[4].fileTimeHi = 0U;
  (*c21_b_info)[4].mFileTimeLo = 0U;
  (*c21_b_info)[4].mFileTimeHi = 0U;
  (*c21_b_info)[5].context = "";
  (*c21_b_info)[5].name = "exp";
  (*c21_b_info)[5].dominantType = "double";
  (*c21_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c21_b_info)[5].fileTimeLo = 1286836740U;
  (*c21_b_info)[5].fileTimeHi = 0U;
  (*c21_b_info)[5].mFileTimeLo = 0U;
  (*c21_b_info)[5].mFileTimeHi = 0U;
  (*c21_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c21_b_info)[6].name = "eml_scalar_exp";
  (*c21_b_info)[6].dominantType = "double";
  (*c21_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c21_b_info)[6].fileTimeLo = 1301346464U;
  (*c21_b_info)[6].fileTimeHi = 0U;
  (*c21_b_info)[6].mFileTimeLo = 0U;
  (*c21_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c21_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c21_i0 = 0; c21_i0 < 7; c21_i0++) {
    c21_r0 = &c21_info[c21_i0];
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c21_r0->context)), "context", "nameCaptureInfo",
                    c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c21_r0->name)), "name", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      c21_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c21_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c21_r0->resolved)), "resolved",
                    "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", &c21_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", &c21_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      &c21_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      &c21_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c21_i0);
  }

  sf_mex_assign(&c21_nameCaptureInfo, c21_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c21_nameCaptureInfo);
  return c21_nameCaptureInfo;
}

static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  int32_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc21_ArrayInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(int32_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, FALSE);
  return c21_mxArrayOutData;
}

static int32_T c21_c_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  int32_T c21_y;
  int32_T c21_i1;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_i1, 1, 6, 0U, 0, 0U, 0);
  c21_y = c21_i1;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_sfEvent;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  int32_T c21_y;
  SFc21_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc21_ArrayInstanceStruct *)chartInstanceVoid;
  c21_b_sfEvent = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_sfEvent),
    &c21_thisId);
  sf_mex_destroy(&c21_b_sfEvent);
  *(int32_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static uint8_T c21_d_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_b_is_active_c21_Array, const char_T *c21_identifier)
{
  uint8_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_is_active_c21_Array), &c21_thisId);
  sf_mex_destroy(&c21_b_is_active_c21_Array);
  return c21_y;
}

static uint8_T c21_e_emlrt_marshallIn(SFc21_ArrayInstanceStruct *chartInstance,
  const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u0, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void init_dsm_address_info(SFc21_ArrayInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c21_Array_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c21_Array_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c21_Array(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c21_Array\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_Array_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_ArrayInstanceStruct *chartInstance;
    chartInstance = (SFc21_ArrayInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_ArrayMachineNumber_,
          21,
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
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)c21_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c21_V;
          real_T *c21_I;
          real_T *c21_Radiacion;
          real_T *c21_Temp;
          c21_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c21_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c21_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c21_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c21_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c21_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c21_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c21_Temp);
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

static void sf_opaque_initialize_c21_Array(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc21_ArrayInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
  initialize_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c21_Array(void *chartInstanceVar)
{
  enable_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c21_Array(void *chartInstanceVar)
{
  disable_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c21_Array(void *chartInstanceVar)
{
  sf_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c21_Array(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c21_Array((SFc21_ArrayInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c21_Array();/* state var info */
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

extern void sf_internal_set_sim_state_c21_Array(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c21_Array();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c21_Array((SFc21_ArrayInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c21_Array(SimStruct* S)
{
  return sf_internal_get_sim_state_c21_Array(S);
}

static void sf_opaque_set_sim_state_c21_Array(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c21_Array(S, st);
}

static void sf_opaque_terminate_c21_Array(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_ArrayInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Array_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc21_Array((SFc21_ArrayInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_Array(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_Array((SFc21_ArrayInstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c21_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Array_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,21,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,21,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,21,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,21,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,21);
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

static void mdlRTW_c21_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c21_Array(SimStruct *S)
{
  SFc21_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc21_ArrayInstanceStruct *)malloc(sizeof
    (SFc21_ArrayInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc21_ArrayInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c21_Array;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c21_Array;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c21_Array;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_Array;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_Array;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c21_Array;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c21_Array;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c21_Array;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_Array;
  chartInstance->chartInfo.mdlStart = mdlStart_c21_Array;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c21_Array;
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

void c21_Array_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_Array(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_Array(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_Array(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_Array_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
