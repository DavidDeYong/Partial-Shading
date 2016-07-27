/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c29_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c29_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c29_ArregloSeisPorSeis(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void c29_update_debugger_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c29_st);
static void finalize_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void sf_c29_ArregloSeisPorSeis(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c29_chartstep_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber);
static const mxArray *c29_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData);
static real_T c29_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_I, const char_T *c29_identifier);
static real_T c29_b_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void c29_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData);
static const mxArray *c29_b_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData);
static int32_T c29_c_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void c29_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData);
static uint8_T c29_d_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_b_is_active_c29_ArregloSeisPorSeis, const
  char_T *c29_identifier);
static uint8_T c29_e_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void init_dsm_address_info(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c29_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c29_is_active_c29_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c29_ArregloSeisPorSeis(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c29_update_debugger_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c29_st;
  const mxArray *c29_y = NULL;
  real_T c29_hoistedGlobal;
  real_T c29_u;
  const mxArray *c29_b_y = NULL;
  uint8_T c29_b_hoistedGlobal;
  uint8_T c29_b_u;
  const mxArray *c29_c_y = NULL;
  real_T *c29_I;
  c29_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_st = NULL;
  c29_st = NULL;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_createcellarray(2), FALSE);
  c29_hoistedGlobal = *c29_I;
  c29_u = c29_hoistedGlobal;
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c29_y, 0, c29_b_y);
  c29_b_hoistedGlobal = chartInstance->c29_is_active_c29_ArregloSeisPorSeis;
  c29_b_u = c29_b_hoistedGlobal;
  c29_c_y = NULL;
  sf_mex_assign(&c29_c_y, sf_mex_create("y", &c29_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c29_y, 1, c29_c_y);
  sf_mex_assign(&c29_st, c29_y, FALSE);
  return c29_st;
}

static void set_sim_state_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c29_st)
{
  const mxArray *c29_u;
  real_T *c29_I;
  c29_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c29_doneDoubleBufferReInit = TRUE;
  c29_u = sf_mex_dup(c29_st);
  *c29_I = c29_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c29_u,
    0)), "I");
  chartInstance->c29_is_active_c29_ArregloSeisPorSeis = c29_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c29_u, 1)),
     "is_active_c29_ArregloSeisPorSeis");
  sf_mex_destroy(&c29_u);
  c29_update_debugger_state_c29_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c29_st);
}

static void finalize_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void sf_c29_ArregloSeisPorSeis(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c29_V;
  real_T *c29_I;
  real_T *c29_Radiacion;
  real_T *c29_Temp;
  c29_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c29_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c29_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c29_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c29_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c29_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c29_Temp, 3U);
  chartInstance->c29_sfEvent = CALL_EVENT;
  c29_chartstep_c29_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c29_chartstep_c29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c29_hoistedGlobal;
  real_T c29_b_hoistedGlobal;
  real_T c29_c_hoistedGlobal;
  real_T c29_V;
  real_T c29_Radiacion;
  real_T c29_Temp;
  uint32_T c29_debug_family_var_map[23];
  real_T c29_q;
  real_T c29_K;
  real_T c29_n;
  real_T c29_T;
  real_T c29_Rs;
  real_T c29_Rp;
  real_T c29_Vt;
  real_T c29_Ns;
  real_T c29_Vc;
  real_T c29_Isc;
  real_T c29_Alfa;
  real_T c29_Iph;
  real_T c29_Voc_ref;
  real_T c29_Beta;
  real_T c29_Voc;
  real_T c29_Io;
  real_T c29_Ir;
  real_T c29_nargin = 3.0;
  real_T c29_nargout = 1.0;
  real_T c29_I;
  real_T c29_b;
  real_T c29_y;
  real_T c29_A;
  real_T c29_x;
  real_T c29_b_x;
  real_T c29_c_x;
  real_T c29_d_x;
  real_T c29_b_b;
  real_T c29_b_y;
  real_T c29_b_A;
  real_T c29_e_x;
  real_T c29_f_x;
  real_T c29_c_y;
  real_T c29_c_b;
  real_T c29_d_y;
  real_T c29_a;
  real_T c29_d_b;
  real_T c29_e_b;
  real_T c29_e_y;
  real_T c29_f_b;
  real_T c29_c_A;
  real_T c29_B;
  real_T c29_g_x;
  real_T c29_f_y;
  real_T c29_h_x;
  real_T c29_g_y;
  real_T c29_h_y;
  real_T c29_i_x;
  real_T c29_j_x;
  real_T c29_b_B;
  real_T c29_i_y;
  real_T c29_j_y;
  int32_T c29_i;
  real_T c29_k_x;
  real_T c29_k_y;
  real_T c29_l_x;
  real_T c29_l_y;
  real_T c29_z;
  real_T c29_m_x;
  real_T c29_n_x;
  real_T c29_d_A;
  real_T c29_o_x;
  real_T c29_p_x;
  real_T c29_m_y;
  real_T c29_n_y;
  real_T c29_o_y;
  real_T c29_b_z;
  real_T c29_b_a;
  real_T c29_g_b;
  real_T c29_p_y;
  real_T c29_q_x;
  real_T c29_q_y;
  real_T c29_r_x;
  real_T c29_r_y;
  real_T c29_c_z;
  real_T c29_s_x;
  real_T c29_t_x;
  real_T c29_u_x;
  real_T c29_s_y;
  real_T c29_v_x;
  real_T c29_t_y;
  real_T c29_d_z;
  real_T *c29_b_Temp;
  real_T *c29_b_Radiacion;
  real_T *c29_b_V;
  real_T *c29_b_I;
  c29_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c29_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c29_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
  c29_hoistedGlobal = *c29_b_V;
  c29_b_hoistedGlobal = *c29_b_Radiacion;
  c29_c_hoistedGlobal = *c29_b_Temp;
  c29_V = c29_hoistedGlobal;
  c29_Radiacion = c29_b_hoistedGlobal;
  c29_Temp = c29_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c29_debug_family_names,
    c29_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c29_q, 0U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_K, 1U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_n, 2U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_T, 3U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c29_Rs, 4U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_Rp, 5U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_Vt, 6U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c29_Ns, 7U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_Vc, 8U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c29_Isc, 9U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_Alfa, 10U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_Iph, 11U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c29_Voc_ref, 12U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_Beta, 13U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_Voc, 14U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c29_Io, 15U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c29_Ir, 16U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c29_nargin, 17U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c29_nargout, 18U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c29_V, 19U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_Radiacion, 20U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c29_Temp, 21U, c29_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c29_I, 22U, c29_sf_marshallOut,
    c29_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 3);
  c29_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 5);
  c29_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 7);
  c29_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 9);
  c29_T = 273.15 + c29_Temp;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 11);
  c29_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 13);
  c29_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 15);
  c29_b = c29_T;
  c29_y = 1.79484344E-23 * c29_b;
  c29_A = c29_y;
  c29_x = c29_A;
  c29_b_x = c29_x;
  c29_Vt = c29_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 16);
  c29_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 17);
  c29_c_x = c29_V;
  c29_d_x = c29_c_x;
  c29_Vc = c29_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 19);
  c29_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 20);
  c29_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 22);
  c29_b_b = c29_Radiacion;
  c29_b_y = 5.433 * c29_b_b;
  c29_b_A = c29_b_y;
  c29_e_x = c29_b_A;
  c29_f_x = c29_e_x;
  c29_c_y = c29_f_x / 1000.0;
  c29_c_b = c29_Temp - 25.0;
  c29_d_y = 0.00037 * c29_c_b;
  c29_a = c29_c_y;
  c29_d_b = 1.0 + c29_d_y;
  c29_Iph = c29_a * c29_d_b;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 24);
  c29_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 25);
  c29_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 26);
  c29_e_b = c29_Temp - 25.0;
  c29_e_y = -0.0034000000000000002 * c29_e_b;
  c29_f_b = 1.0 + c29_e_y;
  c29_Voc = 0.6166666666666667 * c29_f_b;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 32);
  c29_c_A = c29_Voc;
  c29_B = c29_Vt;
  c29_g_x = c29_c_A;
  c29_f_y = c29_B;
  c29_h_x = c29_g_x;
  c29_g_y = c29_f_y;
  c29_h_y = c29_h_x / c29_g_y;
  c29_i_x = c29_h_y;
  c29_j_x = c29_i_x;
  c29_j_x = muDoubleScalarExp(c29_j_x);
  c29_b_B = c29_j_x - 1.0;
  c29_i_y = c29_b_B;
  c29_j_y = c29_i_y;
  c29_Io = 5.433 / c29_j_y;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 33);
  c29_Ir = c29_Io;
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 36);
  c29_I = 0.0;
  c29_i = 0;
  while (c29_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, 38);
    c29_k_x = c29_Vc + c29_I * c29_Rs;
    c29_k_y = c29_Vt;
    c29_l_x = c29_k_x;
    c29_l_y = c29_k_y;
    c29_z = c29_l_x / c29_l_y;
    c29_m_x = c29_z;
    c29_n_x = c29_m_x;
    c29_n_x = muDoubleScalarExp(c29_n_x);
    c29_d_A = c29_Vc + c29_I * c29_Rs;
    c29_o_x = c29_d_A;
    c29_p_x = c29_o_x;
    c29_m_y = c29_p_x / 100.0;
    c29_n_y = c29_Vt;
    c29_o_y = c29_n_y;
    c29_b_z = 0.015 / c29_o_y;
    c29_b_a = c29_Ir;
    c29_g_b = c29_b_z;
    c29_p_y = c29_b_a * c29_g_b;
    c29_q_x = c29_Vc + c29_I * c29_Rs;
    c29_q_y = c29_Vt;
    c29_r_x = c29_q_x;
    c29_r_y = c29_q_y;
    c29_c_z = c29_r_x / c29_r_y;
    c29_s_x = c29_c_z;
    c29_t_x = c29_s_x;
    c29_t_x = muDoubleScalarExp(c29_t_x);
    c29_u_x = ((c29_Iph - c29_I) - c29_Ir * (c29_n_x - 1.0)) + c29_m_y;
    c29_s_y = (-1.0 - c29_p_y * c29_t_x) - 0.00015;
    c29_v_x = c29_u_x;
    c29_t_y = c29_s_y;
    c29_d_z = c29_v_x / c29_t_y;
    c29_I -= c29_d_z;
    c29_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c29_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c29_b_I = c29_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
}

static void initSimStructsc29_ArregloSeisPorSeis
  (SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber)
{
}

static const mxArray *c29_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData)
{
  const mxArray *c29_mxArrayOutData = NULL;
  real_T c29_u;
  const mxArray *c29_y = NULL;
  SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c29_mxArrayOutData = NULL;
  c29_u = *(real_T *)c29_inData;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_create("y", &c29_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c29_mxArrayOutData, c29_y, FALSE);
  return c29_mxArrayOutData;
}

static real_T c29_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_I, const char_T *c29_identifier)
{
  real_T c29_y;
  emlrtMsgIdentifier c29_thisId;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_I), &c29_thisId);
  sf_mex_destroy(&c29_I);
  return c29_y;
}

static real_T c29_b_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  real_T c29_y;
  real_T c29_d0;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_d0, 1, 0, 0U, 0, 0U, 0);
  c29_y = c29_d0;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void c29_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData)
{
  const mxArray *c29_I;
  const char_T *c29_identifier;
  emlrtMsgIdentifier c29_thisId;
  real_T c29_y;
  SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c29_I = sf_mex_dup(c29_mxArrayInData);
  c29_identifier = c29_varName;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_I), &c29_thisId);
  sf_mex_destroy(&c29_I);
  *(real_T *)c29_outData = c29_y;
  sf_mex_destroy(&c29_mxArrayInData);
}

const mxArray *sf_c29_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c29_nameCaptureInfo;
  c29_ResolvedFunctionInfo c29_info[7];
  c29_ResolvedFunctionInfo (*c29_b_info)[7];
  const mxArray *c29_m0 = NULL;
  int32_T c29_i0;
  c29_ResolvedFunctionInfo *c29_r0;
  c29_nameCaptureInfo = NULL;
  c29_nameCaptureInfo = NULL;
  c29_b_info = (c29_ResolvedFunctionInfo (*)[7])c29_info;
  (*c29_b_info)[0].context = "";
  (*c29_b_info)[0].name = "mtimes";
  (*c29_b_info)[0].dominantType = "double";
  (*c29_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c29_b_info)[0].fileTimeLo = 1289530492U;
  (*c29_b_info)[0].fileTimeHi = 0U;
  (*c29_b_info)[0].mFileTimeLo = 0U;
  (*c29_b_info)[0].mFileTimeHi = 0U;
  (*c29_b_info)[1].context = "";
  (*c29_b_info)[1].name = "mrdivide";
  (*c29_b_info)[1].dominantType = "double";
  (*c29_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c29_b_info)[1].fileTimeLo = 1325134938U;
  (*c29_b_info)[1].fileTimeHi = 0U;
  (*c29_b_info)[1].mFileTimeLo = 1319744366U;
  (*c29_b_info)[1].mFileTimeHi = 0U;
  (*c29_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c29_b_info)[2].name = "rdivide";
  (*c29_b_info)[2].dominantType = "double";
  (*c29_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c29_b_info)[2].fileTimeLo = 1286836844U;
  (*c29_b_info)[2].fileTimeHi = 0U;
  (*c29_b_info)[2].mFileTimeLo = 0U;
  (*c29_b_info)[2].mFileTimeHi = 0U;
  (*c29_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c29_b_info)[3].name = "eml_div";
  (*c29_b_info)[3].dominantType = "double";
  (*c29_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c29_b_info)[3].fileTimeLo = 1313365810U;
  (*c29_b_info)[3].fileTimeHi = 0U;
  (*c29_b_info)[3].mFileTimeLo = 0U;
  (*c29_b_info)[3].mFileTimeHi = 0U;
  (*c29_b_info)[4].context = "";
  (*c29_b_info)[4].name = "rdivide";
  (*c29_b_info)[4].dominantType = "double";
  (*c29_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c29_b_info)[4].fileTimeLo = 1286836844U;
  (*c29_b_info)[4].fileTimeHi = 0U;
  (*c29_b_info)[4].mFileTimeLo = 0U;
  (*c29_b_info)[4].mFileTimeHi = 0U;
  (*c29_b_info)[5].context = "";
  (*c29_b_info)[5].name = "exp";
  (*c29_b_info)[5].dominantType = "double";
  (*c29_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c29_b_info)[5].fileTimeLo = 1286836740U;
  (*c29_b_info)[5].fileTimeHi = 0U;
  (*c29_b_info)[5].mFileTimeLo = 0U;
  (*c29_b_info)[5].mFileTimeHi = 0U;
  (*c29_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c29_b_info)[6].name = "eml_scalar_exp";
  (*c29_b_info)[6].dominantType = "double";
  (*c29_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c29_b_info)[6].fileTimeLo = 1301346464U;
  (*c29_b_info)[6].fileTimeHi = 0U;
  (*c29_b_info)[6].mFileTimeLo = 0U;
  (*c29_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c29_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c29_i0 = 0; c29_i0 < 7; c29_i0++) {
    c29_r0 = &c29_info[c29_i0];
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo", c29_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c29_r0->context)), "context", "nameCaptureInfo",
                    c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo", c29_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c29_r0->name)), "name", "nameCaptureInfo", c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo",
      c29_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c29_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo", c29_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c29_r0->resolved)), "resolved",
                    "nameCaptureInfo", c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo", &c29_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo", &c29_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo",
      &c29_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c29_i0);
    sf_mex_addfield(c29_m0, sf_mex_create("nameCaptureInfo",
      &c29_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c29_i0);
  }

  sf_mex_assign(&c29_nameCaptureInfo, c29_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c29_nameCaptureInfo);
  return c29_nameCaptureInfo;
}

static const mxArray *c29_b_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData)
{
  const mxArray *c29_mxArrayOutData = NULL;
  int32_T c29_u;
  const mxArray *c29_y = NULL;
  SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c29_mxArrayOutData = NULL;
  c29_u = *(int32_T *)c29_inData;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_create("y", &c29_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c29_mxArrayOutData, c29_y, FALSE);
  return c29_mxArrayOutData;
}

static int32_T c29_c_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  int32_T c29_y;
  int32_T c29_i1;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_i1, 1, 6, 0U, 0, 0U, 0);
  c29_y = c29_i1;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void c29_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData)
{
  const mxArray *c29_b_sfEvent;
  const char_T *c29_identifier;
  emlrtMsgIdentifier c29_thisId;
  int32_T c29_y;
  SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c29_b_sfEvent = sf_mex_dup(c29_mxArrayInData);
  c29_identifier = c29_varName;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_b_sfEvent),
    &c29_thisId);
  sf_mex_destroy(&c29_b_sfEvent);
  *(int32_T *)c29_outData = c29_y;
  sf_mex_destroy(&c29_mxArrayInData);
}

static uint8_T c29_d_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_b_is_active_c29_ArregloSeisPorSeis, const
  char_T *c29_identifier)
{
  uint8_T c29_y;
  emlrtMsgIdentifier c29_thisId;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c29_b_is_active_c29_ArregloSeisPorSeis), &c29_thisId);
  sf_mex_destroy(&c29_b_is_active_c29_ArregloSeisPorSeis);
  return c29_y;
}

static uint8_T c29_e_emlrt_marshallIn(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  uint8_T c29_y;
  uint8_T c29_u0;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_u0, 1, 3, 0U, 0, 0U, 0);
  c29_y = c29_u0;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void init_dsm_address_info(SFc29_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c29_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c29_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c29_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c29_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c29_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           29,
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
          (MexFcnForType)c29_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_sf_marshallOut,(MexInFcnForType)c29_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c29_V;
          real_T *c29_I;
          real_T *c29_Radiacion;
          real_T *c29_Temp;
          c29_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c29_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c29_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c29_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c29_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c29_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c29_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c29_Temp);
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

static void sf_opaque_initialize_c29_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c29_ArregloSeisPorSeis
    ((SFc29_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar);
  initialize_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c29_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c29_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c29_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c29_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c29_ArregloSeisPorSeis
    ((SFc29_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c29_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c29_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c29_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c29_ArregloSeisPorSeis(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c29_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c29_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c29_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c29_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc29_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc29_ArregloSeisPorSeis((SFc29_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c29_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c29_ArregloSeisPorSeis
      ((SFc29_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c29_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      29);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,29,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,29,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,29,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,29,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,29);
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

static void mdlRTW_c29_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c29_ArregloSeisPorSeis(SimStruct *S)
{
  SFc29_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc29_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc29_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc29_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c29_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c29_ArregloSeisPorSeis;
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

void c29_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c29_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c29_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c29_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c29_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
