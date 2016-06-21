/* Include files */

#include "blascompat32.h"
#include "ArregloSeisPorSeis_sfun.h"
#include "c28_ArregloSeisPorSeis.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ArregloSeisPorSeis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c28_debug_family_names[23] = { "q", "K", "n", "T", "Rs",
  "Rp", "Vt", "Ns", "Vc", "Isc", "Alfa", "Iph", "Voc_ref", "Beta", "Voc", "Io",
  "Ir", "nargin", "nargout", "V", "Radiacion", "Temp", "I" };

/* Function Declarations */
static void initialize_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initialize_params_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void enable_c28_ArregloSeisPorSeis(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void disable_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void c28_update_debugger_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void set_sim_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c28_st);
static void finalize_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void sf_c28_ArregloSeisPorSeis(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance);
static void c28_chartstep_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void initSimStructsc28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c28_machineNumber, uint32_T
  c28_chartNumber);
static const mxArray *c28_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static real_T c28_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_I, const char_T *c28_identifier);
static real_T c28_b_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void c28_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData);
static const mxArray *c28_b_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static int32_T c28_c_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void c28_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData);
static uint8_T c28_d_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_b_is_active_c28_ArregloSeisPorSeis, const
  char_T *c28_identifier);
static uint8_T c28_e_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void init_dsm_address_info(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  chartInstance->c28_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c28_is_active_c28_ArregloSeisPorSeis = 0U;
}

static void initialize_params_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void enable_c28_ArregloSeisPorSeis(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c28_update_debugger_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  const mxArray *c28_st;
  const mxArray *c28_y = NULL;
  real_T c28_hoistedGlobal;
  real_T c28_u;
  const mxArray *c28_b_y = NULL;
  uint8_T c28_b_hoistedGlobal;
  uint8_T c28_b_u;
  const mxArray *c28_c_y = NULL;
  real_T *c28_I;
  c28_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c28_st = NULL;
  c28_st = NULL;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_createcellarray(2), FALSE);
  c28_hoistedGlobal = *c28_I;
  c28_u = c28_hoistedGlobal;
  c28_b_y = NULL;
  sf_mex_assign(&c28_b_y, sf_mex_create("y", &c28_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c28_y, 0, c28_b_y);
  c28_b_hoistedGlobal = chartInstance->c28_is_active_c28_ArregloSeisPorSeis;
  c28_b_u = c28_b_hoistedGlobal;
  c28_c_y = NULL;
  sf_mex_assign(&c28_c_y, sf_mex_create("y", &c28_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c28_y, 1, c28_c_y);
  sf_mex_assign(&c28_st, c28_y, FALSE);
  return c28_st;
}

static void set_sim_state_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance, const mxArray *c28_st)
{
  const mxArray *c28_u;
  real_T *c28_I;
  c28_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c28_doneDoubleBufferReInit = TRUE;
  c28_u = sf_mex_dup(c28_st);
  *c28_I = c28_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c28_u,
    0)), "I");
  chartInstance->c28_is_active_c28_ArregloSeisPorSeis = c28_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c28_u, 1)),
     "is_active_c28_ArregloSeisPorSeis");
  sf_mex_destroy(&c28_u);
  c28_update_debugger_state_c28_ArregloSeisPorSeis(chartInstance);
  sf_mex_destroy(&c28_st);
}

static void finalize_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void sf_c28_ArregloSeisPorSeis(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
  real_T *c28_V;
  real_T *c28_I;
  real_T *c28_Radiacion;
  real_T *c28_Temp;
  c28_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c28_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c28_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c28_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c28_V, 0U);
  _SFD_DATA_RANGE_CHECK(*c28_I, 1U);
  _SFD_DATA_RANGE_CHECK(*c28_Radiacion, 2U);
  _SFD_DATA_RANGE_CHECK(*c28_Temp, 3U);
  chartInstance->c28_sfEvent = CALL_EVENT;
  c28_chartstep_c28_ArregloSeisPorSeis(chartInstance);
  sf_debug_check_for_state_inconsistency(_ArregloSeisPorSeisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c28_chartstep_c28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
  real_T c28_hoistedGlobal;
  real_T c28_b_hoistedGlobal;
  real_T c28_c_hoistedGlobal;
  real_T c28_V;
  real_T c28_Radiacion;
  real_T c28_Temp;
  uint32_T c28_debug_family_var_map[23];
  real_T c28_q;
  real_T c28_K;
  real_T c28_n;
  real_T c28_T;
  real_T c28_Rs;
  real_T c28_Rp;
  real_T c28_Vt;
  real_T c28_Ns;
  real_T c28_Vc;
  real_T c28_Isc;
  real_T c28_Alfa;
  real_T c28_Iph;
  real_T c28_Voc_ref;
  real_T c28_Beta;
  real_T c28_Voc;
  real_T c28_Io;
  real_T c28_Ir;
  real_T c28_nargin = 3.0;
  real_T c28_nargout = 1.0;
  real_T c28_I;
  real_T c28_b;
  real_T c28_y;
  real_T c28_A;
  real_T c28_x;
  real_T c28_b_x;
  real_T c28_c_x;
  real_T c28_d_x;
  real_T c28_b_b;
  real_T c28_b_y;
  real_T c28_b_A;
  real_T c28_e_x;
  real_T c28_f_x;
  real_T c28_c_y;
  real_T c28_c_b;
  real_T c28_d_y;
  real_T c28_a;
  real_T c28_d_b;
  real_T c28_e_b;
  real_T c28_e_y;
  real_T c28_f_b;
  real_T c28_c_A;
  real_T c28_B;
  real_T c28_g_x;
  real_T c28_f_y;
  real_T c28_h_x;
  real_T c28_g_y;
  real_T c28_h_y;
  real_T c28_i_x;
  real_T c28_j_x;
  real_T c28_b_B;
  real_T c28_i_y;
  real_T c28_j_y;
  int32_T c28_i;
  real_T c28_k_x;
  real_T c28_k_y;
  real_T c28_l_x;
  real_T c28_l_y;
  real_T c28_z;
  real_T c28_m_x;
  real_T c28_n_x;
  real_T c28_d_A;
  real_T c28_o_x;
  real_T c28_p_x;
  real_T c28_m_y;
  real_T c28_n_y;
  real_T c28_o_y;
  real_T c28_b_z;
  real_T c28_b_a;
  real_T c28_g_b;
  real_T c28_p_y;
  real_T c28_q_x;
  real_T c28_q_y;
  real_T c28_r_x;
  real_T c28_r_y;
  real_T c28_c_z;
  real_T c28_s_x;
  real_T c28_t_x;
  real_T c28_u_x;
  real_T c28_s_y;
  real_T c28_v_x;
  real_T c28_t_y;
  real_T c28_d_z;
  real_T *c28_b_Temp;
  real_T *c28_b_Radiacion;
  real_T *c28_b_V;
  real_T *c28_b_I;
  c28_b_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c28_b_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c28_b_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c28_b_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
  c28_hoistedGlobal = *c28_b_V;
  c28_b_hoistedGlobal = *c28_b_Radiacion;
  c28_c_hoistedGlobal = *c28_b_Temp;
  c28_V = c28_hoistedGlobal;
  c28_Radiacion = c28_b_hoistedGlobal;
  c28_Temp = c28_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 23U, 23U, c28_debug_family_names,
    c28_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c28_q, 0U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_K, 1U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_n, 2U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_T, 3U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c28_Rs, 4U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_Rp, 5U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_Vt, 6U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c28_Ns, 7U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_Vc, 8U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c28_Isc, 9U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_Alfa, 10U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_Iph, 11U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c28_Voc_ref, 12U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_Beta, 13U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_Voc, 14U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c28_Io, 15U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c28_Ir, 16U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c28_nargin, 17U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c28_nargout, 18U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c28_V, 19U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_Radiacion, 20U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c28_Temp, 21U, c28_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c28_I, 22U, c28_sf_marshallOut,
    c28_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 3);
  c28_q = 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 5);
  c28_K = 1.3806488E-23;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 7);
  c28_n = 1.3;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 9);
  c28_T = 273.15 + c28_Temp;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 11);
  c28_Rs = 0.015;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 13);
  c28_Rp = 100.0;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 15);
  c28_b = c28_T;
  c28_y = 1.79484344E-23 * c28_b;
  c28_A = c28_y;
  c28_x = c28_A;
  c28_b_x = c28_x;
  c28_Vt = c28_b_x / 1.602176E-19;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 16);
  c28_Ns = 36.0;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 17);
  c28_c_x = c28_V;
  c28_d_x = c28_c_x;
  c28_Vc = c28_d_x / 36.0;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 19);
  c28_Isc = 5.433;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 20);
  c28_Alfa = 0.00037;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 22);
  c28_b_b = c28_Radiacion;
  c28_b_y = 5.433 * c28_b_b;
  c28_b_A = c28_b_y;
  c28_e_x = c28_b_A;
  c28_f_x = c28_e_x;
  c28_c_y = c28_f_x / 1000.0;
  c28_c_b = c28_Temp - 25.0;
  c28_d_y = 0.00037 * c28_c_b;
  c28_a = c28_c_y;
  c28_d_b = 1.0 + c28_d_y;
  c28_Iph = c28_a * c28_d_b;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 24);
  c28_Voc_ref = 0.6166666666666667;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 25);
  c28_Beta = -0.0034000000000000002;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 26);
  c28_e_b = c28_Temp - 25.0;
  c28_e_y = -0.0034000000000000002 * c28_e_b;
  c28_f_b = 1.0 + c28_e_y;
  c28_Voc = 0.6166666666666667 * c28_f_b;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 32);
  c28_c_A = c28_Voc;
  c28_B = c28_Vt;
  c28_g_x = c28_c_A;
  c28_f_y = c28_B;
  c28_h_x = c28_g_x;
  c28_g_y = c28_f_y;
  c28_h_y = c28_h_x / c28_g_y;
  c28_i_x = c28_h_y;
  c28_j_x = c28_i_x;
  c28_j_x = muDoubleScalarExp(c28_j_x);
  c28_b_B = c28_j_x - 1.0;
  c28_i_y = c28_b_B;
  c28_j_y = c28_i_y;
  c28_Io = 5.433 / c28_j_y;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 33);
  c28_Ir = c28_Io;
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 36);
  c28_I = 0.0;
  c28_i = 0;
  while (c28_i < 50) {
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, 38);
    c28_k_x = c28_Vc + c28_I * c28_Rs;
    c28_k_y = c28_Vt;
    c28_l_x = c28_k_x;
    c28_l_y = c28_k_y;
    c28_z = c28_l_x / c28_l_y;
    c28_m_x = c28_z;
    c28_n_x = c28_m_x;
    c28_n_x = muDoubleScalarExp(c28_n_x);
    c28_d_A = c28_Vc + c28_I * c28_Rs;
    c28_o_x = c28_d_A;
    c28_p_x = c28_o_x;
    c28_m_y = c28_p_x / 100.0;
    c28_n_y = c28_Vt;
    c28_o_y = c28_n_y;
    c28_b_z = 0.015 / c28_o_y;
    c28_b_a = c28_Ir;
    c28_g_b = c28_b_z;
    c28_p_y = c28_b_a * c28_g_b;
    c28_q_x = c28_Vc + c28_I * c28_Rs;
    c28_q_y = c28_Vt;
    c28_r_x = c28_q_x;
    c28_r_y = c28_q_y;
    c28_c_z = c28_r_x / c28_r_y;
    c28_s_x = c28_c_z;
    c28_t_x = c28_s_x;
    c28_t_x = muDoubleScalarExp(c28_t_x);
    c28_u_x = ((c28_Iph - c28_I) - c28_Ir * (c28_n_x - 1.0)) + c28_m_y;
    c28_s_y = (-1.0 - c28_p_y * c28_t_x) - 0.00015;
    c28_v_x = c28_u_x;
    c28_t_y = c28_s_y;
    c28_d_z = c28_v_x / c28_t_y;
    c28_I -= c28_d_z;
    c28_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c28_sfEvent, -38);
  sf_debug_symbol_scope_pop();
  *c28_b_I = c28_I;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
}

static void initSimStructsc28_ArregloSeisPorSeis
  (SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c28_machineNumber, uint32_T
  c28_chartNumber)
{
}

static const mxArray *c28_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  real_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(real_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c28_mxArrayOutData, c28_y, FALSE);
  return c28_mxArrayOutData;
}

static real_T c28_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_I, const char_T *c28_identifier)
{
  real_T c28_y;
  emlrtMsgIdentifier c28_thisId;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_I), &c28_thisId);
  sf_mex_destroy(&c28_I);
  return c28_y;
}

static real_T c28_b_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  real_T c28_y;
  real_T c28_d0;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_d0, 1, 0, 0U, 0, 0U, 0);
  c28_y = c28_d0;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void c28_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData)
{
  const mxArray *c28_I;
  const char_T *c28_identifier;
  emlrtMsgIdentifier c28_thisId;
  real_T c28_y;
  SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c28_I = sf_mex_dup(c28_mxArrayInData);
  c28_identifier = c28_varName;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_I), &c28_thisId);
  sf_mex_destroy(&c28_I);
  *(real_T *)c28_outData = c28_y;
  sf_mex_destroy(&c28_mxArrayInData);
}

const mxArray *sf_c28_ArregloSeisPorSeis_get_eml_resolved_functions_info(void)
{
  const mxArray *c28_nameCaptureInfo;
  c28_ResolvedFunctionInfo c28_info[7];
  c28_ResolvedFunctionInfo (*c28_b_info)[7];
  const mxArray *c28_m0 = NULL;
  int32_T c28_i0;
  c28_ResolvedFunctionInfo *c28_r0;
  c28_nameCaptureInfo = NULL;
  c28_nameCaptureInfo = NULL;
  c28_b_info = (c28_ResolvedFunctionInfo (*)[7])c28_info;
  (*c28_b_info)[0].context = "";
  (*c28_b_info)[0].name = "mtimes";
  (*c28_b_info)[0].dominantType = "double";
  (*c28_b_info)[0].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c28_b_info)[0].fileTimeLo = 1289534092U;
  (*c28_b_info)[0].fileTimeHi = 0U;
  (*c28_b_info)[0].mFileTimeLo = 0U;
  (*c28_b_info)[0].mFileTimeHi = 0U;
  (*c28_b_info)[1].context = "";
  (*c28_b_info)[1].name = "mrdivide";
  (*c28_b_info)[1].dominantType = "double";
  (*c28_b_info)[1].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c28_b_info)[1].fileTimeLo = 1325138538U;
  (*c28_b_info)[1].fileTimeHi = 0U;
  (*c28_b_info)[1].mFileTimeLo = 1319747966U;
  (*c28_b_info)[1].mFileTimeHi = 0U;
  (*c28_b_info)[2].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c28_b_info)[2].name = "rdivide";
  (*c28_b_info)[2].dominantType = "double";
  (*c28_b_info)[2].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c28_b_info)[2].fileTimeLo = 1286836844U;
  (*c28_b_info)[2].fileTimeHi = 0U;
  (*c28_b_info)[2].mFileTimeLo = 0U;
  (*c28_b_info)[2].mFileTimeHi = 0U;
  (*c28_b_info)[3].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c28_b_info)[3].name = "eml_div";
  (*c28_b_info)[3].dominantType = "double";
  (*c28_b_info)[3].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c28_b_info)[3].fileTimeLo = 1313365810U;
  (*c28_b_info)[3].fileTimeHi = 0U;
  (*c28_b_info)[3].mFileTimeLo = 0U;
  (*c28_b_info)[3].mFileTimeHi = 0U;
  (*c28_b_info)[4].context = "";
  (*c28_b_info)[4].name = "rdivide";
  (*c28_b_info)[4].dominantType = "double";
  (*c28_b_info)[4].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c28_b_info)[4].fileTimeLo = 1286836844U;
  (*c28_b_info)[4].fileTimeHi = 0U;
  (*c28_b_info)[4].mFileTimeLo = 0U;
  (*c28_b_info)[4].mFileTimeHi = 0U;
  (*c28_b_info)[5].context = "";
  (*c28_b_info)[5].name = "exp";
  (*c28_b_info)[5].dominantType = "double";
  (*c28_b_info)[5].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c28_b_info)[5].fileTimeLo = 1286836740U;
  (*c28_b_info)[5].fileTimeHi = 0U;
  (*c28_b_info)[5].mFileTimeLo = 0U;
  (*c28_b_info)[5].mFileTimeHi = 0U;
  (*c28_b_info)[6].context =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/exp.m";
  (*c28_b_info)[6].name = "eml_scalar_exp";
  (*c28_b_info)[6].dominantType = "double";
  (*c28_b_info)[6].resolved =
    "[ILXE]C:/Program Files/MATLAB/R2012a/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  (*c28_b_info)[6].fileTimeLo = 1301346464U;
  (*c28_b_info)[6].fileTimeHi = 0U;
  (*c28_b_info)[6].mFileTimeLo = 0U;
  (*c28_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c28_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c28_i0 = 0; c28_i0 < 7; c28_i0++) {
    c28_r0 = &c28_info[c28_i0];
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo", c28_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c28_r0->context)), "context", "nameCaptureInfo",
                    c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo", c28_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c28_r0->name)), "name", "nameCaptureInfo", c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo",
      c28_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c28_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo", c28_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c28_r0->resolved)), "resolved",
                    "nameCaptureInfo", c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo", &c28_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo", &c28_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo",
      &c28_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c28_i0);
    sf_mex_addfield(c28_m0, sf_mex_create("nameCaptureInfo",
      &c28_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c28_i0);
  }

  sf_mex_assign(&c28_nameCaptureInfo, c28_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c28_nameCaptureInfo);
  return c28_nameCaptureInfo;
}

static const mxArray *c28_b_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  int32_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(int32_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c28_mxArrayOutData, c28_y, FALSE);
  return c28_mxArrayOutData;
}

static int32_T c28_c_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  int32_T c28_y;
  int32_T c28_i1;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_i1, 1, 6, 0U, 0, 0U, 0);
  c28_y = c28_i1;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void c28_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData)
{
  const mxArray *c28_b_sfEvent;
  const char_T *c28_identifier;
  emlrtMsgIdentifier c28_thisId;
  int32_T c28_y;
  SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *)chartInstanceVoid;
  c28_b_sfEvent = sf_mex_dup(c28_mxArrayInData);
  c28_identifier = c28_varName;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_b_sfEvent),
    &c28_thisId);
  sf_mex_destroy(&c28_b_sfEvent);
  *(int32_T *)c28_outData = c28_y;
  sf_mex_destroy(&c28_mxArrayInData);
}

static uint8_T c28_d_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_b_is_active_c28_ArregloSeisPorSeis, const
  char_T *c28_identifier)
{
  uint8_T c28_y;
  emlrtMsgIdentifier c28_thisId;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c28_b_is_active_c28_ArregloSeisPorSeis), &c28_thisId);
  sf_mex_destroy(&c28_b_is_active_c28_ArregloSeisPorSeis);
  return c28_y;
}

static uint8_T c28_e_emlrt_marshallIn(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  uint8_T c28_y;
  uint8_T c28_u0;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_u0, 1, 3, 0U, 0, 0U, 0);
  c28_y = c28_u0;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void init_dsm_address_info(SFc28_ArregloSeisPorSeisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c28_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211573748U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2917703608U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3482198211U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3726947223U);
}

mxArray *sf_c28_ArregloSeisPorSeis_get_autoinheritance_info(void)
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

static const mxArray *sf_get_sim_state_info_c28_ArregloSeisPorSeis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"I\",},{M[8],M[0],T\"is_active_c28_ArregloSeisPorSeis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c28_ArregloSeisPorSeis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
    chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ArregloSeisPorSeisMachineNumber_,
           28,
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
          (MexFcnForType)c28_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_sf_marshallOut,(MexInFcnForType)c28_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c28_V;
          real_T *c28_I;
          real_T *c28_Radiacion;
          real_T *c28_Temp;
          c28_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c28_Radiacion = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c28_I = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c28_V = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c28_V);
          _SFD_SET_DATA_VALUE_PTR(1U, c28_I);
          _SFD_SET_DATA_VALUE_PTR(2U, c28_Radiacion);
          _SFD_SET_DATA_VALUE_PTR(3U, c28_Temp);
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

static void sf_opaque_initialize_c28_ArregloSeisPorSeis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c28_ArregloSeisPorSeis
    ((SFc28_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar);
  initialize_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c28_ArregloSeisPorSeis(void *chartInstanceVar)
{
  enable_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c28_ArregloSeisPorSeis(void *chartInstanceVar)
{
  disable_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c28_ArregloSeisPorSeis(void *chartInstanceVar)
{
  sf_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c28_ArregloSeisPorSeis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c28_ArregloSeisPorSeis
    ((SFc28_ArregloSeisPorSeisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c28_ArregloSeisPorSeis();/* state var info */
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

extern void sf_internal_set_sim_state_c28_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c28_ArregloSeisPorSeis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c28_ArregloSeisPorSeis(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c28_ArregloSeisPorSeis(S);
}

static void sf_opaque_set_sim_state_c28_ArregloSeisPorSeis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c28_ArregloSeisPorSeis(S, st);
}

static void sf_opaque_terminate_c28_ArregloSeisPorSeis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc28_ArregloSeisPorSeisInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ArregloSeisPorSeis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc28_ArregloSeisPorSeis((SFc28_ArregloSeisPorSeisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c28_ArregloSeisPorSeis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c28_ArregloSeisPorSeis
      ((SFc28_ArregloSeisPorSeisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c28_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ArregloSeisPorSeis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      28);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,28,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,28,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,28,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,28,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,28);
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

static void mdlRTW_c28_ArregloSeisPorSeis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c28_ArregloSeisPorSeis(SimStruct *S)
{
  SFc28_ArregloSeisPorSeisInstanceStruct *chartInstance;
  chartInstance = (SFc28_ArregloSeisPorSeisInstanceStruct *)malloc(sizeof
    (SFc28_ArregloSeisPorSeisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc28_ArregloSeisPorSeisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlStart = mdlStart_c28_ArregloSeisPorSeis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c28_ArregloSeisPorSeis;
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

void c28_ArregloSeisPorSeis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c28_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c28_ArregloSeisPorSeis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c28_ArregloSeisPorSeis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c28_ArregloSeisPorSeis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
