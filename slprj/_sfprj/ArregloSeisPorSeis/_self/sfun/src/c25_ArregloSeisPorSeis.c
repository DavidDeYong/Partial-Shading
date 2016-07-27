/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c25_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c25_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c25_ArregloSeisPorSeis(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void c25_update_debugger_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c25_st);
static void finalize_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void sf_c25_ArregloSeisPorSeis(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c25_chartstep_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c25_machineNumber, uint32_T
  c25_chartNumber);
static const mxArray *c25_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData);
static real_T c25_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_I, const char_T *c25_identifier);
static real_T c25_b_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData);
static const mxArray *c25_b_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData);
static int32_T c25_c_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData);
static uint8_T c25_d_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_ArregloSeisPorSeis, const
  char_T *c25_identifier);
static uint8_T c25_e_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void init_dsm_address_info(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c25_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c25_is_active_c25_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c25_ArregloSeisPorSeis(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c25_update_debugger_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c25_st;
  const mxArray *c25_y = NULL;
  real_T c25_hoistedGlobal;
  real_T c25_u;
  const mxArray *c25_b_y = NULL;
  uint8_T c25_b_hoistedGlobal;
  uint8_T c25_b_u;
  const mxArray *c25_c_y = NULL;
  real_T *c25_I;
  c25_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c25_st = NULL;
  c25_st = NULL;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_createcellarray(2), FALSE);
  c25_hoistedGlobal = *c25_I;
  c25_u = c25_hoistedGlobal;
  c25_b_y = NULL;
  sf_mex_assign(&c25_b_y, sf_mex_create("y", &c25_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c25_y, 0, c25_b_y);
  c25_b_hoistedGlobal = chartInstance->c25_is_active_c25_ArregloSeisPorSeis;
  c25_b_u = c25_b_hoistedGlobal;
  c25_c_y = NULL;
  sf_mex_assign(&c25_c_y, sf_mex_create("y", &c25_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c25_y, 1, c25_c_y);
  sf_mex_assign(&c25_st, c25_y, FALSE);
  return c25_st;
}

static void set_sim_state_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c25_st)
{
  const mxArray *c25_u;
  real_T *c25_I;
  c25_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c25_doneDoubleBufferReInit = TRUE;
  c25_u = sf_mex_dup(c25_st);
  *c25_I = c25_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c25_u,
    0)), "I");
  chartInstance->c25_is_active_c25_ArregloSeisPorSeis = c25_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c25_u, 1)),
     "is_active_c25_ArregloSeisPorSeis");
  sf_mex_destroy(&c25_u);
  c25_update_debugger_state_c25_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c25_st);
}

static void finalize_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void sf_c25_ArregloSeisPorSeis(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c25_V;
  real_T *c25_I;
  real_T *c25_Radiacion;
  real_T *c25_Temp;
  c25_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c25_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c25_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c25_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 24U, chartInstance->c25_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c25_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c25_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c25_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c25_Temp, 3U);
  chartInstance->c25_sfEvent = CALL_EVENT;
  c25_chartstep_c25_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c25_chartstep_c25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c25_hoistedGlobal;
  real_T c25_b_hoistedGlobal;
  real_T c25_c_hoistedGlobal;
  real_T c25_V;
  real_T c25_Radiacion;
  real_T c25_Temp;
  uint32_T c25_debug_family_var_map[23];
  real_T c25_q;
  real_T c25_K;
  real_T c25_n;
  real_T c25_T;
  real_T c25_Rs;
  real_T c25_Rp;
  real_T c25_Vt;
  real_T c25_Ns;
  real_T c25_Vc;
  real_T c25_Isc;
  real_T c25_Alfa;
  real_T c25_Iph;
  real_T c25_Voc_ref;
  real_T c25_Beta;
  real_T c25_Voc;
  real_T c25_Io;
  real_T c25_Ir;
  real_T c25_nargin = 3.0;
  real_T c25_nargout = 1.0;
  real_T c25_I;
  real_T c25_b;
  real_T c25_y;
  real_T c25_A;
  real_T c25_x;
  real_T c25_b_x;
  real_T c25_c_x;
  real_T c25_d_x;
  real_T c25_b_b;
  real_T c25_b_y;
  real_T c25_b_A;
  real_T c25_e_x;
  real_T c25_f_x;
  real_T c25_c_y;
  real_T c25_c_b;
  real_T c25_d_y;
  real_T c25_a;
  real_T c25_d_b;
  real_T c25_e_b;
  real_T c25_e_y;
  real_T c25_f_b;
  real_T c25_c_A;
  real_T c25_B;
  real_T c25_g_x;
  real_T c25_f_y;
  real_T c25_h_x;
  real_T c25_g_y;
  real_T c25_h_y;
  real_T c25_i_x;
  real_T c25_j_x;
  real_T c25_b_B;
  real_T c25_i_y;
  real_T c25_j_y;
  int32_T c25_i;
  real_T c25_k_x;
  real_T c25_k_y;
  real_T c25_l_x;
  real_T c25_l_y;
  real_T c25_z;
  real_T c25_m_x;
  real_T c25_n_x;
  real_T c25_d_A;
  real_T c25_o_x;
  real_T c25_p_x;
  real_T c25_m_y;
  real_T c25_n_y;
  real_T c25_o_y;
  real_T c25_b_z;
  real_T c25_b_a;
  real_T c25_g_b;
  real_T c25_p_y;
  real_T c25_q_x;
  real_T c25_q_y;
  real_T c25_r_x;
  real_T c25_r_y;
  real_T c25_c_z;
  real_T c25_s_x;
  real_T c25_t_x;
  real_T c25_u_x;
  real_T c25_s_y;
  real_T c25_v_x;
  real_T c25_t_y;
  real_T c25_d_z;
  real_T *c25_b_Temp;
  real_T *c25_b_Radiacion;
  real_T *c25_b_V;
  real_T *c25_b_I;
  c25_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c25_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c25_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c25_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 24U, chartInstance->c25_sfEvent);
  c25_hoistedGlobal = *c25_b_V;
  c25_b_hoistedGlobal = *c25_b_Radiacion;
  c25_c_hoistedGlobal = *c25_b_Temp;
  c25_V = c25_hoistedGlobal;
  c25_Radiacion = c25_b_hoistedGlobal;
  c25_Temp = c25_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c25_debug_family_names,
    c25_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c25_q, 0U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_K, 1U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_n, 2U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_T, 3U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c25_Rs, 4U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_Rp, 5U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_Vt, 6U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c25_Ns, 7U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_Vc, 8U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c25_Isc, 9U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_Alfa, 10U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_Iph, 11U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c25_Voc_ref, 12U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_Beta, 13U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_Voc, 14U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c25_Io, 15U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c25_Ir, 16U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c25_nargin, 17U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c25_nargout, 18U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c25_V, 19U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_Radiacion, 20U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c25_Temp, 21U, c25_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c25_I, 22U, c25_sf_marshallOut,
    c25_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 3);
  c25_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 5);
  c25_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 7);
  c25_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 9);
  c25_T = 273.15 + c25_Temp;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 11);
  c25_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 13);
  c25_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 15);
  c25_b = c25_T;
  c25_y = 1.79484344E-23 * c25_b;
  c25_A = c25_y;
  c25_x = c25_A;
  c25_b_x = c25_x;
  c25_Vt = c25_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 16);
  c25_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 17);
  c25_c_x = c25_V;
  c25_d_x = c25_c_x;
  c25_Vc = c25_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 19);
  c25_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 20);
  c25_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 22);
  c25_b_b = c25_Radiacion;
  c25_b_y = 5.433 * c25_b_b;
  c25_b_A = c25_b_y;
  c25_e_x = c25_b_A;
  c25_f_x = c25_e_x;
  c25_c_y = c25_f_x / 1000.0;
  c25_c_b = c25_Temp - 25.0;
  c25_d_y = 0.00037 * c25_c_b;
  c25_a = c25_c_y;
  c25_d_b = 1.0 + c25_d_y;
  c25_Iph = c25_a * c25_d_b;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 24);
  c25_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 25);
  c25_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 26);
  c25_e_b = c25_Temp - 25.0;
  c25_e_y = -0.0034000000000000002 * c25_e_b;
  c25_f_b = 1.0 + c25_e_y;
  c25_Voc = 0.6166666666666667 * c25_f_b;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 32);
  c25_c_A = c25_Voc;
  c25_B = c25_Vt;
  c25_g_x = c25_c_A;
  c25_f_y = c25_B;
  c25_h_x = c25_g_x;
  c25_g_y = c25_f_y;
  c25_h_y = c25_h_x / c25_g_y;
  c25_i_x = c25_h_y;
  c25_j_x = c25_i_x;
  c25_j_x = muDoubleScalarExp(c25_j_x);
  c25_b_B = c25_j_x - 1.0;
  c25_i_y = c25_b_B;
  c25_j_y = c25_i_y;
  c25_Io = 5.433 / c25_j_y;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 33);
  c25_Ir = c25_Io;
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 36);
  c25_I = 0.0;
  c25_i = 0;
  while (c25_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, 38);
    c25_k_x = c25_Vc + c25_I * c25_Rs;
    c25_k_y = c25_Vt;
    c25_l_x = c25_k_x;
    c25_l_y = c25_k_y;
    c25_z = c25_l_x / c25_l_y;
    c25_m_x = c25_z;
    c25_n_x = c25_m_x;
    c25_n_x = muDoubleScalarExp(c25_n_x);
    c25_d_A = c25_Vc + c25_I * c25_Rs;
    c25_o_x = c25_d_A;
    c25_p_x = c25_o_x;
    c25_m_y = c25_p_x / 100.0;
    c25_n_y = c25_Vt;
    c25_o_y = c25_n_y;
    c25_b_z = 0.015 / c25_o_y;
    c25_b_a = c25_Ir;
    c25_g_b = c25_b_z;
    c25_p_y = c25_b_a * c25_g_b;
    c25_q_x = c25_Vc + c25_I * c25_Rs;
    c25_q_y = c25_Vt;
    c25_r_x = c25_q_x;
    c25_r_y = c25_q_y;
    c25_c_z = c25_r_x / c25_r_y;
    c25_s_x = c25_c_z;
    c25_t_x = c25_s_x;
    c25_t_x = muDoubleScalarExp(c25_t_x);
    c25_u_x = ((c25_Iph - c25_I) - c25_Ir * (c25_n_x - 1.0)) + c25_m_y;
    c25_s_y = (-1.0 - c25_p_y * c25_t_x) - 0.00015;
    c25_v_x = c25_u_x;
    c25_t_y = c25_s_y;
    c25_d_z = c25_v_x / c25_t_y;
    c25_I -= c25_d_z;
    c25_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c25_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c25_b_I = c25_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 24U, chartInstance->c25_sfEvent);
}

static void initSimStructsc25_ArregloSeisPorSeis
  (SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c25_machineNumber, uint32_T
  c25_chartNumber)
{
}

static const mxArray *c25_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData)
{
  const mxArray *c25_mxArrayOutData = NULL;
  real_T c25_u;
  const mxArray *c25_y = NULL;
  SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c25_mxArrayOutData = NULL;
  c25_u = *(real_T *)c25_inData;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_create("y", &c25_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c25_mxArrayOutData, c25_y, FALSE);
  return c25_mxArrayOutData;
}

static real_T c25_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_I, const char_T *c25_identifier)
{
  real_T c25_y;
  emlrtMsgIdentifier c25_thisId;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_y = c25_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_I), &c25_thisId);
  sf_mex_destroy(&c25_I);
  return c25_y;
}

static real_T c25_b_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  real_T c25_y;
  real_T c25_d0;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_d0, 1, 0, 0U, 0, 0U, 0);
  c25_y = c25_d0;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData)
{
  const mxArray *c25_I;
  const char_T *c25_identifier;
  emlrtMsgIdentifier c25_thisId;
  real_T c25_y;
  SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c25_I = sf_mex_dup(c25_mxArrayInData);
  c25_identifier = c25_varName;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_y = c25_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_I), &c25_thisId);
  sf_mex_destroy(&c25_I);
  *(real_T *)c25_outData = c25_y;
  sf_mex_destroy(&c25_mxArrayInData);
}

const mxArray *sf_c25_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c25_nameCaptureInfo;
  c25_ResolvedFunctionInfo c25_info[7];
  c25_ResolvedFunctionInfo (*c25_b_info)[7];
  const mxArray *c25_m0 = NULL;
  int32_T c25_i0;
  c25_ResolvedFunctionInfo *c25_r0;
  c25_nameCaptureInfo = NULL;
  c25_nameCaptureInfo = NULL;
  c25_b_info = (c25_ResolvedFunctionInfo (*)[7])c25_info;
  (*c25_b_info)[0].context = "";
  (*c25_b_info)[0].name = "mtimes";
  (*c25_b_info)[0].dominantType = "double";
  (*c25_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c25_b_info)[0].fileTimeLo = 1289530492U;
  (*c25_b_info)[0].fileTimeHi = 0U;
  (*c25_b_info)[0].mFileTimeLo = 0U;
  (*c25_b_info)[0].mFileTimeHi = 0U;
  (*c25_b_info)[1].context = "";
  (*c25_b_info)[1].name = "mrdivide";
  (*c25_b_info)[1].dominantType = "double";
  (*c25_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c25_b_info)[1].fileTimeLo = 1325134938U;
  (*c25_b_info)[1].fileTimeHi = 0U;
  (*c25_b_info)[1].mFileTimeLo = 1319744366U;
  (*c25_b_info)[1].mFileTimeHi = 0U;
  (*c25_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c25_b_info)[2].name = "rdivide";
  (*c25_b_info)[2].dominantType = "double";
  (*c25_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c25_b_info)[2].fileTimeLo = 1286836844U;
  (*c25_b_info)[2].fileTimeHi = 0U;
  (*c25_b_info)[2].mFileTimeLo = 0U;
  (*c25_b_info)[2].mFileTimeHi = 0U;
  (*c25_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c25_b_info)[3].name = "eml_div";
  (*c25_b_info)[3].dominantType = "double";
  (*c25_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c25_b_info)[3].fileTimeLo = 1313365810U;
  (*c25_b_info)[3].fileTimeHi = 0U;
  (*c25_b_info)[3].mFileTimeLo = 0U;
  (*c25_b_info)[3].mFileTimeHi = 0U;
  (*c25_b_info)[4].context = "";
  (*c25_b_info)[4].name = "rdivide";
  (*c25_b_info)[4].dominantType = "double";
  (*c25_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c25_b_info)[4].fileTimeLo = 1286836844U;
  (*c25_b_info)[4].fileTimeHi = 0U;
  (*c25_b_info)[4].mFileTimeLo = 0U;
  (*c25_b_info)[4].mFileTimeHi = 0U;
  (*c25_b_info)[5].context = "";
  (*c25_b_info)[5].name = "exp";
  (*c25_b_info)[5].dominantType = "double";
  (*c25_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c25_b_info)[5].fileTimeLo = 1286836740U;
  (*c25_b_info)[5].fileTimeHi = 0U;
  (*c25_b_info)[5].mFileTimeLo = 0U;
  (*c25_b_info)[5].mFileTimeHi = 0U;
  (*c25_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c25_b_info)[6].name = "eml_scalar_exp";
  (*c25_b_info)[6].dominantType = "double";
  (*c25_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c25_b_info)[6].fileTimeLo = 1301346464U;
  (*c25_b_info)[6].fileTimeHi = 0U;
  (*c25_b_info)[6].mFileTimeLo = 0U;
  (*c25_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c25_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c25_i0 = 0; c25_i0 < 7; c25_i0++) {
    c25_r0 = &c25_info[c25_i0];
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo", c25_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c25_r0->context)), "context", "nameCaptureInfo",
                    c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo", c25_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c25_r0->name)), "name", "nameCaptureInfo", c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo",
      c25_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c25_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo", c25_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c25_r0->resolved)), "resolved",
                    "nameCaptureInfo", c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo", &c25_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo", &c25_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo",
      &c25_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c25_i0);
    sf_mex_addfield(c25_m0, sf_mex_create("nameCaptureInfo",
      &c25_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c25_i0);
  }

  sf_mex_assign(&c25_nameCaptureInfo, c25_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c25_nameCaptureInfo);
  return c25_nameCaptureInfo;
}

static const mxArray *c25_b_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData)
{
  const mxArray *c25_mxArrayOutData = NULL;
  int32_T c25_u;
  const mxArray *c25_y = NULL;
  SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c25_mxArrayOutData = NULL;
  c25_u = *(int32_T *)c25_inData;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_create("y", &c25_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c25_mxArrayOutData, c25_y, FALSE);
  return c25_mxArrayOutData;
}

static int32_T c25_c_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  int32_T c25_y;
  int32_T c25_i1;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_i1, 1, 6, 0U, 0, 0U, 0);
  c25_y = c25_i1;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData)
{
  const mxArray *c25_b_sfEvent;
  const char_T *c25_identifier;
  emlrtMsgIdentifier c25_thisId;
  int32_T c25_y;
  SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c25_b_sfEvent = sf_mex_dup(c25_mxArrayInData);
  c25_identifier = c25_varName;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_y = c25_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_b_sfEvent),
    &c25_thisId);
  sf_mex_destroy(&c25_b_sfEvent);
  *(int32_T *)c25_outData = c25_y;
  sf_mex_destroy(&c25_mxArrayInData);
}

static uint8_T c25_d_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_ArregloSeisPorSeis, const
  char_T *c25_identifier)
{
  uint8_T c25_y;
  emlrtMsgIdentifier c25_thisId;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_y = c25_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c25_b_is_active_c25_ArregloSeisPorSeis), &c25_thisId);
  sf_mex_destroy(&c25_b_is_active_c25_ArregloSeisPorSeis);
  return c25_y;
}

static uint8_T c25_e_emlrt_marshallIn(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  uint8_T c25_y;
  uint8_T c25_u0;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_u0, 1, 3, 0U, 0, 0U, 0);
  c25_y = c25_u0;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void init_dsm_address_info(SFc25_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c25_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c25_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c25_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c25_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c25_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           25,
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
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)c25_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c25_V;
          real_T *c25_I;
          real_T *c25_Radiacion;
          real_T *c25_Temp;
          c25_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c25_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c25_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c25_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c25_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c25_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c25_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c25_Temp);
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

static void sf_opaque_initialize_c25_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c25_ArregloSeisPorSeis
    ((SFc25_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar);
  initialize_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c25_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c25_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c25_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c25_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c25_ArregloSeisPorSeis
    ((SFc25_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c25_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c25_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c25_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c25_ArregloSeisPorSeis(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c25_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c25_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c25_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c25_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc25_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc25_ArregloSeisPorSeis((SFc25_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c25_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c25_ArregloSeisPorSeis
      ((SFc25_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c25_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      25);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,25,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,25,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,25,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,25,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,25);
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

static void mdlRTW_c25_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c25_ArregloSeisPorSeis(SimStruct *S)
{
  SFc25_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc25_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc25_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc25_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c25_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c25_ArregloSeisPorSeis;
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

void c25_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c25_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c25_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c25_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c25_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
