/* Include files */

#include "blascompat32.h"
#include "Array_sfun.h"
#include "c23_Array.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Array_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c23_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void initialize_params_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void enable_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void disable_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void c23_update_debugger_state_c23_Array(SFc23_ArrayInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c23_Array(SFc23_ArrayInstanceStruct
  *chartInstance);
static void set_sim_state_c23_Array(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_st);
static void finalize_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void sf_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void c23_chartstep_c23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void initSimStructsc23_Array(SFc23_ArrayInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber);
static const mxArray *c23_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData);
static real_T c23_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_I, const char_T *c23_identifier);
static real_T c23_b_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void c23_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData);
static const mxArray *c23_b_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData);
static int32_T c23_c_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void c23_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData);
static uint8_T c23_d_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_b_is_active_c23_Array, const char_T *c23_identifier);
static uint8_T c23_e_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void init_dsm_address_info(SFc23_ArrayInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
  chartInstance->c23_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c23_is_active_c23_Array = 0U;
}

static void initialize_params_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
}

static void enable_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c23_update_debugger_state_c23_Array(SFc23_ArrayInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c23_Array(SFc23_ArrayInstanceStruct
  *chartInstance)
{
  const mxArray *c23_st;
  const mxArray *c23_y = NULL;
  real_T c23_hoistedGlobal;
  real_T c23_u;
  const mxArray *c23_b_y = NULL;
  uint8_T c23_b_hoistedGlobal;
  uint8_T c23_b_u;
  const mxArray *c23_c_y = NULL;
  real_T *c23_I;
  c23_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_st = NULL;
  c23_st = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_createcellarray(2), FALSE);
  c23_hoistedGlobal = *c23_I;
  c23_u = c23_hoistedGlobal;
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c23_y, 0, c23_b_y);
  c23_b_hoistedGlobal = chartInstance->c23_is_active_c23_Array;
  c23_b_u = c23_b_hoistedGlobal;
  c23_c_y = NULL;
  sf_mex_assign(&c23_c_y, sf_mex_create("y", &c23_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c23_y, 1, c23_c_y);
  sf_mex_assign(&c23_st, c23_y, FALSE);
  return c23_st;
}

static void set_sim_state_c23_Array(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_st)
{
  const mxArray *c23_u;
  real_T *c23_I;
  c23_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c23_doneDoubleBufferReInit = TRUE;
  c23_u = sf_mex_dup(c23_st);
  *c23_I = c23_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c23_u,
    0)), "I");
  chartInstance->c23_is_active_c23_Array = c23_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c23_u, 1)), "is_active_c23_Array");
  sf_mex_destroy(&c23_u);
  c23_update_debugger_state_c23_Array(chartInstance);
  sf_mex_destroy(&c23_st);
}

static void finalize_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
}

static void sf_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
  real_T *c23_V;
  real_T *c23_I;
  real_T *c23_Radiacion;
  real_T *c23_Temp;
  c23_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c23_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c23_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c23_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c23_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c23_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c23_Temp, 3U);
  chartInstance->c23_sfEvent = CALL_EVENT;
  c23_chartstep_c23_Array(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArrayMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c23_chartstep_c23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
  real_T c23_hoistedGlobal;
  real_T c23_b_hoistedGlobal;
  real_T c23_c_hoistedGlobal;
  real_T c23_V;
  real_T c23_Radiacion;
  real_T c23_Temp;
  uint32_T c23_debug_family_var_map[23];
  real_T c23_q;
  real_T c23_K;
  real_T c23_n;
  real_T c23_T;
  real_T c23_Rs;
  real_T c23_Rp;
  real_T c23_Vt;
  real_T c23_Ns;
  real_T c23_Vc;
  real_T c23_Isc;
  real_T c23_Alfa;
  real_T c23_Iph;
  real_T c23_Voc_ref;
  real_T c23_Beta;
  real_T c23_Voc;
  real_T c23_Io;
  real_T c23_Ir;
  real_T c23_nargin = 3.0;
  real_T c23_nargout = 1.0;
  real_T c23_I;
  real_T c23_b;
  real_T c23_y;
  real_T c23_A;
  real_T c23_x;
  real_T c23_b_x;
  real_T c23_c_x;
  real_T c23_d_x;
  real_T c23_b_b;
  real_T c23_b_y;
  real_T c23_b_A;
  real_T c23_e_x;
  real_T c23_f_x;
  real_T c23_c_y;
  real_T c23_c_b;
  real_T c23_d_y;
  real_T c23_a;
  real_T c23_d_b;
  real_T c23_e_b;
  real_T c23_e_y;
  real_T c23_f_b;
  real_T c23_c_A;
  real_T c23_B;
  real_T c23_g_x;
  real_T c23_f_y;
  real_T c23_h_x;
  real_T c23_g_y;
  real_T c23_h_y;
  real_T c23_i_x;
  real_T c23_j_x;
  real_T c23_b_B;
  real_T c23_i_y;
  real_T c23_j_y;
  int32_T c23_i;
  real_T c23_k_x;
  real_T c23_k_y;
  real_T c23_l_x;
  real_T c23_l_y;
  real_T c23_z;
  real_T c23_m_x;
  real_T c23_n_x;
  real_T c23_d_A;
  real_T c23_o_x;
  real_T c23_p_x;
  real_T c23_m_y;
  real_T c23_n_y;
  real_T c23_o_y;
  real_T c23_b_z;
  real_T c23_b_a;
  real_T c23_g_b;
  real_T c23_p_y;
  real_T c23_q_x;
  real_T c23_q_y;
  real_T c23_r_x;
  real_T c23_r_y;
  real_T c23_c_z;
  real_T c23_s_x;
  real_T c23_t_x;
  real_T c23_u_x;
  real_T c23_s_y;
  real_T c23_v_x;
  real_T c23_t_y;
  real_T c23_d_z;
  real_T *c23_b_Temp;
  real_T *c23_b_Radiacion;
  real_T *c23_b_V;
  real_T *c23_b_I;
  c23_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c23_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c23_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
  c23_hoistedGlobal = *c23_b_V;
  c23_b_hoistedGlobal = *c23_b_Radiacion;
  c23_c_hoistedGlobal = *c23_b_Temp;
  c23_V = c23_hoistedGlobal;
  c23_Radiacion = c23_b_hoistedGlobal;
  c23_Temp = c23_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c23_debug_family_names,
    c23_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c23_q, 0U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_K, 1U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_n, 2U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_T, 3U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_Rs, 4U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_Rp, 5U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_Vt, 6U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_Ns, 7U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_Vc, 8U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_Isc, 9U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_Alfa, 10U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_Iph, 11U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_Voc_ref, 12U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_Beta, 13U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_Voc, 14U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_Io, 15U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_Ir, 16U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_nargin, 17U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_nargout, 18U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_V, 19U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_Radiacion, 20U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_Temp, 21U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_I, 22U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 3);
  c23_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 5);
  c23_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 7);
  c23_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 9);
  c23_T = 273.15 + c23_Temp;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 11);
  c23_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 13);
  c23_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 15);
  c23_b = c23_T;
  c23_y = 1.79484344E-23 * c23_b;
  c23_A = c23_y;
  c23_x = c23_A;
  c23_b_x = c23_x;
  c23_Vt = c23_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 16);
  c23_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 17);
  c23_c_x = c23_V;
  c23_d_x = c23_c_x;
  c23_Vc = c23_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 19);
  c23_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 20);
  c23_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 22);
  c23_b_b = c23_Radiacion;
  c23_b_y = 5.433 * c23_b_b;
  c23_b_A = c23_b_y;
  c23_e_x = c23_b_A;
  c23_f_x = c23_e_x;
  c23_c_y = c23_f_x / 1000.0;
  c23_c_b = c23_Temp - 25.0;
  c23_d_y = 0.00037 * c23_c_b;
  c23_a = c23_c_y;
  c23_d_b = 1.0 + c23_d_y;
  c23_Iph = c23_a * c23_d_b;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 24);
  c23_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 25);
  c23_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 26);
  c23_e_b = c23_Temp - 25.0;
  c23_e_y = -0.0034000000000000002 * c23_e_b;
  c23_f_b = 1.0 + c23_e_y;
  c23_Voc = 0.6166666666666667 * c23_f_b;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 32);
  c23_c_A = c23_Voc;
  c23_B = c23_Vt;
  c23_g_x = c23_c_A;
  c23_f_y = c23_B;
  c23_h_x = c23_g_x;
  c23_g_y = c23_f_y;
  c23_h_y = c23_h_x / c23_g_y;
  c23_i_x = c23_h_y;
  c23_j_x = c23_i_x;
  c23_j_x = muDoubleScalarExp(c23_j_x);
  c23_b_B = c23_j_x - 1.0;
  c23_i_y = c23_b_B;
  c23_j_y = c23_i_y;
  c23_Io = 5.433 / c23_j_y;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 33);
  c23_Ir = c23_Io;
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 36);
  c23_I = 0.0;
  c23_i = 0;
  while (c23_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 38);
    c23_k_x = c23_Vc + c23_I * c23_Rs;
    c23_k_y = c23_Vt;
    c23_l_x = c23_k_x;
    c23_l_y = c23_k_y;
    c23_z = c23_l_x / c23_l_y;
    c23_m_x = c23_z;
    c23_n_x = c23_m_x;
    c23_n_x = muDoubleScalarExp(c23_n_x);
    c23_d_A = c23_Vc + c23_I * c23_Rs;
    c23_o_x = c23_d_A;
    c23_p_x = c23_o_x;
    c23_m_y = c23_p_x / 100.0;
    c23_n_y = c23_Vt;
    c23_o_y = c23_n_y;
    c23_b_z = 0.015 / c23_o_y;
    c23_b_a = c23_Ir;
    c23_g_b = c23_b_z;
    c23_p_y = c23_b_a * c23_g_b;
    c23_q_x = c23_Vc + c23_I * c23_Rs;
    c23_q_y = c23_Vt;
    c23_r_x = c23_q_x;
    c23_r_y = c23_q_y;
    c23_c_z = c23_r_x / c23_r_y;
    c23_s_x = c23_c_z;
    c23_t_x = c23_s_x;
    c23_t_x = muDoubleScalarExp(c23_t_x);
    c23_u_x = ((c23_Iph - c23_I) - c23_Ir * (c23_n_x - 1.0)) + c23_m_y;
    c23_s_y = (-1.0 - c23_p_y * c23_t_x) - 0.00015;
    c23_v_x = c23_u_x;
    c23_t_y = c23_s_y;
    c23_d_z = c23_v_x / c23_t_y;
    c23_I -= c23_d_z;
    c23_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c23_b_I = c23_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
}

static void initSimStructsc23_Array(SFc23_ArrayInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber)
{
}

static const mxArray *c23_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData)
{
  const mxArray *c23_mxArrayOutData = NULL;
  real_T c23_u;
  const mxArray *c23_y = NULL;
  SFc23_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc23_ArrayInstanceStruct *)chartInstanceVoid;
  c23_mxArrayOutData = NULL;
  c23_u = *(real_T *)c23_inData;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_create("y", &c23_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c23_mxArrayOutData, c23_y, FALSE);
  return c23_mxArrayOutData;
}

static real_T c23_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_I, const char_T *c23_identifier)
{
  real_T c23_y;
  emlrtMsgIdentifier c23_thisId;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_I), &c23_thisId);
  sf_mex_destroy(&c23_I);
  return c23_y;
}

static real_T c23_b_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  real_T c23_y;
  real_T c23_d0;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_d0, 1, 0, 0U, 0, 0U, 0);
  c23_y = c23_d0;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void c23_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData)
{
  const mxArray *c23_I;
  const char_T *c23_identifier;
  emlrtMsgIdentifier c23_thisId;
  real_T c23_y;
  SFc23_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc23_ArrayInstanceStruct *)chartInstanceVoid;
  c23_I = sf_mex_dup(c23_mxArrayInData);
  c23_identifier = c23_varName;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_I), &c23_thisId);
  sf_mex_destroy(&c23_I);
  *(real_T *)c23_outData = c23_y;
  sf_mex_destroy(&c23_mxArrayInData);
}

const mxArray *sf_c23_Array_get_eml_resolved_functions_info(void)
{
  const mxArray *c23_nameCaptureInfo;
  c23_ResolvedFunctionInfo c23_info[7];
  c23_ResolvedFunctionInfo (*c23_b_info)[7];
  const mxArray *c23_m0 = NULL;
  int32_T c23_i0;
  c23_ResolvedFunctionInfo *c23_r0;
  c23_nameCaptureInfo = NULL;
  c23_nameCaptureInfo = NULL;
  c23_b_info = (c23_ResolvedFunctionInfo (*)[7])c23_info;
  (*c23_b_info)[0].context = "";
  (*c23_b_info)[0].name = "mtimes";
  (*c23_b_info)[0].dominantType = "double";
  (*c23_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c23_b_info)[0].fileTimeLo = 1289530492U;
  (*c23_b_info)[0].fileTimeHi = 0U;
  (*c23_b_info)[0].mFileTimeLo = 0U;
  (*c23_b_info)[0].mFileTimeHi = 0U;
  (*c23_b_info)[1].context = "";
  (*c23_b_info)[1].name = "mrdivide";
  (*c23_b_info)[1].dominantType = "double";
  (*c23_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c23_b_info)[1].fileTimeLo = 1325134938U;
  (*c23_b_info)[1].fileTimeHi = 0U;
  (*c23_b_info)[1].mFileTimeLo = 1319744366U;
  (*c23_b_info)[1].mFileTimeHi = 0U;
  (*c23_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c23_b_info)[2].name = "rdivide";
  (*c23_b_info)[2].dominantType = "double";
  (*c23_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c23_b_info)[2].fileTimeLo = 1286836844U;
  (*c23_b_info)[2].fileTimeHi = 0U;
  (*c23_b_info)[2].mFileTimeLo = 0U;
  (*c23_b_info)[2].mFileTimeHi = 0U;
  (*c23_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c23_b_info)[3].name = "eml_div";
  (*c23_b_info)[3].dominantType = "double";
  (*c23_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c23_b_info)[3].fileTimeLo = 1313365810U;
  (*c23_b_info)[3].fileTimeHi = 0U;
  (*c23_b_info)[3].mFileTimeLo = 0U;
  (*c23_b_info)[3].mFileTimeHi = 0U;
  (*c23_b_info)[4].context = "";
  (*c23_b_info)[4].name = "rdivide";
  (*c23_b_info)[4].dominantType = "double";
  (*c23_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c23_b_info)[4].fileTimeLo = 1286836844U;
  (*c23_b_info)[4].fileTimeHi = 0U;
  (*c23_b_info)[4].mFileTimeLo = 0U;
  (*c23_b_info)[4].mFileTimeHi = 0U;
  (*c23_b_info)[5].context = "";
  (*c23_b_info)[5].name = "exp";
  (*c23_b_info)[5].dominantType = "double";
  (*c23_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c23_b_info)[5].fileTimeLo = 1286836740U;
  (*c23_b_info)[5].fileTimeHi = 0U;
  (*c23_b_info)[5].mFileTimeLo = 0U;
  (*c23_b_info)[5].mFileTimeHi = 0U;
  (*c23_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c23_b_info)[6].name = "eml_scalar_exp";
  (*c23_b_info)[6].dominantType = "double";
  (*c23_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c23_b_info)[6].fileTimeLo = 1301346464U;
  (*c23_b_info)[6].fileTimeHi = 0U;
  (*c23_b_info)[6].mFileTimeLo = 0U;
  (*c23_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c23_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c23_i0 = 0; c23_i0 < 7; c23_i0++) {
    c23_r0 = &c23_info[c23_i0];
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo", c23_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c23_r0->context)), "context", "nameCaptureInfo",
                    c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo", c23_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c23_r0->name)), "name", "nameCaptureInfo", c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo",
      c23_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c23_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo", c23_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c23_r0->resolved)), "resolved",
                    "nameCaptureInfo", c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo", &c23_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo", &c23_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo",
      &c23_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c23_i0);
    sf_mex_addfield(c23_m0, sf_mex_create("nameCaptureInfo",
      &c23_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c23_i0);
  }

  sf_mex_assign(&c23_nameCaptureInfo, c23_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c23_nameCaptureInfo);
  return c23_nameCaptureInfo;
}

static const mxArray *c23_b_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData)
{
  const mxArray *c23_mxArrayOutData = NULL;
  int32_T c23_u;
  const mxArray *c23_y = NULL;
  SFc23_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc23_ArrayInstanceStruct *)chartInstanceVoid;
  c23_mxArrayOutData = NULL;
  c23_u = *(int32_T *)c23_inData;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_create("y", &c23_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c23_mxArrayOutData, c23_y, FALSE);
  return c23_mxArrayOutData;
}

static int32_T c23_c_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  int32_T c23_y;
  int32_T c23_i1;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_i1, 1, 6, 0U, 0, 0U, 0);
  c23_y = c23_i1;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void c23_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData)
{
  const mxArray *c23_b_sfEvent;
  const char_T *c23_identifier;
  emlrtMsgIdentifier c23_thisId;
  int32_T c23_y;
  SFc23_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc23_ArrayInstanceStruct *)chartInstanceVoid;
  c23_b_sfEvent = sf_mex_dup(c23_mxArrayInData);
  c23_identifier = c23_varName;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_b_sfEvent),
    &c23_thisId);
  sf_mex_destroy(&c23_b_sfEvent);
  *(int32_T *)c23_outData = c23_y;
  sf_mex_destroy(&c23_mxArrayInData);
}

static uint8_T c23_d_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_b_is_active_c23_Array, const char_T *c23_identifier)
{
  uint8_T c23_y;
  emlrtMsgIdentifier c23_thisId;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c23_b_is_active_c23_Array), &c23_thisId);
  sf_mex_destroy(&c23_b_is_active_c23_Array);
  return c23_y;
}

static uint8_T c23_e_emlrt_marshallIn(SFc23_ArrayInstanceStruct *chartInstance,
  const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  uint8_T c23_y;
  uint8_T c23_u0;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_u0, 1, 3, 0U, 0, 0U, 0);
  c23_y = c23_u0;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void init_dsm_address_info(SFc23_ArrayInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c23_Array_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c23_Array_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c23_Array(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c23_Array\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c23_Array_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc23_ArrayInstanceStruct *chartInstance;
    chartInstance = (SFc23_ArrayInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_ArrayMachineNumber_,
          23,
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
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)c23_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c23_V;
          real_T *c23_I;
          real_T *c23_Radiacion;
          real_T *c23_Temp;
          c23_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c23_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c23_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c23_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c23_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c23_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c23_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c23_Temp);
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

static void sf_opaque_initialize_c23_Array(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc23_ArrayInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
  initialize_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c23_Array(void *chartInstanceVar)
{
  enable_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c23_Array(void *chartInstanceVar)
{
  disable_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c23_Array(void *chartInstanceVar)
{
  sf_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c23_Array(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c23_Array((SFc23_ArrayInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c23_Array();/* state var info */
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

extern void sf_internal_set_sim_state_c23_Array(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c23_Array();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c23_Array((SFc23_ArrayInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c23_Array(SimStruct* S)
{
  return sf_internal_get_sim_state_c23_Array(S);
}

static void sf_opaque_set_sim_state_c23_Array(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c23_Array(S, st);
}

static void sf_opaque_terminate_c23_Array(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc23_ArrayInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Array_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc23_Array((SFc23_ArrayInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c23_Array(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c23_Array((SFc23_ArrayInstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c23_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Array_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      23);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,23,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,23,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,23,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,23,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,23);
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

static void mdlRTW_c23_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c23_Array(SimStruct *S)
{
  SFc23_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc23_ArrayInstanceStruct *)malloc(sizeof
    (SFc23_ArrayInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc23_ArrayInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c23_Array;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c23_Array;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c23_Array;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c23_Array;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c23_Array;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c23_Array;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c23_Array;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c23_Array;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c23_Array;
  chartInstance->chartInfo.mdlStart = mdlStart_c23_Array;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c23_Array;
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

void c23_Array_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c23_Array(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c23_Array(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c23_Array(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c23_Array_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
