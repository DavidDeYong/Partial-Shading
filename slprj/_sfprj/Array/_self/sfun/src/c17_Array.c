/* Include files */

#include "blascompat32.h"
#include "Array_sfun.h"
#include "c17_Array.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Array_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c17_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void initialize_params_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void enable_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void disable_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void c17_update_debugger_state_c17_Array(SFc17_ArrayInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c17_Array(SFc17_ArrayInstanceStruct
  *chartInstance);
static void set_sim_state_c17_Array(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_st);
static void finalize_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void sf_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void c17_chartstep_c17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void initSimStructsc17_Array(SFc17_ArrayInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c17_machineNumber, uint32_T
  c17_chartNumber);
static const mxArray *c17_sf_marshallOut(void *chartInstanceVoid, void
  *c17_inData);
static real_T c17_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_I, const char_T *c17_identifier);
static real_T c17_b_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static void c17_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c17_mxArrayInData, const char_T *c17_varName, void *c17_outData);
static const mxArray *c17_b_sf_marshallOut(void *chartInstanceVoid, void
  *c17_inData);
static int32_T c17_c_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static void c17_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c17_mxArrayInData, const char_T *c17_varName, void *c17_outData);
static uint8_T c17_d_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_b_is_active_c17_Array, const char_T *c17_identifier);
static uint8_T c17_e_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static void init_dsm_address_info(SFc17_ArrayInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
  chartInstance->c17_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c17_is_active_c17_Array = 0U;
}

static void initialize_params_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
}

static void enable_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c17_update_debugger_state_c17_Array(SFc17_ArrayInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c17_Array(SFc17_ArrayInstanceStruct
  *chartInstance)
{
  const mxArray *c17_st;
  const mxArray *c17_y = NULL;
  real_T c17_hoistedGlobal;
  real_T c17_u;
  const mxArray *c17_b_y = NULL;
  uint8_T c17_b_hoistedGlobal;
  uint8_T c17_b_u;
  const mxArray *c17_c_y = NULL;
  real_T *c17_I;
  c17_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c17_st = NULL;
  c17_st = NULL;
  c17_y = NULL;
  sf_mex_assign(&c17_y, sf_mex_createcellarray(2), FALSE);
  c17_hoistedGlobal = *c17_I;
  c17_u = c17_hoistedGlobal;
  c17_b_y = NULL;
  sf_mex_assign(&c17_b_y, sf_mex_create("y", &c17_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c17_y, 0, c17_b_y);
  c17_b_hoistedGlobal = chartInstance->c17_is_active_c17_Array;
  c17_b_u = c17_b_hoistedGlobal;
  c17_c_y = NULL;
  sf_mex_assign(&c17_c_y, sf_mex_create("y", &c17_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c17_y, 1, c17_c_y);
  sf_mex_assign(&c17_st, c17_y, FALSE);
  return c17_st;
}

static void set_sim_state_c17_Array(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_st)
{
  const mxArray *c17_u;
  real_T *c17_I;
  c17_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c17_doneDoubleBufferReInit = TRUE;
  c17_u = sf_mex_dup(c17_st);
  *c17_I = c17_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c17_u,
    0)), "I");
  chartInstance->c17_is_active_c17_Array = c17_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c17_u, 1)), "is_active_c17_Array");
  sf_mex_destroy(&c17_u);
  c17_update_debugger_state_c17_Array(chartInstance);
  sf_mex_destroy(&c17_st);
}

static void finalize_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
}

static void sf_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
  real_T *c17_V;
  real_T *c17_I;
  real_T *c17_Radiacion;
  real_T *c17_Temp;
  c17_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c17_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c17_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c17_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 16U, chartInstance->c17_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c17_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c17_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c17_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c17_Temp, 3U);
  chartInstance->c17_sfEvent = CALL_EVENT;
  c17_chartstep_c17_Array(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArrayMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c17_chartstep_c17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
  real_T c17_hoistedGlobal;
  real_T c17_b_hoistedGlobal;
  real_T c17_c_hoistedGlobal;
  real_T c17_V;
  real_T c17_Radiacion;
  real_T c17_Temp;
  uint32_T c17_debug_family_var_map[23];
  real_T c17_q;
  real_T c17_K;
  real_T c17_n;
  real_T c17_T;
  real_T c17_Rs;
  real_T c17_Rp;
  real_T c17_Vt;
  real_T c17_Ns;
  real_T c17_Vc;
  real_T c17_Isc;
  real_T c17_Alfa;
  real_T c17_Iph;
  real_T c17_Voc_ref;
  real_T c17_Beta;
  real_T c17_Voc;
  real_T c17_Io;
  real_T c17_Ir;
  real_T c17_nargin = 3.0;
  real_T c17_nargout = 1.0;
  real_T c17_I;
  real_T c17_b;
  real_T c17_y;
  real_T c17_A;
  real_T c17_x;
  real_T c17_b_x;
  real_T c17_c_x;
  real_T c17_d_x;
  real_T c17_b_b;
  real_T c17_b_y;
  real_T c17_b_A;
  real_T c17_e_x;
  real_T c17_f_x;
  real_T c17_c_y;
  real_T c17_c_b;
  real_T c17_d_y;
  real_T c17_a;
  real_T c17_d_b;
  real_T c17_e_b;
  real_T c17_e_y;
  real_T c17_f_b;
  real_T c17_c_A;
  real_T c17_B;
  real_T c17_g_x;
  real_T c17_f_y;
  real_T c17_h_x;
  real_T c17_g_y;
  real_T c17_h_y;
  real_T c17_i_x;
  real_T c17_j_x;
  real_T c17_b_B;
  real_T c17_i_y;
  real_T c17_j_y;
  int32_T c17_i;
  real_T c17_k_x;
  real_T c17_k_y;
  real_T c17_l_x;
  real_T c17_l_y;
  real_T c17_z;
  real_T c17_m_x;
  real_T c17_n_x;
  real_T c17_d_A;
  real_T c17_o_x;
  real_T c17_p_x;
  real_T c17_m_y;
  real_T c17_n_y;
  real_T c17_o_y;
  real_T c17_b_z;
  real_T c17_b_a;
  real_T c17_g_b;
  real_T c17_p_y;
  real_T c17_q_x;
  real_T c17_q_y;
  real_T c17_r_x;
  real_T c17_r_y;
  real_T c17_c_z;
  real_T c17_s_x;
  real_T c17_t_x;
  real_T c17_u_x;
  real_T c17_s_y;
  real_T c17_v_x;
  real_T c17_t_y;
  real_T c17_d_z;
  real_T *c17_b_Temp;
  real_T *c17_b_Radiacion;
  real_T *c17_b_V;
  real_T *c17_b_I;
  c17_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c17_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c17_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c17_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 16U, chartInstance->c17_sfEvent);
  c17_hoistedGlobal = *c17_b_V;
  c17_b_hoistedGlobal = *c17_b_Radiacion;
  c17_c_hoistedGlobal = *c17_b_Temp;
  c17_V = c17_hoistedGlobal;
  c17_Radiacion = c17_b_hoistedGlobal;
  c17_Temp = c17_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c17_debug_family_names,
    c17_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c17_q, 0U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_K, 1U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_n, 2U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_T, 3U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c17_Rs, 4U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_Rp, 5U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_Vt, 6U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c17_Ns, 7U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_Vc, 8U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c17_Isc, 9U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_Alfa, 10U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_Iph, 11U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c17_Voc_ref, 12U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_Beta, 13U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_Voc, 14U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c17_Io, 15U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c17_Ir, 16U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c17_nargin, 17U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c17_nargout, 18U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c17_V, 19U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_Radiacion, 20U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c17_Temp, 21U, c17_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c17_I, 22U, c17_sf_marshallOut,
    c17_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 3);
  c17_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 5);
  c17_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 7);
  c17_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 9);
  c17_T = 273.15 + c17_Temp;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 11);
  c17_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 13);
  c17_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 15);
  c17_b = c17_T;
  c17_y = 1.79484344E-23 * c17_b;
  c17_A = c17_y;
  c17_x = c17_A;
  c17_b_x = c17_x;
  c17_Vt = c17_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 16);
  c17_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 17);
  c17_c_x = c17_V;
  c17_d_x = c17_c_x;
  c17_Vc = c17_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 19);
  c17_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 20);
  c17_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 22);
  c17_b_b = c17_Radiacion;
  c17_b_y = 5.433 * c17_b_b;
  c17_b_A = c17_b_y;
  c17_e_x = c17_b_A;
  c17_f_x = c17_e_x;
  c17_c_y = c17_f_x / 1000.0;
  c17_c_b = c17_Temp - 25.0;
  c17_d_y = 0.00037 * c17_c_b;
  c17_a = c17_c_y;
  c17_d_b = 1.0 + c17_d_y;
  c17_Iph = c17_a * c17_d_b;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 24);
  c17_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 25);
  c17_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 26);
  c17_e_b = c17_Temp - 25.0;
  c17_e_y = -0.0034000000000000002 * c17_e_b;
  c17_f_b = 1.0 + c17_e_y;
  c17_Voc = 0.6166666666666667 * c17_f_b;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 32);
  c17_c_A = c17_Voc;
  c17_B = c17_Vt;
  c17_g_x = c17_c_A;
  c17_f_y = c17_B;
  c17_h_x = c17_g_x;
  c17_g_y = c17_f_y;
  c17_h_y = c17_h_x / c17_g_y;
  c17_i_x = c17_h_y;
  c17_j_x = c17_i_x;
  c17_j_x = muDoubleScalarExp(c17_j_x);
  c17_b_B = c17_j_x - 1.0;
  c17_i_y = c17_b_B;
  c17_j_y = c17_i_y;
  c17_Io = 5.433 / c17_j_y;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 33);
  c17_Ir = c17_Io;
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 36);
  c17_I = 0.0;
  c17_i = 0;
  while (c17_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, 38);
    c17_k_x = c17_Vc + c17_I * c17_Rs;
    c17_k_y = c17_Vt;
    c17_l_x = c17_k_x;
    c17_l_y = c17_k_y;
    c17_z = c17_l_x / c17_l_y;
    c17_m_x = c17_z;
    c17_n_x = c17_m_x;
    c17_n_x = muDoubleScalarExp(c17_n_x);
    c17_d_A = c17_Vc + c17_I * c17_Rs;
    c17_o_x = c17_d_A;
    c17_p_x = c17_o_x;
    c17_m_y = c17_p_x / 100.0;
    c17_n_y = c17_Vt;
    c17_o_y = c17_n_y;
    c17_b_z = 0.015 / c17_o_y;
    c17_b_a = c17_Ir;
    c17_g_b = c17_b_z;
    c17_p_y = c17_b_a * c17_g_b;
    c17_q_x = c17_Vc + c17_I * c17_Rs;
    c17_q_y = c17_Vt;
    c17_r_x = c17_q_x;
    c17_r_y = c17_q_y;
    c17_c_z = c17_r_x / c17_r_y;
    c17_s_x = c17_c_z;
    c17_t_x = c17_s_x;
    c17_t_x = muDoubleScalarExp(c17_t_x);
    c17_u_x = ((c17_Iph - c17_I) - c17_Ir * (c17_n_x - 1.0)) + c17_m_y;
    c17_s_y = (-1.0 - c17_p_y * c17_t_x) - 0.00015;
    c17_v_x = c17_u_x;
    c17_t_y = c17_s_y;
    c17_d_z = c17_v_x / c17_t_y;
    c17_I -= c17_d_z;
    c17_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c17_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c17_b_I = c17_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, chartInstance->c17_sfEvent);
}

static void initSimStructsc17_Array(SFc17_ArrayInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c17_machineNumber, uint32_T
  c17_chartNumber)
{
}

static const mxArray *c17_sf_marshallOut(void *chartInstanceVoid, void
  *c17_inData)
{
  const mxArray *c17_mxArrayOutData = NULL;
  real_T c17_u;
  const mxArray *c17_y = NULL;
  SFc17_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc17_ArrayInstanceStruct *)chartInstanceVoid;
  c17_mxArrayOutData = NULL;
  c17_u = *(real_T *)c17_inData;
  c17_y = NULL;
  sf_mex_assign(&c17_y, sf_mex_create("y", &c17_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c17_mxArrayOutData, c17_y, FALSE);
  return c17_mxArrayOutData;
}

static real_T c17_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_I, const char_T *c17_identifier)
{
  real_T c17_y;
  emlrtMsgIdentifier c17_thisId;
  c17_thisId.fIdentifier = c17_identifier;
  c17_thisId.fParent = NULL;
  c17_y = c17_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_I), &c17_thisId);
  sf_mex_destroy(&c17_I);
  return c17_y;
}

static real_T c17_b_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  real_T c17_y;
  real_T c17_d0;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_d0, 1, 0, 0U, 0, 0U, 0);
  c17_y = c17_d0;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static void c17_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c17_mxArrayInData, const char_T *c17_varName, void *c17_outData)
{
  const mxArray *c17_I;
  const char_T *c17_identifier;
  emlrtMsgIdentifier c17_thisId;
  real_T c17_y;
  SFc17_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc17_ArrayInstanceStruct *)chartInstanceVoid;
  c17_I = sf_mex_dup(c17_mxArrayInData);
  c17_identifier = c17_varName;
  c17_thisId.fIdentifier = c17_identifier;
  c17_thisId.fParent = NULL;
  c17_y = c17_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_I), &c17_thisId);
  sf_mex_destroy(&c17_I);
  *(real_T *)c17_outData = c17_y;
  sf_mex_destroy(&c17_mxArrayInData);
}

const mxArray *sf_c17_Array_get_eml_resolved_functions_info(void)
{
  const mxArray *c17_nameCaptureInfo;
  c17_ResolvedFunctionInfo c17_info[7];
  c17_ResolvedFunctionInfo (*c17_b_info)[7];
  const mxArray *c17_m0 = NULL;
  int32_T c17_i0;
  c17_ResolvedFunctionInfo *c17_r0;
  c17_nameCaptureInfo = NULL;
  c17_nameCaptureInfo = NULL;
  c17_b_info = (c17_ResolvedFunctionInfo (*)[7])c17_info;
  (*c17_b_info)[0].context = "";
  (*c17_b_info)[0].name = "mtimes";
  (*c17_b_info)[0].dominantType = "double";
  (*c17_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c17_b_info)[0].fileTimeLo = 1289530492U;
  (*c17_b_info)[0].fileTimeHi = 0U;
  (*c17_b_info)[0].mFileTimeLo = 0U;
  (*c17_b_info)[0].mFileTimeHi = 0U;
  (*c17_b_info)[1].context = "";
  (*c17_b_info)[1].name = "mrdivide";
  (*c17_b_info)[1].dominantType = "double";
  (*c17_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c17_b_info)[1].fileTimeLo = 1325134938U;
  (*c17_b_info)[1].fileTimeHi = 0U;
  (*c17_b_info)[1].mFileTimeLo = 1319744366U;
  (*c17_b_info)[1].mFileTimeHi = 0U;
  (*c17_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c17_b_info)[2].name = "rdivide";
  (*c17_b_info)[2].dominantType = "double";
  (*c17_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c17_b_info)[2].fileTimeLo = 1286836844U;
  (*c17_b_info)[2].fileTimeHi = 0U;
  (*c17_b_info)[2].mFileTimeLo = 0U;
  (*c17_b_info)[2].mFileTimeHi = 0U;
  (*c17_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c17_b_info)[3].name = "eml_div";
  (*c17_b_info)[3].dominantType = "double";
  (*c17_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c17_b_info)[3].fileTimeLo = 1313365810U;
  (*c17_b_info)[3].fileTimeHi = 0U;
  (*c17_b_info)[3].mFileTimeLo = 0U;
  (*c17_b_info)[3].mFileTimeHi = 0U;
  (*c17_b_info)[4].context = "";
  (*c17_b_info)[4].name = "rdivide";
  (*c17_b_info)[4].dominantType = "double";
  (*c17_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c17_b_info)[4].fileTimeLo = 1286836844U;
  (*c17_b_info)[4].fileTimeHi = 0U;
  (*c17_b_info)[4].mFileTimeLo = 0U;
  (*c17_b_info)[4].mFileTimeHi = 0U;
  (*c17_b_info)[5].context = "";
  (*c17_b_info)[5].name = "exp";
  (*c17_b_info)[5].dominantType = "double";
  (*c17_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c17_b_info)[5].fileTimeLo = 1286836740U;
  (*c17_b_info)[5].fileTimeHi = 0U;
  (*c17_b_info)[5].mFileTimeLo = 0U;
  (*c17_b_info)[5].mFileTimeHi = 0U;
  (*c17_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c17_b_info)[6].name = "eml_scalar_exp";
  (*c17_b_info)[6].dominantType = "double";
  (*c17_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c17_b_info)[6].fileTimeLo = 1301346464U;
  (*c17_b_info)[6].fileTimeHi = 0U;
  (*c17_b_info)[6].mFileTimeLo = 0U;
  (*c17_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c17_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c17_i0 = 0; c17_i0 < 7; c17_i0++) {
    c17_r0 = &c17_info[c17_i0];
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo", c17_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c17_r0->context)), "context", "nameCaptureInfo",
                    c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo", c17_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c17_r0->name)), "name", "nameCaptureInfo", c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo",
      c17_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c17_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo", c17_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c17_r0->resolved)), "resolved",
                    "nameCaptureInfo", c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo", &c17_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo", &c17_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo",
      &c17_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c17_i0);
    sf_mex_addfield(c17_m0, sf_mex_create("nameCaptureInfo",
      &c17_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c17_i0);
  }

  sf_mex_assign(&c17_nameCaptureInfo, c17_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c17_nameCaptureInfo);
  return c17_nameCaptureInfo;
}

static const mxArray *c17_b_sf_marshallOut(void *chartInstanceVoid, void
  *c17_inData)
{
  const mxArray *c17_mxArrayOutData = NULL;
  int32_T c17_u;
  const mxArray *c17_y = NULL;
  SFc17_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc17_ArrayInstanceStruct *)chartInstanceVoid;
  c17_mxArrayOutData = NULL;
  c17_u = *(int32_T *)c17_inData;
  c17_y = NULL;
  sf_mex_assign(&c17_y, sf_mex_create("y", &c17_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c17_mxArrayOutData, c17_y, FALSE);
  return c17_mxArrayOutData;
}

static int32_T c17_c_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  int32_T c17_y;
  int32_T c17_i1;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_i1, 1, 6, 0U, 0, 0U, 0);
  c17_y = c17_i1;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static void c17_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c17_mxArrayInData, const char_T *c17_varName, void *c17_outData)
{
  const mxArray *c17_b_sfEvent;
  const char_T *c17_identifier;
  emlrtMsgIdentifier c17_thisId;
  int32_T c17_y;
  SFc17_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc17_ArrayInstanceStruct *)chartInstanceVoid;
  c17_b_sfEvent = sf_mex_dup(c17_mxArrayInData);
  c17_identifier = c17_varName;
  c17_thisId.fIdentifier = c17_identifier;
  c17_thisId.fParent = NULL;
  c17_y = c17_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_b_sfEvent),
    &c17_thisId);
  sf_mex_destroy(&c17_b_sfEvent);
  *(int32_T *)c17_outData = c17_y;
  sf_mex_destroy(&c17_mxArrayInData);
}

static uint8_T c17_d_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_b_is_active_c17_Array, const char_T *c17_identifier)
{
  uint8_T c17_y;
  emlrtMsgIdentifier c17_thisId;
  c17_thisId.fIdentifier = c17_identifier;
  c17_thisId.fParent = NULL;
  c17_y = c17_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c17_b_is_active_c17_Array), &c17_thisId);
  sf_mex_destroy(&c17_b_is_active_c17_Array);
  return c17_y;
}

static uint8_T c17_e_emlrt_marshallIn(SFc17_ArrayInstanceStruct *chartInstance,
  const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  uint8_T c17_y;
  uint8_T c17_u0;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_u0, 1, 3, 0U, 0, 0U, 0);
  c17_y = c17_u0;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static void init_dsm_address_info(SFc17_ArrayInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c17_Array_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c17_Array_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c17_Array(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c17_Array\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c17_Array_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc17_ArrayInstanceStruct *chartInstance;
    chartInstance = (SFc17_ArrayInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_ArrayMachineNumber_,
          17,
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
          (MexFcnForType)c17_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c17_sf_marshallOut,(MexInFcnForType)c17_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c17_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c17_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c17_V;
          real_T *c17_I;
          real_T *c17_Radiacion;
          real_T *c17_Temp;
          c17_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c17_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c17_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c17_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c17_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c17_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c17_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c17_Temp);
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

static void sf_opaque_initialize_c17_Array(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc17_ArrayInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
  initialize_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c17_Array(void *chartInstanceVar)
{
  enable_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c17_Array(void *chartInstanceVar)
{
  disable_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c17_Array(void *chartInstanceVar)
{
  sf_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c17_Array(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c17_Array((SFc17_ArrayInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c17_Array();/* state var info */
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

extern void sf_internal_set_sim_state_c17_Array(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c17_Array();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c17_Array((SFc17_ArrayInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c17_Array(SimStruct* S)
{
  return sf_internal_get_sim_state_c17_Array(S);
}

static void sf_opaque_set_sim_state_c17_Array(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c17_Array(S, st);
}

static void sf_opaque_terminate_c17_Array(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc17_ArrayInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Array_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc17_Array((SFc17_ArrayInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c17_Array(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c17_Array((SFc17_ArrayInstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c17_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Array_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      17);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,17,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,17,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,17,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,17,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,17);
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

static void mdlRTW_c17_Array(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c17_Array(SimStruct *S)
{
  SFc17_ArrayInstanceStruct *chartInstance;
  chartInstance = (SFc17_ArrayInstanceStruct *)malloc(sizeof
    (SFc17_ArrayInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc17_ArrayInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c17_Array;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c17_Array;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c17_Array;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c17_Array;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c17_Array;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c17_Array;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c17_Array;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c17_Array;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c17_Array;
  chartInstance->chartInfo.mdlStart = mdlStart_c17_Array;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c17_Array;
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

void c17_Array_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c17_Array(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c17_Array(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c17_Array(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c17_Array_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
