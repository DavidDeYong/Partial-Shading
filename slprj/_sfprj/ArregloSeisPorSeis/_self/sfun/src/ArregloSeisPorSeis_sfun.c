/* Include files */

#include "ArregloSeisPorSeis_sfun.h"
#include "c1_ArregloSeisPorSeis.h"
#include "c2_ArregloSeisPorSeis.h"
#include "c3_ArregloSeisPorSeis.h"
#include "c4_ArregloSeisPorSeis.h"
#include "c5_ArregloSeisPorSeis.h"
#include "c6_ArregloSeisPorSeis.h"
#include "c7_ArregloSeisPorSeis.h"
#include "c8_ArregloSeisPorSeis.h"
#include "c9_ArregloSeisPorSeis.h"
#include "c10_ArregloSeisPorSeis.h"
#include "c11_ArregloSeisPorSeis.h"
#include "c12_ArregloSeisPorSeis.h"
#include "c13_ArregloSeisPorSeis.h"
#include "c14_ArregloSeisPorSeis.h"
#include "c15_ArregloSeisPorSeis.h"
#include "c16_ArregloSeisPorSeis.h"
#include "c17_ArregloSeisPorSeis.h"
#include "c18_ArregloSeisPorSeis.h"
#include "c19_ArregloSeisPorSeis.h"
#include "c20_ArregloSeisPorSeis.h"
#include "c21_ArregloSeisPorSeis.h"
#include "c22_ArregloSeisPorSeis.h"
#include "c23_ArregloSeisPorSeis.h"
#include "c24_ArregloSeisPorSeis.h"
#include "c25_ArregloSeisPorSeis.h"
#include "c26_ArregloSeisPorSeis.h"
#include "c27_ArregloSeisPorSeis.h"
#include "c28_ArregloSeisPorSeis.h"
#include "c29_ArregloSeisPorSeis.h"
#include "c30_ArregloSeisPorSeis.h"
#include "c31_ArregloSeisPorSeis.h"
#include "c32_ArregloSeisPorSeis.h"
#include "c33_ArregloSeisPorSeis.h"
#include "c34_ArregloSeisPorSeis.h"
#include "c35_ArregloSeisPorSeis.h"
#include "c36_ArregloSeisPorSeis.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _ArregloSeisPorSeisMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void ArregloSeisPorSeis_initializer(void)
{
}

void ArregloSeisPorSeis_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_ArregloSeisPorSeis_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==25) {
    c25_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==26) {
    c26_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==27) {
    c27_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==28) {
    c28_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==29) {
    c29_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==30) {
    c30_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==31) {
    c31_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==32) {
    c32_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==33) {
    c33_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==34) {
    c34_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==35) {
    c35_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==36) {
    c36_ArregloSeisPorSeis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_ArregloSeisPorSeis_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1076339228U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2593802311U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3338684537U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2796883008U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3819103335U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2930644874U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3260974759U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4024529667U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c1_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c2_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c3_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c4_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c5_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c6_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c7_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c8_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c9_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c10_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c11_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c12_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c13_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c14_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c15_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c16_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c17_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c18_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c19_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c20_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c21_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c22_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 23:
        {
          extern void sf_c23_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c23_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c24_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 25:
        {
          extern void sf_c25_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c25_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 26:
        {
          extern void sf_c26_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c26_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 27:
        {
          extern void sf_c27_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c27_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 28:
        {
          extern void sf_c28_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c28_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 29:
        {
          extern void sf_c29_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c29_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 30:
        {
          extern void sf_c30_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c30_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 31:
        {
          extern void sf_c31_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c31_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 32:
        {
          extern void sf_c32_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c32_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 33:
        {
          extern void sf_c33_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c33_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 34:
        {
          extern void sf_c34_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c34_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 35:
        {
          extern void sf_c35_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c35_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       case 36:
        {
          extern void sf_c36_ArregloSeisPorSeis_get_check_sum(mxArray *plhs[]);
          sf_c36_ArregloSeisPorSeis_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(330275056U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4034330205U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1317585395U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3456259024U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_ArregloSeisPorSeis_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c1_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c1_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c2_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c2_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c3_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c3_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c4_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c4_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c5_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c5_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c6_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c6_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c7_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c7_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c8_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c8_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c9_ArregloSeisPorSeis_get_autoinheritance_info(void);
          plhs[0] = sf_c9_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c10_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c10_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c11_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c11_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c12_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c12_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c13_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c13_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c14_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c14_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 15:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c15_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c15_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c16_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c16_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 17:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c17_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c17_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c18_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c18_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 19:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c19_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c19_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 20:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c20_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c20_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 21:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c21_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c21_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 22:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c22_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c22_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 23:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c23_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c23_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 24:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c24_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c24_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 25:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c25_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c25_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 26:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c26_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c26_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 27:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c27_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c27_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 28:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c28_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c28_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 29:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c29_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c29_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 30:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c30_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c30_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 31:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c31_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c31_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 32:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c32_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c32_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 33:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c33_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c33_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 34:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c34_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c34_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 35:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c35_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c35_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 36:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c36_ArregloSeisPorSeis_get_autoinheritance_info
            (void);
          plhs[0] = sf_c36_ArregloSeisPorSeis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_ArregloSeisPorSeis_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray
          *sf_c12_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray
          *sf_c13_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray
          *sf_c14_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray
          *sf_c15_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray
          *sf_c16_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray
          *sf_c17_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray
          *sf_c18_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray
          *sf_c19_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 20:
      {
        extern const mxArray
          *sf_c20_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c20_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 21:
      {
        extern const mxArray
          *sf_c21_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 22:
      {
        extern const mxArray
          *sf_c22_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c22_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 23:
      {
        extern const mxArray
          *sf_c23_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c23_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 24:
      {
        extern const mxArray
          *sf_c24_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c24_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 25:
      {
        extern const mxArray
          *sf_c25_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c25_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 26:
      {
        extern const mxArray
          *sf_c26_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c26_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 27:
      {
        extern const mxArray
          *sf_c27_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c27_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 28:
      {
        extern const mxArray
          *sf_c28_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c28_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 29:
      {
        extern const mxArray
          *sf_c29_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c29_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 30:
      {
        extern const mxArray
          *sf_c30_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c30_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 31:
      {
        extern const mxArray
          *sf_c31_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c31_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 32:
      {
        extern const mxArray
          *sf_c32_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c32_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 33:
      {
        extern const mxArray
          *sf_c33_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c33_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 34:
      {
        extern const mxArray
          *sf_c34_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c34_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 35:
      {
        extern const mxArray
          *sf_c35_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c35_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 36:
      {
        extern const mxArray
          *sf_c36_ArregloSeisPorSeis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c36_ArregloSeisPorSeis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void ArregloSeisPorSeis_debug_initialize(void)
{
  _ArregloSeisPorSeisMachineNumber_ = sf_debug_initialize_machine(
    "ArregloSeisPorSeis","sfun",0,36,0,0,0);
  sf_debug_set_machine_event_thresholds(_ArregloSeisPorSeisMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_ArregloSeisPorSeisMachineNumber_,0);
}

void ArregloSeisPorSeis_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_ArregloSeisPorSeis_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "ArregloSeisPorSeis", "ArregloSeisPorSeis");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_ArregloSeisPorSeis_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
