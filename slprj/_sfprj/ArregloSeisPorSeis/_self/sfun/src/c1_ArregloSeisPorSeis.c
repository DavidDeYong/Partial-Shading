/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c1_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c1_debug_family_names[23] = { "q", "K", "n", "T", "Rs", "Rp",
  "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io", "Ir",
  "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct *
  chartInstance);
static void c1_update_debugger_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c1_st);
static void finalize_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void sf_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c1_chartstep_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static real_T c1_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_I, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_c_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint8_T c1_d_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_ArregloSeisPorSeis, const
  char_T *c1_identifier);
static uint8_T c1_e_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void init_dsm_address_info(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_is_active_c1_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  uint8_T c1_b_hoistedGlobal;
  uint8_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  real_T *c1_I;
  c1_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(2), FALSE);
  c1_hoistedGlobal = *c1_I;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = chartInstance->c1_is_active_c1_ArregloSeisPorSeis;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  sf_mex_assign(&c1_st, c1_y, FALSE);
  return c1_st;
}

static void set_sim_state_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_I;
  c1_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_doneDoubleBufferReInit = TRUE;
  c1_u = sf_mex_dup(c1_st);
  *c1_I = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
    "I");
  chartInstance->c1_is_active_c1_ArregloSeisPorSeis = c1_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
     "is_active_c1_ArregloSeisPorSeis");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

static void sf_c1_ArregloSeisPorSeis(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c1_V;
  real_T *c1_I;
  real_T *c1_Radiacion;
  real_T *c1_Temp;
  c1_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c1_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c1_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c1_Temp, 3U);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c1_chartstep_c1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c1_hoistedGlobal;
  real_T c1_b_hoistedGlobal;
  real_T c1_c_hoistedGlobal;
  real_T c1_V;
  real_T c1_Radiacion;
  real_T c1_Temp;
  uint32_T c1_debug_family_var_map[23];
  real_T c1_q;
  real_T c1_K;
  real_T c1_n;
  real_T c1_T;
  real_T c1_Rs;
  real_T c1_Rp;
  real_T c1_Vt;
  real_T c1_Ns;
  real_T c1_Vc;
  real_T c1_Isc;
  real_T c1_Alfa;
  real_T c1_Iph;
  real_T c1_Voc_ref;
  real_T c1_Beta;
  real_T c1_Voc;
  real_T c1_Io;
  real_T c1_Ir;
  real_T c1_nargin = 3.0;
  real_T c1_nargout = 1.0;
  real_T c1_I;
  real_T c1_b;
  real_T c1_y;
  real_T c1_A;
  real_T c1_x;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_b_b;
  real_T c1_b_y;
  real_T c1_b_A;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_c_y;
  real_T c1_c_b;
  real_T c1_d_y;
  real_T c1_a;
  real_T c1_d_b;
  real_T c1_e_b;
  real_T c1_e_y;
  real_T c1_f_b;
  real_T c1_c_A;
  real_T c1_B;
  real_T c1_g_x;
  real_T c1_f_y;
  real_T c1_h_x;
  real_T c1_g_y;
  real_T c1_h_y;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_b_B;
  real_T c1_i_y;
  real_T c1_j_y;
  int32_T c1_i;
  real_T c1_k_x;
  real_T c1_k_y;
  real_T c1_l_x;
  real_T c1_l_y;
  real_T c1_z;
  real_T c1_m_x;
  real_T c1_n_x;
  real_T c1_d_A;
  real_T c1_o_x;
  real_T c1_p_x;
  real_T c1_m_y;
  real_T c1_n_y;
  real_T c1_o_y;
  real_T c1_b_z;
  real_T c1_b_a;
  real_T c1_g_b;
  real_T c1_p_y;
  real_T c1_q_x;
  real_T c1_q_y;
  real_T c1_r_x;
  real_T c1_r_y;
  real_T c1_c_z;
  real_T c1_s_x;
  real_T c1_t_x;
  real_T c1_u_x;
  real_T c1_s_y;
  real_T c1_v_x;
  real_T c1_t_y;
  real_T c1_d_z;
  real_T *c1_b_Temp;
  real_T *c1_b_Radiacion;
  real_T *c1_b_V;
  real_T *c1_b_I;
  c1_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *c1_b_V;
  c1_b_hoistedGlobal = *c1_b_Radiacion;
  c1_c_hoistedGlobal = *c1_b_Temp;
  c1_V = c1_hoistedGlobal;
  c1_Radiacion = c1_b_hoistedGlobal;
  c1_Temp = c1_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c1_debug_family_names,
    c1_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c1_q, 0U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_K, 1U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_n, 2U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_T, 3U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_Rs, 4U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Rp, 5U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_Vt, 6U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_Ns, 7U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_Vc, 8U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_Isc, 9U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Alfa, 10U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_Iph, 11U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_Voc_ref, 12U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Beta, 13U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_Voc, 14U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_Io, 15U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_Ir, 16U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_nargin, 17U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_nargout, 18U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_V, 19U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Radiacion, 20U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Temp, 21U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_I, 22U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 3);
  c1_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 5);
  c1_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
  c1_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 9);
  c1_T = 273.15 + c1_Temp;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 11);
  c1_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 13);
  c1_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 15);
  c1_b = c1_T;
  c1_y = 1.79484344E-23 * c1_b;
  c1_A = c1_y;
  c1_x = c1_A;
  c1_b_x = c1_x;
  c1_Vt = c1_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 16);
  c1_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 17);
  c1_c_x = c1_V;
  c1_d_x = c1_c_x;
  c1_Vc = c1_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 19);
  c1_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 20);
  c1_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
  c1_b_b = c1_Radiacion;
  c1_b_y = 5.433 * c1_b_b;
  c1_b_A = c1_b_y;
  c1_e_x = c1_b_A;
  c1_f_x = c1_e_x;
  c1_c_y = c1_f_x / 1000.0;
  c1_c_b = c1_Temp - 25.0;
  c1_d_y = 0.00037 * c1_c_b;
  c1_a = c1_c_y;
  c1_d_b = 1.0 + c1_d_y;
  c1_Iph = c1_a * c1_d_b;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 24);
  c1_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 25);
  c1_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 26);
  c1_e_b = c1_Temp - 25.0;
  c1_e_y = -0.0034000000000000002 * c1_e_b;
  c1_f_b = 1.0 + c1_e_y;
  c1_Voc = 0.6166666666666667 * c1_f_b;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 32);
  c1_c_A = c1_Voc;
  c1_B = c1_Vt;
  c1_g_x = c1_c_A;
  c1_f_y = c1_B;
  c1_h_x = c1_g_x;
  c1_g_y = c1_f_y;
  c1_h_y = c1_h_x / c1_g_y;
  c1_i_x = c1_h_y;
  c1_j_x = c1_i_x;
  c1_j_x = muDoubleScalarExp(c1_j_x);
  c1_b_B = c1_j_x - 1.0;
  c1_i_y = c1_b_B;
  c1_j_y = c1_i_y;
  c1_Io = 5.433 / c1_j_y;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 33);
  c1_Ir = c1_Io;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 36);
  c1_I = 0.0;
  c1_i = 0;
  while (c1_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 38);
    c1_k_x = c1_Vc + c1_I * c1_Rs;
    c1_k_y = c1_Vt;
    c1_l_x = c1_k_x;
    c1_l_y = c1_k_y;
    c1_z = c1_l_x / c1_l_y;
    c1_m_x = c1_z;
    c1_n_x = c1_m_x;
    c1_n_x = muDoubleScalarExp(c1_n_x);
    c1_d_A = c1_Vc + c1_I * c1_Rs;
    c1_o_x = c1_d_A;
    c1_p_x = c1_o_x;
    c1_m_y = c1_p_x / 100.0;
    c1_n_y = c1_Vt;
    c1_o_y = c1_n_y;
    c1_b_z = 0.015 / c1_o_y;
    c1_b_a = c1_Ir;
    c1_g_b = c1_b_z;
    c1_p_y = c1_b_a * c1_g_b;
    c1_q_x = c1_Vc + c1_I * c1_Rs;
    c1_q_y = c1_Vt;
    c1_r_x = c1_q_x;
    c1_r_y = c1_q_y;
    c1_c_z = c1_r_x / c1_r_y;
    c1_s_x = c1_c_z;
    c1_t_x = c1_s_x;
    c1_t_x = muDoubleScalarExp(c1_t_x);
    c1_u_x = ((c1_Iph - c1_I) - c1_Ir * (c1_n_x - 1.0)) + c1_m_y;
    c1_s_y = (-1.0 - c1_p_y * c1_t_x) - 0.00015;
    c1_v_x = c1_u_x;
    c1_t_y = c1_s_y;
    c1_d_z = c1_v_x / c1_t_y;
    c1_I -= c1_d_z;
    c1_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c1_b_I = c1_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void initSimStructsc1_ArregloSeisPorSeis
  (SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static real_T c1_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_I, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_I), &c1_thisId);
  sf_mex_destroy(&c1_I);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_I;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c1_I = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_I), &c1_thisId);
  sf_mex_destroy(&c1_I);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray *sf_c1_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo;
  c1_ResolvedFunctionInfo c1_info[7];
  c1_ResolvedFunctionInfo (*c1_b_info)[7];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i0;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  c1_b_info = (c1_ResolvedFunctionInfo (*)[7])c1_info;
  (*c1_b_info)[0].context = "";
  (*c1_b_info)[0].name = "mtimes";
  (*c1_b_info)[0].dominantType = "double";
  (*c1_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[0].fileTimeLo = 1289530492U;
  (*c1_b_info)[0].fileTimeHi = 0U;
  (*c1_b_info)[0].mFileTimeLo = 0U;
  (*c1_b_info)[0].mFileTimeHi = 0U;
  (*c1_b_info)[1].context = "";
  (*c1_b_info)[1].name = "mrdivide";
  (*c1_b_info)[1].dominantType = "double";
  (*c1_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c1_b_info)[1].fileTimeLo = 1325134938U;
  (*c1_b_info)[1].fileTimeHi = 0U;
  (*c1_b_info)[1].mFileTimeLo = 1319744366U;
  (*c1_b_info)[1].mFileTimeHi = 0U;
  (*c1_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c1_b_info)[2].name = "rdivide";
  (*c1_b_info)[2].dominantType = "double";
  (*c1_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c1_b_info)[2].fileTimeLo = 1286836844U;
  (*c1_b_info)[2].fileTimeHi = 0U;
  (*c1_b_info)[2].mFileTimeLo = 0U;
  (*c1_b_info)[2].mFileTimeHi = 0U;
  (*c1_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c1_b_info)[3].name = "eml_div";
  (*c1_b_info)[3].dominantType = "double";
  (*c1_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c1_b_info)[3].fileTimeLo = 1313365810U;
  (*c1_b_info)[3].fileTimeHi = 0U;
  (*c1_b_info)[3].mFileTimeLo = 0U;
  (*c1_b_info)[3].mFileTimeHi = 0U;
  (*c1_b_info)[4].context = "";
  (*c1_b_info)[4].name = "rdivide";
  (*c1_b_info)[4].dominantType = "double";
  (*c1_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c1_b_info)[4].fileTimeLo = 1286836844U;
  (*c1_b_info)[4].fileTimeHi = 0U;
  (*c1_b_info)[4].mFileTimeLo = 0U;
  (*c1_b_info)[4].mFileTimeHi = 0U;
  (*c1_b_info)[5].context = "";
  (*c1_b_info)[5].name = "exp";
  (*c1_b_info)[5].dominantType = "double";
  (*c1_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c1_b_info)[5].fileTimeLo = 1286836740U;
  (*c1_b_info)[5].fileTimeHi = 0U;
  (*c1_b_info)[5].mFileTimeLo = 0U;
  (*c1_b_info)[5].mFileTimeHi = 0U;
  (*c1_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c1_b_info)[6].name = "eml_scalar_exp";
  (*c1_b_info)[6].dominantType = "double";
  (*c1_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c1_b_info)[6].fileTimeLo = 1301346464U;
  (*c1_b_info)[6].fileTimeHi = 0U;
  (*c1_b_info)[6].mFileTimeLo = 0U;
  (*c1_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c1_i0 = 0; c1_i0 < 7; c1_i0++) {
    c1_r0 = &c1_info[c1_i0];
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->context)), "context", "nameCaptureInfo",
                    c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c1_r0->name)), "name", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved", "nameCaptureInfo",
                    c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c1_i0);
  }

  sf_mex_assign(&c1_nameCaptureInfo, c1_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static int32_T c1_c_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i1;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i1, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint8_T c1_d_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_ArregloSeisPorSeis, const
  char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_ArregloSeisPorSeis), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_ArregloSeisPorSeis);
  return c1_y;
}

static uint8_T c1_e_emlrt_marshallIn(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void init_dsm_address_info(SFc1_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c1_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c1_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c1_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           1,
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
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c1_V;
          real_T *c1_I;
          real_T *c1_Radiacion;
          real_T *c1_Temp;
          c1_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c1_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c1_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_Temp);
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

static void sf_opaque_initialize_c1_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
  initialize_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c1_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_ArregloSeisPorSeis
    ((SFc1_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c1_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c1_ArregloSeisPorSeis(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c1_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c1_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c1_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_ArregloSeisPorSeis((SFc1_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_ArregloSeisPorSeis
      ((SFc1_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
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

static void mdlRTW_c1_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_ArregloSeisPorSeis(SimStruct *S)
{
  SFc1_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc1_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc1_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_ArregloSeisPorSeis;
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

void c1_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
