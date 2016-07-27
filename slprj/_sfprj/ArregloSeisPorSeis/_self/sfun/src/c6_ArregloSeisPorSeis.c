/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c6_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c6_debug_family_names[23] = { "q", "K", "n", "T", "Rs", "Rp",
  "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io", "Ir",
  "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct *
  chartInstance);
static void c6_update_debugger_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c6_st);
static void finalize_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void sf_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c6_chartstep_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static real_T c6_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_I, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static int32_T c6_c_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static uint8_T c6_d_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_ArregloSeisPorSeis, const
  char_T *c6_identifier);
static uint8_T c6_e_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void init_dsm_address_info(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c6_is_active_c6_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c6_update_debugger_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  real_T c6_u;
  const mxArray *c6_b_y = NULL;
  uint8_T c6_b_hoistedGlobal;
  uint8_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  real_T *c6_I;
  c6_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellarray(2), FALSE);
  c6_hoistedGlobal = *c6_I;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = chartInstance->c6_is_active_c6_ArregloSeisPorSeis;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  sf_mex_assign(&c6_st, c6_y, FALSE);
  return c6_st;
}

static void set_sim_state_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  real_T *c6_I;
  c6_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c6_doneDoubleBufferReInit = TRUE;
  c6_u = sf_mex_dup(c6_st);
  *c6_I = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 0)),
    "I");
  chartInstance->c6_is_active_c6_ArregloSeisPorSeis = c6_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 1)),
     "is_active_c6_ArregloSeisPorSeis");
  sf_mex_destroy(&c6_u);
  c6_update_debugger_state_c6_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void finalize_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

static void sf_c6_ArregloSeisPorSeis(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c6_V;
  real_T *c6_I;
  real_T *c6_Radiacion;
  real_T *c6_Temp;
  c6_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c6_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c6_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c6_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c6_Temp, 3U);
  chartInstance->c6_sfEvent = CALL_EVENT;
  c6_chartstep_c6_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c6_chartstep_c6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c6_hoistedGlobal;
  real_T c6_b_hoistedGlobal;
  real_T c6_c_hoistedGlobal;
  real_T c6_V;
  real_T c6_Radiacion;
  real_T c6_Temp;
  uint32_T c6_debug_family_var_map[23];
  real_T c6_q;
  real_T c6_K;
  real_T c6_n;
  real_T c6_T;
  real_T c6_Rs;
  real_T c6_Rp;
  real_T c6_Vt;
  real_T c6_Ns;
  real_T c6_Vc;
  real_T c6_Isc;
  real_T c6_Alfa;
  real_T c6_Iph;
  real_T c6_Voc_ref;
  real_T c6_Beta;
  real_T c6_Voc;
  real_T c6_Io;
  real_T c6_Ir;
  real_T c6_nargin = 3.0;
  real_T c6_nargout = 1.0;
  real_T c6_I;
  real_T c6_b;
  real_T c6_y;
  real_T c6_A;
  real_T c6_x;
  real_T c6_b_x;
  real_T c6_c_x;
  real_T c6_d_x;
  real_T c6_b_b;
  real_T c6_b_y;
  real_T c6_b_A;
  real_T c6_e_x;
  real_T c6_f_x;
  real_T c6_c_y;
  real_T c6_c_b;
  real_T c6_d_y;
  real_T c6_a;
  real_T c6_d_b;
  real_T c6_e_b;
  real_T c6_e_y;
  real_T c6_f_b;
  real_T c6_c_A;
  real_T c6_B;
  real_T c6_g_x;
  real_T c6_f_y;
  real_T c6_h_x;
  real_T c6_g_y;
  real_T c6_h_y;
  real_T c6_i_x;
  real_T c6_j_x;
  real_T c6_b_B;
  real_T c6_i_y;
  real_T c6_j_y;
  int32_T c6_i;
  real_T c6_k_x;
  real_T c6_k_y;
  real_T c6_l_x;
  real_T c6_l_y;
  real_T c6_z;
  real_T c6_m_x;
  real_T c6_n_x;
  real_T c6_d_A;
  real_T c6_o_x;
  real_T c6_p_x;
  real_T c6_m_y;
  real_T c6_n_y;
  real_T c6_o_y;
  real_T c6_b_z;
  real_T c6_b_a;
  real_T c6_g_b;
  real_T c6_p_y;
  real_T c6_q_x;
  real_T c6_q_y;
  real_T c6_r_x;
  real_T c6_r_y;
  real_T c6_c_z;
  real_T c6_s_x;
  real_T c6_t_x;
  real_T c6_u_x;
  real_T c6_s_y;
  real_T c6_v_x;
  real_T c6_t_y;
  real_T c6_d_z;
  real_T *c6_b_Temp;
  real_T *c6_b_Radiacion;
  real_T *c6_b_V;
  real_T *c6_b_I;
  c6_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  c6_hoistedGlobal = *c6_b_V;
  c6_b_hoistedGlobal = *c6_b_Radiacion;
  c6_c_hoistedGlobal = *c6_b_Temp;
  c6_V = c6_hoistedGlobal;
  c6_Radiacion = c6_b_hoistedGlobal;
  c6_Temp = c6_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c6_debug_family_names,
    c6_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c6_q, 0U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_K, 1U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_n, 2U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_T, 3U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c6_Rs, 4U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_Rp, 5U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_Vt, 6U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c6_Ns, 7U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_Vc, 8U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c6_Isc, 9U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_Alfa, 10U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_Iph, 11U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c6_Voc_ref, 12U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_Beta, 13U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_Voc, 14U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c6_Io, 15U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c6_Ir, 16U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c6_nargin, 17U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c6_nargout, 18U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c6_V, 19U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_Radiacion, 20U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c6_Temp, 21U, c6_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c6_I, 22U, c6_sf_marshallOut,
    c6_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 3);
  c6_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 5);
  c6_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 7);
  c6_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 9);
  c6_T = 273.15 + c6_Temp;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 11);
  c6_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 13);
  c6_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 15);
  c6_b = c6_T;
  c6_y = 1.79484344E-23 * c6_b;
  c6_A = c6_y;
  c6_x = c6_A;
  c6_b_x = c6_x;
  c6_Vt = c6_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 16);
  c6_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 17);
  c6_c_x = c6_V;
  c6_d_x = c6_c_x;
  c6_Vc = c6_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 19);
  c6_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 20);
  c6_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 22);
  c6_b_b = c6_Radiacion;
  c6_b_y = 5.433 * c6_b_b;
  c6_b_A = c6_b_y;
  c6_e_x = c6_b_A;
  c6_f_x = c6_e_x;
  c6_c_y = c6_f_x / 1000.0;
  c6_c_b = c6_Temp - 25.0;
  c6_d_y = 0.00037 * c6_c_b;
  c6_a = c6_c_y;
  c6_d_b = 1.0 + c6_d_y;
  c6_Iph = c6_a * c6_d_b;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 24);
  c6_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 25);
  c6_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 26);
  c6_e_b = c6_Temp - 25.0;
  c6_e_y = -0.0034000000000000002 * c6_e_b;
  c6_f_b = 1.0 + c6_e_y;
  c6_Voc = 0.6166666666666667 * c6_f_b;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 32);
  c6_c_A = c6_Voc;
  c6_B = c6_Vt;
  c6_g_x = c6_c_A;
  c6_f_y = c6_B;
  c6_h_x = c6_g_x;
  c6_g_y = c6_f_y;
  c6_h_y = c6_h_x / c6_g_y;
  c6_i_x = c6_h_y;
  c6_j_x = c6_i_x;
  c6_j_x = muDoubleScalarExp(c6_j_x);
  c6_b_B = c6_j_x - 1.0;
  c6_i_y = c6_b_B;
  c6_j_y = c6_i_y;
  c6_Io = 5.433 / c6_j_y;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 33);
  c6_Ir = c6_Io;
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 36);
  c6_I = 0.0;
  c6_i = 0;
  while (c6_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, 38);
    c6_k_x = c6_Vc + c6_I * c6_Rs;
    c6_k_y = c6_Vt;
    c6_l_x = c6_k_x;
    c6_l_y = c6_k_y;
    c6_z = c6_l_x / c6_l_y;
    c6_m_x = c6_z;
    c6_n_x = c6_m_x;
    c6_n_x = muDoubleScalarExp(c6_n_x);
    c6_d_A = c6_Vc + c6_I * c6_Rs;
    c6_o_x = c6_d_A;
    c6_p_x = c6_o_x;
    c6_m_y = c6_p_x / 100.0;
    c6_n_y = c6_Vt;
    c6_o_y = c6_n_y;
    c6_b_z = 0.015 / c6_o_y;
    c6_b_a = c6_Ir;
    c6_g_b = c6_b_z;
    c6_p_y = c6_b_a * c6_g_b;
    c6_q_x = c6_Vc + c6_I * c6_Rs;
    c6_q_y = c6_Vt;
    c6_r_x = c6_q_x;
    c6_r_y = c6_q_y;
    c6_c_z = c6_r_x / c6_r_y;
    c6_s_x = c6_c_z;
    c6_t_x = c6_s_x;
    c6_t_x = muDoubleScalarExp(c6_t_x);
    c6_u_x = ((c6_Iph - c6_I) - c6_Ir * (c6_n_x - 1.0)) + c6_m_y;
    c6_s_y = (-1.0 - c6_p_y * c6_t_x) - 0.00015;
    c6_v_x = c6_u_x;
    c6_t_y = c6_s_y;
    c6_d_z = c6_v_x / c6_t_y;
    c6_I -= c6_d_z;
    c6_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c6_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c6_b_I = c6_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
}

static void initSimStructsc6_ArregloSeisPorSeis
  (SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber)
{
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static real_T c6_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_I, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_I), &c6_thisId);
  sf_mex_destroy(&c6_I);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_I;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c6_I = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_I), &c6_thisId);
  sf_mex_destroy(&c6_I);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

const mxArray *sf_c6_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo;
  c6_ResolvedFunctionInfo c6_info[7];
  c6_ResolvedFunctionInfo (*c6_b_info)[7];
  const mxArray *c6_m0 = NULL;
  int32_T c6_i0;
  c6_ResolvedFunctionInfo *c6_r0;
  c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  c6_b_info = (c6_ResolvedFunctionInfo (*)[7])c6_info;
  (*c6_b_info)[0].context = "";
  (*c6_b_info)[0].name = "mtimes";
  (*c6_b_info)[0].dominantType = "double";
  (*c6_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c6_b_info)[0].fileTimeLo = 1289530492U;
  (*c6_b_info)[0].fileTimeHi = 0U;
  (*c6_b_info)[0].mFileTimeLo = 0U;
  (*c6_b_info)[0].mFileTimeHi = 0U;
  (*c6_b_info)[1].context = "";
  (*c6_b_info)[1].name = "mrdivide";
  (*c6_b_info)[1].dominantType = "double";
  (*c6_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c6_b_info)[1].fileTimeLo = 1325134938U;
  (*c6_b_info)[1].fileTimeHi = 0U;
  (*c6_b_info)[1].mFileTimeLo = 1319744366U;
  (*c6_b_info)[1].mFileTimeHi = 0U;
  (*c6_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c6_b_info)[2].name = "rdivide";
  (*c6_b_info)[2].dominantType = "double";
  (*c6_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c6_b_info)[2].fileTimeLo = 1286836844U;
  (*c6_b_info)[2].fileTimeHi = 0U;
  (*c6_b_info)[2].mFileTimeLo = 0U;
  (*c6_b_info)[2].mFileTimeHi = 0U;
  (*c6_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c6_b_info)[3].name = "eml_div";
  (*c6_b_info)[3].dominantType = "double";
  (*c6_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c6_b_info)[3].fileTimeLo = 1313365810U;
  (*c6_b_info)[3].fileTimeHi = 0U;
  (*c6_b_info)[3].mFileTimeLo = 0U;
  (*c6_b_info)[3].mFileTimeHi = 0U;
  (*c6_b_info)[4].context = "";
  (*c6_b_info)[4].name = "rdivide";
  (*c6_b_info)[4].dominantType = "double";
  (*c6_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c6_b_info)[4].fileTimeLo = 1286836844U;
  (*c6_b_info)[4].fileTimeHi = 0U;
  (*c6_b_info)[4].mFileTimeLo = 0U;
  (*c6_b_info)[4].mFileTimeHi = 0U;
  (*c6_b_info)[5].context = "";
  (*c6_b_info)[5].name = "exp";
  (*c6_b_info)[5].dominantType = "double";
  (*c6_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c6_b_info)[5].fileTimeLo = 1286836740U;
  (*c6_b_info)[5].fileTimeHi = 0U;
  (*c6_b_info)[5].mFileTimeLo = 0U;
  (*c6_b_info)[5].mFileTimeHi = 0U;
  (*c6_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c6_b_info)[6].name = "eml_scalar_exp";
  (*c6_b_info)[6].dominantType = "double";
  (*c6_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c6_b_info)[6].fileTimeLo = 1301346464U;
  (*c6_b_info)[6].fileTimeHi = 0U;
  (*c6_b_info)[6].mFileTimeLo = 0U;
  (*c6_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c6_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c6_i0 = 0; c6_i0 < 7; c6_i0++) {
    c6_r0 = &c6_info[c6_i0];
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c6_r0->context)), "context", "nameCaptureInfo",
                    c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c6_r0->name)), "name", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c6_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c6_r0->resolved)), "resolved", "nameCaptureInfo",
                    c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c6_i0);
  }

  sf_mex_assign(&c6_nameCaptureInfo, c6_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c6_nameCaptureInfo);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static int32_T c6_c_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i1;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i1, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent),
    &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_ArregloSeisPorSeis, const
  char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_ArregloSeisPorSeis), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_ArregloSeisPorSeis);
  return c6_y;
}

static uint8_T c6_e_emlrt_marshallIn(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void init_dsm_address_info(SFc6_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c6_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c6_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c6_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c6_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           6,
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
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)c6_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c6_V;
          real_T *c6_I;
          real_T *c6_Radiacion;
          real_T *c6_Temp;
          c6_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c6_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c6_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c6_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c6_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c6_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c6_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c6_Temp);
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

static void sf_opaque_initialize_c6_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
  initialize_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c6_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c6_ArregloSeisPorSeis
    ((SFc6_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c6_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c6_ArregloSeisPorSeis(SimStruct* S)
{
  return sf_internal_get_sim_state_c6_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c6_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c6_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c6_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_ArregloSeisPorSeis((SFc6_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_ArregloSeisPorSeis
      ((SFc6_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,6,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
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

static void mdlRTW_c6_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c6_ArregloSeisPorSeis(SimStruct *S)
{
  SFc6_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc6_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc6_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_ArregloSeisPorSeis;
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

void c6_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
