/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c5_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c5_debug_family_names[23] = { "q", "K", "n", "T", "Rs", "Rp",
  "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io", "Ir",
  "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct *
  chartInstance);
static void c5_update_debugger_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c5_st);
static void finalize_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void sf_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c5_chartstep_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static real_T c5_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_I, const char_T *c5_identifier);
static real_T c5_b_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static int32_T c5_c_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static uint8_T c5_d_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_ArregloSeisPorSeis, const
  char_T *c5_identifier);
static uint8_T c5_e_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void init_dsm_address_info(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_is_active_c5_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_update_debugger_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  real_T c5_hoistedGlobal;
  real_T c5_u;
  const mxArray *c5_b_y = NULL;
  uint8_T c5_b_hoistedGlobal;
  uint8_T c5_b_u;
  const mxArray *c5_c_y = NULL;
  real_T *c5_I;
  c5_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellarray(2), FALSE);
  c5_hoistedGlobal = *c5_I;
  c5_u = c5_hoistedGlobal;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_b_hoistedGlobal = chartInstance->c5_is_active_c5_ArregloSeisPorSeis;
  c5_b_u = c5_b_hoistedGlobal;
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", &c5_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  sf_mex_assign(&c5_st, c5_y, FALSE);
  return c5_st;
}

static void set_sim_state_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  real_T *c5_I;
  c5_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c5_doneDoubleBufferReInit = TRUE;
  c5_u = sf_mex_dup(c5_st);
  *c5_I = c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 0)),
    "I");
  chartInstance->c5_is_active_c5_ArregloSeisPorSeis = c5_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
     "is_active_c5_ArregloSeisPorSeis");
  sf_mex_destroy(&c5_u);
  c5_update_debugger_state_c5_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void finalize_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

static void sf_c5_ArregloSeisPorSeis(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c5_V;
  real_T *c5_I;
  real_T *c5_Radiacion;
  real_T *c5_Temp;
  c5_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c5_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c5_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c5_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c5_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c5_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c5_Temp, 3U);
  chartInstance->c5_sfEvent = CALL_EVENT;
  c5_chartstep_c5_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c5_chartstep_c5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c5_hoistedGlobal;
  real_T c5_b_hoistedGlobal;
  real_T c5_c_hoistedGlobal;
  real_T c5_V;
  real_T c5_Radiacion;
  real_T c5_Temp;
  uint32_T c5_debug_family_var_map[23];
  real_T c5_q;
  real_T c5_K;
  real_T c5_n;
  real_T c5_T;
  real_T c5_Rs;
  real_T c5_Rp;
  real_T c5_Vt;
  real_T c5_Ns;
  real_T c5_Vc;
  real_T c5_Isc;
  real_T c5_Alfa;
  real_T c5_Iph;
  real_T c5_Voc_ref;
  real_T c5_Beta;
  real_T c5_Voc;
  real_T c5_Io;
  real_T c5_Ir;
  real_T c5_nargin = 3.0;
  real_T c5_nargout = 1.0;
  real_T c5_I;
  real_T c5_b;
  real_T c5_y;
  real_T c5_A;
  real_T c5_x;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_d_x;
  real_T c5_b_b;
  real_T c5_b_y;
  real_T c5_b_A;
  real_T c5_e_x;
  real_T c5_f_x;
  real_T c5_c_y;
  real_T c5_c_b;
  real_T c5_d_y;
  real_T c5_a;
  real_T c5_d_b;
  real_T c5_e_b;
  real_T c5_e_y;
  real_T c5_f_b;
  real_T c5_c_A;
  real_T c5_B;
  real_T c5_g_x;
  real_T c5_f_y;
  real_T c5_h_x;
  real_T c5_g_y;
  real_T c5_h_y;
  real_T c5_i_x;
  real_T c5_j_x;
  real_T c5_b_B;
  real_T c5_i_y;
  real_T c5_j_y;
  int32_T c5_i;
  real_T c5_k_x;
  real_T c5_k_y;
  real_T c5_l_x;
  real_T c5_l_y;
  real_T c5_z;
  real_T c5_m_x;
  real_T c5_n_x;
  real_T c5_d_A;
  real_T c5_o_x;
  real_T c5_p_x;
  real_T c5_m_y;
  real_T c5_n_y;
  real_T c5_o_y;
  real_T c5_b_z;
  real_T c5_b_a;
  real_T c5_g_b;
  real_T c5_p_y;
  real_T c5_q_x;
  real_T c5_q_y;
  real_T c5_r_x;
  real_T c5_r_y;
  real_T c5_c_z;
  real_T c5_s_x;
  real_T c5_t_x;
  real_T c5_u_x;
  real_T c5_s_y;
  real_T c5_v_x;
  real_T c5_t_y;
  real_T c5_d_z;
  real_T *c5_b_Temp;
  real_T *c5_b_Radiacion;
  real_T *c5_b_V;
  real_T *c5_b_I;
  c5_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c5_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c5_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
  c5_hoistedGlobal = *c5_b_V;
  c5_b_hoistedGlobal = *c5_b_Radiacion;
  c5_c_hoistedGlobal = *c5_b_Temp;
  c5_V = c5_hoistedGlobal;
  c5_Radiacion = c5_b_hoistedGlobal;
  c5_Temp = c5_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c5_debug_family_names,
    c5_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c5_q, 0U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_K, 1U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_n, 2U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_T, 3U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c5_Rs, 4U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_Rp, 5U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_Vt, 6U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c5_Ns, 7U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_Vc, 8U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c5_Isc, 9U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_Alfa, 10U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_Iph, 11U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c5_Voc_ref, 12U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_Beta, 13U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_Voc, 14U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c5_Io, 15U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c5_Ir, 16U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c5_nargin, 17U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c5_nargout, 18U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c5_V, 19U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_Radiacion, 20U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c5_Temp, 21U, c5_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c5_I, 22U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 3);
  c5_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 5);
  c5_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 7);
  c5_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 9);
  c5_T = 273.15 + c5_Temp;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 11);
  c5_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 13);
  c5_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 15);
  c5_b = c5_T;
  c5_y = 1.79484344E-23 * c5_b;
  c5_A = c5_y;
  c5_x = c5_A;
  c5_b_x = c5_x;
  c5_Vt = c5_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 16);
  c5_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 17);
  c5_c_x = c5_V;
  c5_d_x = c5_c_x;
  c5_Vc = c5_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 19);
  c5_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 20);
  c5_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 22);
  c5_b_b = c5_Radiacion;
  c5_b_y = 5.433 * c5_b_b;
  c5_b_A = c5_b_y;
  c5_e_x = c5_b_A;
  c5_f_x = c5_e_x;
  c5_c_y = c5_f_x / 1000.0;
  c5_c_b = c5_Temp - 25.0;
  c5_d_y = 0.00037 * c5_c_b;
  c5_a = c5_c_y;
  c5_d_b = 1.0 + c5_d_y;
  c5_Iph = c5_a * c5_d_b;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 24);
  c5_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 25);
  c5_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 26);
  c5_e_b = c5_Temp - 25.0;
  c5_e_y = -0.0034000000000000002 * c5_e_b;
  c5_f_b = 1.0 + c5_e_y;
  c5_Voc = 0.6166666666666667 * c5_f_b;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 32);
  c5_c_A = c5_Voc;
  c5_B = c5_Vt;
  c5_g_x = c5_c_A;
  c5_f_y = c5_B;
  c5_h_x = c5_g_x;
  c5_g_y = c5_f_y;
  c5_h_y = c5_h_x / c5_g_y;
  c5_i_x = c5_h_y;
  c5_j_x = c5_i_x;
  c5_j_x = muDoubleScalarExp(c5_j_x);
  c5_b_B = c5_j_x - 1.0;
  c5_i_y = c5_b_B;
  c5_j_y = c5_i_y;
  c5_Io = 5.433 / c5_j_y;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 33);
  c5_Ir = c5_Io;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 36);
  c5_I = 0.0;
  c5_i = 0;
  while (c5_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 38);
    c5_k_x = c5_Vc + c5_I * c5_Rs;
    c5_k_y = c5_Vt;
    c5_l_x = c5_k_x;
    c5_l_y = c5_k_y;
    c5_z = c5_l_x / c5_l_y;
    c5_m_x = c5_z;
    c5_n_x = c5_m_x;
    c5_n_x = muDoubleScalarExp(c5_n_x);
    c5_d_A = c5_Vc + c5_I * c5_Rs;
    c5_o_x = c5_d_A;
    c5_p_x = c5_o_x;
    c5_m_y = c5_p_x / 100.0;
    c5_n_y = c5_Vt;
    c5_o_y = c5_n_y;
    c5_b_z = 0.015 / c5_o_y;
    c5_b_a = c5_Ir;
    c5_g_b = c5_b_z;
    c5_p_y = c5_b_a * c5_g_b;
    c5_q_x = c5_Vc + c5_I * c5_Rs;
    c5_q_y = c5_Vt;
    c5_r_x = c5_q_x;
    c5_r_y = c5_q_y;
    c5_c_z = c5_r_x / c5_r_y;
    c5_s_x = c5_c_z;
    c5_t_x = c5_s_x;
    c5_t_x = muDoubleScalarExp(c5_t_x);
    c5_u_x = ((c5_Iph - c5_I) - c5_Ir * (c5_n_x - 1.0)) + c5_m_y;
    c5_s_y = (-1.0 - c5_p_y * c5_t_x) - 0.00015;
    c5_v_x = c5_u_x;
    c5_t_y = c5_s_y;
    c5_d_z = c5_v_x / c5_t_y;
    c5_I -= c5_d_z;
    c5_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c5_b_I = c5_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
}

static void initSimStructsc5_ArregloSeisPorSeis
  (SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber)
{
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static real_T c5_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_I, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_I), &c5_thisId);
  sf_mex_destroy(&c5_I);
  return c5_y;
}

static real_T c5_b_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d0, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_I;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c5_I = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_I), &c5_thisId);
  sf_mex_destroy(&c5_I);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

const mxArray *sf_c5_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo;
  c5_ResolvedFunctionInfo c5_info[7];
  c5_ResolvedFunctionInfo (*c5_b_info)[7];
  const mxArray *c5_m0 = NULL;
  int32_T c5_i0;
  c5_ResolvedFunctionInfo *c5_r0;
  c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  c5_b_info = (c5_ResolvedFunctionInfo (*)[7])c5_info;
  (*c5_b_info)[0].context = "";
  (*c5_b_info)[0].name = "mtimes";
  (*c5_b_info)[0].dominantType = "double";
  (*c5_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c5_b_info)[0].fileTimeLo = 1289534092U;
  (*c5_b_info)[0].fileTimeHi = 0U;
  (*c5_b_info)[0].mFileTimeLo = 0U;
  (*c5_b_info)[0].mFileTimeHi = 0U;
  (*c5_b_info)[1].context = "";
  (*c5_b_info)[1].name = "mrdivide";
  (*c5_b_info)[1].dominantType = "double";
  (*c5_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c5_b_info)[1].fileTimeLo = 1325138538U;
  (*c5_b_info)[1].fileTimeHi = 0U;
  (*c5_b_info)[1].mFileTimeLo = 1319747966U;
  (*c5_b_info)[1].mFileTimeHi = 0U;
  (*c5_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c5_b_info)[2].name = "rdivide";
  (*c5_b_info)[2].dominantType = "double";
  (*c5_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[2].fileTimeLo = 1286836844U;
  (*c5_b_info)[2].fileTimeHi = 0U;
  (*c5_b_info)[2].mFileTimeLo = 0U;
  (*c5_b_info)[2].mFileTimeHi = 0U;
  (*c5_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[3].name = "eml_div";
  (*c5_b_info)[3].dominantType = "double";
  (*c5_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c5_b_info)[3].fileTimeLo = 1313365810U;
  (*c5_b_info)[3].fileTimeHi = 0U;
  (*c5_b_info)[3].mFileTimeLo = 0U;
  (*c5_b_info)[3].mFileTimeHi = 0U;
  (*c5_b_info)[4].context = "";
  (*c5_b_info)[4].name = "rdivide";
  (*c5_b_info)[4].dominantType = "double";
  (*c5_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[4].fileTimeLo = 1286836844U;
  (*c5_b_info)[4].fileTimeHi = 0U;
  (*c5_b_info)[4].mFileTimeLo = 0U;
  (*c5_b_info)[4].mFileTimeHi = 0U;
  (*c5_b_info)[5].context = "";
  (*c5_b_info)[5].name = "exp";
  (*c5_b_info)[5].dominantType = "double";
  (*c5_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c5_b_info)[5].fileTimeLo = 1286836740U;
  (*c5_b_info)[5].fileTimeHi = 0U;
  (*c5_b_info)[5].mFileTimeLo = 0U;
  (*c5_b_info)[5].mFileTimeHi = 0U;
  (*c5_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c5_b_info)[6].name = "eml_scalar_exp";
  (*c5_b_info)[6].dominantType = "double";
  (*c5_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c5_b_info)[6].fileTimeLo = 1301346464U;
  (*c5_b_info)[6].fileTimeHi = 0U;
  (*c5_b_info)[6].mFileTimeLo = 0U;
  (*c5_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c5_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c5_i0 = 0; c5_i0 < 7; c5_i0++) {
    c5_r0 = &c5_info[c5_i0];
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c5_r0->context)), "context", "nameCaptureInfo",
                    c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c5_r0->name)), "name", "nameCaptureInfo", c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c5_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c5_r0->resolved)), "resolved", "nameCaptureInfo",
                    c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c5_i0);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c5_i0);
  }

  sf_mex_assign(&c5_nameCaptureInfo, c5_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c5_nameCaptureInfo);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static int32_T c5_c_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i1;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i1, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent),
    &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static uint8_T c5_d_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_ArregloSeisPorSeis, const
  char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_ArregloSeisPorSeis), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_ArregloSeisPorSeis);
  return c5_y;
}

static uint8_T c5_e_emlrt_marshallIn(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void init_dsm_address_info(SFc5_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c5_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c5_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c5_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c5_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           5,
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
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c5_V;
          real_T *c5_I;
          real_T *c5_Radiacion;
          real_T *c5_Temp;
          c5_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c5_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c5_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c5_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c5_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c5_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c5_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c5_Temp);
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

static void sf_opaque_initialize_c5_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
  initialize_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c5_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_ArregloSeisPorSeis
    ((SFc5_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c5_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c5_ArregloSeisPorSeis(SimStruct* S)
{
  return sf_internal_get_sim_state_c5_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c5_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c5_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c5_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_ArregloSeisPorSeis((SFc5_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_ArregloSeisPorSeis
      ((SFc5_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,5,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,5,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3400811659U));
  ssSetChecksum1(S,(3885006313U));
  ssSetChecksum2(S,(3691626008U));
  ssSetChecksum3(S,(602008907U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c5_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c5_ArregloSeisPorSeis(SimStruct *S)
{
  SFc5_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc5_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc5_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc5_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_ArregloSeisPorSeis;
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

void c5_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
