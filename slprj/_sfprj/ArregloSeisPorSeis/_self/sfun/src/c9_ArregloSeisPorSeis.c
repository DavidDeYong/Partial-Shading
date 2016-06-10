/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c9_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c9_debug_family_names[23] = { "q", "K", "n", "T", "Rs", "Rp",
  "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io", "Ir",
  "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct *
  chartInstance);
static void c9_update_debugger_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c9_st);
static void finalize_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void sf_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c9_chartstep_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData);
static real_T c9_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_I, const char_T *c9_identifier);
static real_T c9_b_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static int32_T c9_c_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static uint8_T c9_d_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_ArregloSeisPorSeis, const
  char_T *c9_identifier);
static uint8_T c9_e_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void init_dsm_address_info(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_is_active_c9_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c9_st;
  const mxArray *c9_y = NULL;
  real_T c9_hoistedGlobal;
  real_T c9_u;
  const mxArray *c9_b_y = NULL;
  uint8_T c9_b_hoistedGlobal;
  uint8_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  real_T *c9_I;
  c9_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(2), FALSE);
  c9_hoistedGlobal = *c9_I;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = chartInstance->c9_is_active_c9_ArregloSeisPorSeis;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c9_y, 1, c9_c_y);
  sf_mex_assign(&c9_st, c9_y, FALSE);
  return c9_st;
}

static void set_sim_state_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c9_st)
{
  const mxArray *c9_u;
  real_T *c9_I;
  c9_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_doneDoubleBufferReInit = TRUE;
  c9_u = sf_mex_dup(c9_st);
  *c9_I = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 0)),
    "I");
  chartInstance->c9_is_active_c9_ArregloSeisPorSeis = c9_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 1)),
     "is_active_c9_ArregloSeisPorSeis");
  sf_mex_destroy(&c9_u);
  c9_update_debugger_state_c9_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void finalize_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

static void sf_c9_ArregloSeisPorSeis(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c9_V;
  real_T *c9_I;
  real_T *c9_Radiacion;
  real_T *c9_Temp;
  c9_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c9_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c9_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c9_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c9_Temp, 3U);
  chartInstance->c9_sfEvent = CALL_EVENT;
  c9_chartstep_c9_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c9_chartstep_c9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c9_hoistedGlobal;
  real_T c9_b_hoistedGlobal;
  real_T c9_c_hoistedGlobal;
  real_T c9_V;
  real_T c9_Radiacion;
  real_T c9_Temp;
  uint32_T c9_debug_family_var_map[23];
  real_T c9_q;
  real_T c9_K;
  real_T c9_n;
  real_T c9_T;
  real_T c9_Rs;
  real_T c9_Rp;
  real_T c9_Vt;
  real_T c9_Ns;
  real_T c9_Vc;
  real_T c9_Isc;
  real_T c9_Alfa;
  real_T c9_Iph;
  real_T c9_Voc_ref;
  real_T c9_Beta;
  real_T c9_Voc;
  real_T c9_Io;
  real_T c9_Ir;
  real_T c9_nargin = 3.0;
  real_T c9_nargout = 1.0;
  real_T c9_I;
  real_T c9_b;
  real_T c9_y;
  real_T c9_A;
  real_T c9_x;
  real_T c9_b_x;
  real_T c9_c_x;
  real_T c9_d_x;
  real_T c9_b_b;
  real_T c9_b_y;
  real_T c9_b_A;
  real_T c9_e_x;
  real_T c9_f_x;
  real_T c9_c_y;
  real_T c9_c_b;
  real_T c9_d_y;
  real_T c9_a;
  real_T c9_d_b;
  real_T c9_e_b;
  real_T c9_e_y;
  real_T c9_f_b;
  real_T c9_c_A;
  real_T c9_B;
  real_T c9_g_x;
  real_T c9_f_y;
  real_T c9_h_x;
  real_T c9_g_y;
  real_T c9_h_y;
  real_T c9_i_x;
  real_T c9_j_x;
  real_T c9_b_B;
  real_T c9_i_y;
  real_T c9_j_y;
  int32_T c9_i;
  real_T c9_k_x;
  real_T c9_k_y;
  real_T c9_l_x;
  real_T c9_l_y;
  real_T c9_z;
  real_T c9_m_x;
  real_T c9_n_x;
  real_T c9_d_A;
  real_T c9_o_x;
  real_T c9_p_x;
  real_T c9_m_y;
  real_T c9_n_y;
  real_T c9_o_y;
  real_T c9_b_z;
  real_T c9_b_a;
  real_T c9_g_b;
  real_T c9_p_y;
  real_T c9_q_x;
  real_T c9_q_y;
  real_T c9_r_x;
  real_T c9_r_y;
  real_T c9_c_z;
  real_T c9_s_x;
  real_T c9_t_x;
  real_T c9_u_x;
  real_T c9_s_y;
  real_T c9_v_x;
  real_T c9_t_y;
  real_T c9_d_z;
  real_T *c9_b_Temp;
  real_T *c9_b_Radiacion;
  real_T *c9_b_V;
  real_T *c9_b_I;
  c9_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  c9_hoistedGlobal = *c9_b_V;
  c9_b_hoistedGlobal = *c9_b_Radiacion;
  c9_c_hoistedGlobal = *c9_b_Temp;
  c9_V = c9_hoistedGlobal;
  c9_Radiacion = c9_b_hoistedGlobal;
  c9_Temp = c9_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c9_debug_family_names,
    c9_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c9_q, 0U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_K, 1U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_n, 2U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_T, 3U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_Rs, 4U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Rp, 5U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_Vt, 6U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_Ns, 7U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_Vc, 8U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_Isc, 9U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Alfa, 10U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_Iph, 11U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_Voc_ref, 12U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Beta, 13U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_Voc, 14U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_Io, 15U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_Ir, 16U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_nargin, 17U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_nargout, 18U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_V, 19U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Radiacion, 20U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Temp, 21U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_I, 22U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 3);
  c9_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 5);
  c9_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 7);
  c9_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 9);
  c9_T = 273.15 + c9_Temp;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 11);
  c9_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 13);
  c9_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 15);
  c9_b = c9_T;
  c9_y = 1.79484344E-23 * c9_b;
  c9_A = c9_y;
  c9_x = c9_A;
  c9_b_x = c9_x;
  c9_Vt = c9_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 16);
  c9_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 17);
  c9_c_x = c9_V;
  c9_d_x = c9_c_x;
  c9_Vc = c9_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 19);
  c9_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 20);
  c9_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 22);
  c9_b_b = c9_Radiacion;
  c9_b_y = 5.433 * c9_b_b;
  c9_b_A = c9_b_y;
  c9_e_x = c9_b_A;
  c9_f_x = c9_e_x;
  c9_c_y = c9_f_x / 1000.0;
  c9_c_b = c9_Temp - 25.0;
  c9_d_y = 0.00037 * c9_c_b;
  c9_a = c9_c_y;
  c9_d_b = 1.0 + c9_d_y;
  c9_Iph = c9_a * c9_d_b;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 24);
  c9_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 25);
  c9_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 26);
  c9_e_b = c9_Temp - 25.0;
  c9_e_y = -0.0034000000000000002 * c9_e_b;
  c9_f_b = 1.0 + c9_e_y;
  c9_Voc = 0.6166666666666667 * c9_f_b;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 32);
  c9_c_A = c9_Voc;
  c9_B = c9_Vt;
  c9_g_x = c9_c_A;
  c9_f_y = c9_B;
  c9_h_x = c9_g_x;
  c9_g_y = c9_f_y;
  c9_h_y = c9_h_x / c9_g_y;
  c9_i_x = c9_h_y;
  c9_j_x = c9_i_x;
  c9_j_x = muDoubleScalarExp(c9_j_x);
  c9_b_B = c9_j_x - 1.0;
  c9_i_y = c9_b_B;
  c9_j_y = c9_i_y;
  c9_Io = 5.433 / c9_j_y;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 33);
  c9_Ir = c9_Io;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 36);
  c9_I = 0.0;
  c9_i = 0;
  while (c9_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 38);
    c9_k_x = c9_Vc + c9_I * c9_Rs;
    c9_k_y = c9_Vt;
    c9_l_x = c9_k_x;
    c9_l_y = c9_k_y;
    c9_z = c9_l_x / c9_l_y;
    c9_m_x = c9_z;
    c9_n_x = c9_m_x;
    c9_n_x = muDoubleScalarExp(c9_n_x);
    c9_d_A = c9_Vc + c9_I * c9_Rs;
    c9_o_x = c9_d_A;
    c9_p_x = c9_o_x;
    c9_m_y = c9_p_x / 100.0;
    c9_n_y = c9_Vt;
    c9_o_y = c9_n_y;
    c9_b_z = 0.015 / c9_o_y;
    c9_b_a = c9_Ir;
    c9_g_b = c9_b_z;
    c9_p_y = c9_b_a * c9_g_b;
    c9_q_x = c9_Vc + c9_I * c9_Rs;
    c9_q_y = c9_Vt;
    c9_r_x = c9_q_x;
    c9_r_y = c9_q_y;
    c9_c_z = c9_r_x / c9_r_y;
    c9_s_x = c9_c_z;
    c9_t_x = c9_s_x;
    c9_t_x = muDoubleScalarExp(c9_t_x);
    c9_u_x = ((c9_Iph - c9_I) - c9_Ir * (c9_n_x - 1.0)) + c9_m_y;
    c9_s_y = (-1.0 - c9_p_y * c9_t_x) - 0.00015;
    c9_v_x = c9_u_x;
    c9_t_y = c9_s_y;
    c9_d_z = c9_v_x / c9_t_y;
    c9_I -= c9_d_z;
    c9_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c9_b_I = c9_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
}

static void initSimStructsc9_ArregloSeisPorSeis
  (SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  real_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(real_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c9_mxArrayOutData, c9_y, FALSE);
  return c9_mxArrayOutData;
}

static real_T c9_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_I, const char_T *c9_identifier)
{
  real_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_I), &c9_thisId);
  sf_mex_destroy(&c9_I);
  return c9_y;
}

static real_T c9_b_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  real_T c9_y;
  real_T c9_d0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_d0, 1, 0, 0U, 0, 0U, 0);
  c9_y = c9_d0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_I;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  real_T c9_y;
  SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c9_I = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_I), &c9_thisId);
  sf_mex_destroy(&c9_I);
  *(real_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

const mxArray *sf_c9_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo;
  c9_ResolvedFunctionInfo c9_info[7];
  c9_ResolvedFunctionInfo (*c9_b_info)[7];
  const mxArray *c9_m0 = NULL;
  int32_T c9_i0;
  c9_ResolvedFunctionInfo *c9_r0;
  c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  c9_b_info = (c9_ResolvedFunctionInfo (*)[7])c9_info;
  (*c9_b_info)[0].context = "";
  (*c9_b_info)[0].name = "mtimes";
  (*c9_b_info)[0].dominantType = "double";
  (*c9_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c9_b_info)[0].fileTimeLo = 1289530492U;
  (*c9_b_info)[0].fileTimeHi = 0U;
  (*c9_b_info)[0].mFileTimeLo = 0U;
  (*c9_b_info)[0].mFileTimeHi = 0U;
  (*c9_b_info)[1].context = "";
  (*c9_b_info)[1].name = "mrdivide";
  (*c9_b_info)[1].dominantType = "double";
  (*c9_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c9_b_info)[1].fileTimeLo = 1325134938U;
  (*c9_b_info)[1].fileTimeHi = 0U;
  (*c9_b_info)[1].mFileTimeLo = 1319744366U;
  (*c9_b_info)[1].mFileTimeHi = 0U;
  (*c9_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c9_b_info)[2].name = "rdivide";
  (*c9_b_info)[2].dominantType = "double";
  (*c9_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c9_b_info)[2].fileTimeLo = 1286836844U;
  (*c9_b_info)[2].fileTimeHi = 0U;
  (*c9_b_info)[2].mFileTimeLo = 0U;
  (*c9_b_info)[2].mFileTimeHi = 0U;
  (*c9_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c9_b_info)[3].name = "eml_div";
  (*c9_b_info)[3].dominantType = "double";
  (*c9_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c9_b_info)[3].fileTimeLo = 1313365810U;
  (*c9_b_info)[3].fileTimeHi = 0U;
  (*c9_b_info)[3].mFileTimeLo = 0U;
  (*c9_b_info)[3].mFileTimeHi = 0U;
  (*c9_b_info)[4].context = "";
  (*c9_b_info)[4].name = "rdivide";
  (*c9_b_info)[4].dominantType = "double";
  (*c9_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c9_b_info)[4].fileTimeLo = 1286836844U;
  (*c9_b_info)[4].fileTimeHi = 0U;
  (*c9_b_info)[4].mFileTimeLo = 0U;
  (*c9_b_info)[4].mFileTimeHi = 0U;
  (*c9_b_info)[5].context = "";
  (*c9_b_info)[5].name = "exp";
  (*c9_b_info)[5].dominantType = "double";
  (*c9_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c9_b_info)[5].fileTimeLo = 1286836740U;
  (*c9_b_info)[5].fileTimeHi = 0U;
  (*c9_b_info)[5].mFileTimeLo = 0U;
  (*c9_b_info)[5].mFileTimeHi = 0U;
  (*c9_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c9_b_info)[6].name = "eml_scalar_exp";
  (*c9_b_info)[6].dominantType = "double";
  (*c9_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c9_b_info)[6].fileTimeLo = 1301346464U;
  (*c9_b_info)[6].fileTimeHi = 0U;
  (*c9_b_info)[6].mFileTimeLo = 0U;
  (*c9_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c9_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c9_i0 = 0; c9_i0 < 7; c9_i0++) {
    c9_r0 = &c9_info[c9_i0];
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->context)), "context", "nameCaptureInfo",
                    c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c9_r0->name)), "name", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c9_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->resolved)), "resolved", "nameCaptureInfo",
                    c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c9_i0);
  }

  sf_mex_assign(&c9_nameCaptureInfo, c9_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c9_nameCaptureInfo);
  return c9_nameCaptureInfo;
}

static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  int32_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(int32_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c9_mxArrayOutData, c9_y, FALSE);
  return c9_mxArrayOutData;
}

static int32_T c9_c_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  int32_T c9_y;
  int32_T c9_i1;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_i1, 1, 6, 0U, 0, 0U, 0);
  c9_y = c9_i1;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_sfEvent;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  int32_T c9_y;
  SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c9_b_sfEvent = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_sfEvent),
    &c9_thisId);
  sf_mex_destroy(&c9_b_sfEvent);
  *(int32_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static uint8_T c9_d_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_ArregloSeisPorSeis, const
  char_T *c9_identifier)
{
  uint8_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c9_b_is_active_c9_ArregloSeisPorSeis), &c9_thisId);
  sf_mex_destroy(&c9_b_is_active_c9_ArregloSeisPorSeis);
  return c9_y;
}

static uint8_T c9_e_emlrt_marshallIn(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_y;
  uint8_T c9_u0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_u0, 1, 3, 0U, 0, 0U, 0);
  c9_y = c9_u0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void init_dsm_address_info(SFc9_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c9_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c9_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c9_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c9_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           9,
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
          init_script_number_translation(_ArregloSeisPorSeisMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_ArregloSeisPorSeisMachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_ArregloSeisPorSeisMachineNumber_,
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
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)c9_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c9_V;
          real_T *c9_I;
          real_T *c9_Radiacion;
          real_T *c9_Temp;
          c9_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c9_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c9_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c9_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c9_Temp);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_ArregloSeisPorSeisMachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "kwI0XVztGL8WHa4f1tv08G";
}

static void sf_opaque_initialize_c9_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
  initialize_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c9_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c9_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c9_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c9_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_ArregloSeisPorSeis
    ((SFc9_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c9_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c9_ArregloSeisPorSeis(SimStruct* S)
{
  return sf_internal_get_sim_state_c9_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c9_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c9_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c9_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_ArregloSeisPorSeis((SFc9_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_ArregloSeisPorSeis
      ((SFc9_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,9,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,9,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,9,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,9);
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

static void mdlRTW_c9_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c9_ArregloSeisPorSeis(SimStruct *S)
{
  SFc9_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc9_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc9_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_ArregloSeisPorSeis;
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

void c9_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
