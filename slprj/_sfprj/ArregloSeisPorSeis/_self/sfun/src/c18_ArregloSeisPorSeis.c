/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c18_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c18_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c18_ArregloSeisPorSeis(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void c18_update_debugger_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c18_st);
static void finalize_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void sf_c18_ArregloSeisPorSeis(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c18_chartstep_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber);
static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static real_T c18_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_I, const char_T *c18_identifier);
static real_T c18_b_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static int32_T c18_c_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static uint8_T c18_d_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_ArregloSeisPorSeis, const
  char_T *c18_identifier);
static uint8_T c18_e_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void init_dsm_address_info(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c18_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c18_is_active_c18_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c18_ArregloSeisPorSeis(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c18_update_debugger_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c18_st;
  const mxArray *c18_y = NULL;
  real_T c18_hoistedGlobal;
  real_T c18_u;
  const mxArray *c18_b_y = NULL;
  uint8_T c18_b_hoistedGlobal;
  uint8_T c18_b_u;
  const mxArray *c18_c_y = NULL;
  real_T *c18_I;
  c18_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_st = NULL;
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellarray(2), FALSE);
  c18_hoistedGlobal = *c18_I;
  c18_u = c18_hoistedGlobal;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_b_hoistedGlobal = chartInstance->c18_is_active_c18_ArregloSeisPorSeis;
  c18_b_u = c18_b_hoistedGlobal;
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", &c18_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c18_y, 1, c18_c_y);
  sf_mex_assign(&c18_st, c18_y, FALSE);
  return c18_st;
}

static void set_sim_state_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_u;
  real_T *c18_I;
  c18_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c18_doneDoubleBufferReInit = TRUE;
  c18_u = sf_mex_dup(c18_st);
  *c18_I = c18_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c18_u,
    0)), "I");
  chartInstance->c18_is_active_c18_ArregloSeisPorSeis = c18_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 1)),
     "is_active_c18_ArregloSeisPorSeis");
  sf_mex_destroy(&c18_u);
  c18_update_debugger_state_c18_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c18_st);
}

static void finalize_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void sf_c18_ArregloSeisPorSeis(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c18_V;
  real_T *c18_I;
  real_T *c18_Radiacion;
  real_T *c18_Temp;
  c18_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c18_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c18_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c18_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c18_Temp, 3U);
  chartInstance->c18_sfEvent = CALL_EVENT;
  c18_chartstep_c18_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c18_chartstep_c18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c18_hoistedGlobal;
  real_T c18_b_hoistedGlobal;
  real_T c18_c_hoistedGlobal;
  real_T c18_V;
  real_T c18_Radiacion;
  real_T c18_Temp;
  uint32_T c18_debug_family_var_map[23];
  real_T c18_q;
  real_T c18_K;
  real_T c18_n;
  real_T c18_T;
  real_T c18_Rs;
  real_T c18_Rp;
  real_T c18_Vt;
  real_T c18_Ns;
  real_T c18_Vc;
  real_T c18_Isc;
  real_T c18_Alfa;
  real_T c18_Iph;
  real_T c18_Voc_ref;
  real_T c18_Beta;
  real_T c18_Voc;
  real_T c18_Io;
  real_T c18_Ir;
  real_T c18_nargin = 3.0;
  real_T c18_nargout = 1.0;
  real_T c18_I;
  real_T c18_b;
  real_T c18_y;
  real_T c18_A;
  real_T c18_x;
  real_T c18_b_x;
  real_T c18_c_x;
  real_T c18_d_x;
  real_T c18_b_b;
  real_T c18_b_y;
  real_T c18_b_A;
  real_T c18_e_x;
  real_T c18_f_x;
  real_T c18_c_y;
  real_T c18_c_b;
  real_T c18_d_y;
  real_T c18_a;
  real_T c18_d_b;
  real_T c18_e_b;
  real_T c18_e_y;
  real_T c18_f_b;
  real_T c18_c_A;
  real_T c18_B;
  real_T c18_g_x;
  real_T c18_f_y;
  real_T c18_h_x;
  real_T c18_g_y;
  real_T c18_h_y;
  real_T c18_i_x;
  real_T c18_j_x;
  real_T c18_b_B;
  real_T c18_i_y;
  real_T c18_j_y;
  int32_T c18_i;
  real_T c18_k_x;
  real_T c18_k_y;
  real_T c18_l_x;
  real_T c18_l_y;
  real_T c18_z;
  real_T c18_m_x;
  real_T c18_n_x;
  real_T c18_d_A;
  real_T c18_o_x;
  real_T c18_p_x;
  real_T c18_m_y;
  real_T c18_n_y;
  real_T c18_o_y;
  real_T c18_b_z;
  real_T c18_b_a;
  real_T c18_g_b;
  real_T c18_p_y;
  real_T c18_q_x;
  real_T c18_q_y;
  real_T c18_r_x;
  real_T c18_r_y;
  real_T c18_c_z;
  real_T c18_s_x;
  real_T c18_t_x;
  real_T c18_u_x;
  real_T c18_s_y;
  real_T c18_v_x;
  real_T c18_t_y;
  real_T c18_d_z;
  real_T *c18_b_Temp;
  real_T *c18_b_Radiacion;
  real_T *c18_b_V;
  real_T *c18_b_I;
  c18_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
  c18_hoistedGlobal = *c18_b_V;
  c18_b_hoistedGlobal = *c18_b_Radiacion;
  c18_c_hoistedGlobal = *c18_b_Temp;
  c18_V = c18_hoistedGlobal;
  c18_Radiacion = c18_b_hoistedGlobal;
  c18_Temp = c18_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c18_debug_family_names,
    c18_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c18_q, 0U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_K, 1U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_n, 2U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_T, 3U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_Rs, 4U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_Rp, 5U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_Vt, 6U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_Ns, 7U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_Vc, 8U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_Isc, 9U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_Alfa, 10U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_Iph, 11U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_Voc_ref, 12U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_Beta, 13U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_Voc, 14U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c18_Io, 15U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c18_Ir, 16U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c18_nargin, 17U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c18_nargout, 18U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_V, 19U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_Radiacion, 20U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_Temp, 21U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_I, 22U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 3);
  c18_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 5);
  c18_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 7);
  c18_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 9);
  c18_T = 273.15 + c18_Temp;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 11);
  c18_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 13);
  c18_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 15);
  c18_b = c18_T;
  c18_y = 1.79484344E-23 * c18_b;
  c18_A = c18_y;
  c18_x = c18_A;
  c18_b_x = c18_x;
  c18_Vt = c18_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 16);
  c18_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 17);
  c18_c_x = c18_V;
  c18_d_x = c18_c_x;
  c18_Vc = c18_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 19);
  c18_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 20);
  c18_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 22);
  c18_b_b = c18_Radiacion;
  c18_b_y = 5.433 * c18_b_b;
  c18_b_A = c18_b_y;
  c18_e_x = c18_b_A;
  c18_f_x = c18_e_x;
  c18_c_y = c18_f_x / 1000.0;
  c18_c_b = c18_Temp - 25.0;
  c18_d_y = 0.00037 * c18_c_b;
  c18_a = c18_c_y;
  c18_d_b = 1.0 + c18_d_y;
  c18_Iph = c18_a * c18_d_b;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 24);
  c18_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 25);
  c18_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 26);
  c18_e_b = c18_Temp - 25.0;
  c18_e_y = -0.0034000000000000002 * c18_e_b;
  c18_f_b = 1.0 + c18_e_y;
  c18_Voc = 0.6166666666666667 * c18_f_b;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 32);
  c18_c_A = c18_Voc;
  c18_B = c18_Vt;
  c18_g_x = c18_c_A;
  c18_f_y = c18_B;
  c18_h_x = c18_g_x;
  c18_g_y = c18_f_y;
  c18_h_y = c18_h_x / c18_g_y;
  c18_i_x = c18_h_y;
  c18_j_x = c18_i_x;
  c18_j_x = muDoubleScalarExp(c18_j_x);
  c18_b_B = c18_j_x - 1.0;
  c18_i_y = c18_b_B;
  c18_j_y = c18_i_y;
  c18_Io = 5.433 / c18_j_y;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 33);
  c18_Ir = c18_Io;
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 36);
  c18_I = 0.0;
  c18_i = 0;
  while (c18_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 38);
    c18_k_x = c18_Vc + c18_I * c18_Rs;
    c18_k_y = c18_Vt;
    c18_l_x = c18_k_x;
    c18_l_y = c18_k_y;
    c18_z = c18_l_x / c18_l_y;
    c18_m_x = c18_z;
    c18_n_x = c18_m_x;
    c18_n_x = muDoubleScalarExp(c18_n_x);
    c18_d_A = c18_Vc + c18_I * c18_Rs;
    c18_o_x = c18_d_A;
    c18_p_x = c18_o_x;
    c18_m_y = c18_p_x / 100.0;
    c18_n_y = c18_Vt;
    c18_o_y = c18_n_y;
    c18_b_z = 0.015 / c18_o_y;
    c18_b_a = c18_Ir;
    c18_g_b = c18_b_z;
    c18_p_y = c18_b_a * c18_g_b;
    c18_q_x = c18_Vc + c18_I * c18_Rs;
    c18_q_y = c18_Vt;
    c18_r_x = c18_q_x;
    c18_r_y = c18_q_y;
    c18_c_z = c18_r_x / c18_r_y;
    c18_s_x = c18_c_z;
    c18_t_x = c18_s_x;
    c18_t_x = muDoubleScalarExp(c18_t_x);
    c18_u_x = ((c18_Iph - c18_I) - c18_Ir * (c18_n_x - 1.0)) + c18_m_y;
    c18_s_y = (-1.0 - c18_p_y * c18_t_x) - 0.00015;
    c18_v_x = c18_u_x;
    c18_t_y = c18_s_y;
    c18_d_z = c18_v_x / c18_t_y;
    c18_I -= c18_d_z;
    c18_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c18_b_I = c18_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
}

static void initSimStructsc18_ArregloSeisPorSeis
  (SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber)
{
}

static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData = NULL;
  real_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_u = *(real_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c18_mxArrayOutData, c18_y, FALSE);
  return c18_mxArrayOutData;
}

static real_T c18_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_I, const char_T *c18_identifier)
{
  real_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_I), &c18_thisId);
  sf_mex_destroy(&c18_I);
  return c18_y;
}

static real_T c18_b_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  real_T c18_y;
  real_T c18_d0;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_d0, 1, 0, 0U, 0, 0U, 0);
  c18_y = c18_d0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_I;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  real_T c18_y;
  SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c18_I = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_I), &c18_thisId);
  sf_mex_destroy(&c18_I);
  *(real_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

const mxArray *sf_c18_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c18_nameCaptureInfo;
  c18_ResolvedFunctionInfo c18_info[7];
  c18_ResolvedFunctionInfo (*c18_b_info)[7];
  const mxArray *c18_m0 = NULL;
  int32_T c18_i0;
  c18_ResolvedFunctionInfo *c18_r0;
  c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  c18_b_info = (c18_ResolvedFunctionInfo (*)[7])c18_info;
  (*c18_b_info)[0].context = "";
  (*c18_b_info)[0].name = "mtimes";
  (*c18_b_info)[0].dominantType = "double";
  (*c18_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c18_b_info)[0].fileTimeLo = 1289530492U;
  (*c18_b_info)[0].fileTimeHi = 0U;
  (*c18_b_info)[0].mFileTimeLo = 0U;
  (*c18_b_info)[0].mFileTimeHi = 0U;
  (*c18_b_info)[1].context = "";
  (*c18_b_info)[1].name = "mrdivide";
  (*c18_b_info)[1].dominantType = "double";
  (*c18_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c18_b_info)[1].fileTimeLo = 1325134938U;
  (*c18_b_info)[1].fileTimeHi = 0U;
  (*c18_b_info)[1].mFileTimeLo = 1319744366U;
  (*c18_b_info)[1].mFileTimeHi = 0U;
  (*c18_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c18_b_info)[2].name = "rdivide";
  (*c18_b_info)[2].dominantType = "double";
  (*c18_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c18_b_info)[2].fileTimeLo = 1286836844U;
  (*c18_b_info)[2].fileTimeHi = 0U;
  (*c18_b_info)[2].mFileTimeLo = 0U;
  (*c18_b_info)[2].mFileTimeHi = 0U;
  (*c18_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c18_b_info)[3].name = "eml_div";
  (*c18_b_info)[3].dominantType = "double";
  (*c18_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c18_b_info)[3].fileTimeLo = 1313365810U;
  (*c18_b_info)[3].fileTimeHi = 0U;
  (*c18_b_info)[3].mFileTimeLo = 0U;
  (*c18_b_info)[3].mFileTimeHi = 0U;
  (*c18_b_info)[4].context = "";
  (*c18_b_info)[4].name = "rdivide";
  (*c18_b_info)[4].dominantType = "double";
  (*c18_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c18_b_info)[4].fileTimeLo = 1286836844U;
  (*c18_b_info)[4].fileTimeHi = 0U;
  (*c18_b_info)[4].mFileTimeLo = 0U;
  (*c18_b_info)[4].mFileTimeHi = 0U;
  (*c18_b_info)[5].context = "";
  (*c18_b_info)[5].name = "exp";
  (*c18_b_info)[5].dominantType = "double";
  (*c18_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c18_b_info)[5].fileTimeLo = 1286836740U;
  (*c18_b_info)[5].fileTimeHi = 0U;
  (*c18_b_info)[5].mFileTimeLo = 0U;
  (*c18_b_info)[5].mFileTimeHi = 0U;
  (*c18_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c18_b_info)[6].name = "eml_scalar_exp";
  (*c18_b_info)[6].dominantType = "double";
  (*c18_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c18_b_info)[6].fileTimeLo = 1301346464U;
  (*c18_b_info)[6].fileTimeHi = 0U;
  (*c18_b_info)[6].mFileTimeLo = 0U;
  (*c18_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c18_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c18_i0 = 0; c18_i0 < 7; c18_i0++) {
    c18_r0 = &c18_info[c18_i0];
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c18_r0->context)), "context", "nameCaptureInfo",
                    c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c18_r0->name)), "name", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      c18_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c18_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c18_r0->resolved)), "resolved",
                    "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", &c18_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", &c18_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      &c18_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      &c18_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c18_i0);
  }

  sf_mex_assign(&c18_nameCaptureInfo, c18_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c18_nameCaptureInfo);
  return c18_nameCaptureInfo;
}

static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData = NULL;
  int32_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_u = *(int32_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c18_mxArrayOutData, c18_y, FALSE);
  return c18_mxArrayOutData;
}

static int32_T c18_c_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  int32_T c18_y;
  int32_T c18_i1;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_i1, 1, 6, 0U, 0, 0U, 0);
  c18_y = c18_i1;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_b_sfEvent;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  int32_T c18_y;
  SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c18_b_sfEvent = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_b_sfEvent),
    &c18_thisId);
  sf_mex_destroy(&c18_b_sfEvent);
  *(int32_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

static uint8_T c18_d_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_ArregloSeisPorSeis, const
  char_T *c18_identifier)
{
  uint8_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_b_is_active_c18_ArregloSeisPorSeis), &c18_thisId);
  sf_mex_destroy(&c18_b_is_active_c18_ArregloSeisPorSeis);
  return c18_y;
}

static uint8_T c18_e_emlrt_marshallIn(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  uint8_T c18_y;
  uint8_T c18_u0;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_u0, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_u0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void init_dsm_address_info(SFc18_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c18_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c18_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c18_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c18_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           18,
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
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)c18_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c18_V;
          real_T *c18_I;
          real_T *c18_Radiacion;
          real_T *c18_Temp;
          c18_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c18_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c18_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c18_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c18_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c18_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c18_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c18_Temp);
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

static void sf_opaque_initialize_c18_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c18_ArregloSeisPorSeis
    ((SFc18_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar);
  initialize_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c18_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c18_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c18_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c18_ArregloSeisPorSeis
    ((SFc18_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c18_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c18_ArregloSeisPorSeis(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c18_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c18_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c18_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c18_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc18_ArregloSeisPorSeis((SFc18_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_ArregloSeisPorSeis
      ((SFc18_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c18_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      18);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,18,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,18,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,18,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,18,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,18);
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

static void mdlRTW_c18_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c18_ArregloSeisPorSeis(SimStruct *S)
{
  SFc18_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc18_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc18_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc18_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c18_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c18_ArregloSeisPorSeis;
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

void c18_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c18_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
