/* Include files */

#include "Array_sfun.h"
#include "c1_Array.h"
#include "c2_Array.h"
#include "c3_Array.h"
#include "c4_Array.h"
#include "c5_Array.h"
#include "c6_Array.h"
#include "c7_Array.h"
#include "c8_Array.h"
#include "c9_Array.h"
#include "c10_Array.h"
#include "c11_Array.h"
#include "c12_Array.h"
#include "c13_Array.h"
#include "c14_Array.h"
#include "c15_Array.h"
#include "c16_Array.h"
#include "c17_Array.h"
#include "c18_Array.h"
#include "c19_Array.h"
#include "c20_Array.h"
#include "c21_Array.h"
#include "c22_Array.h"
#include "c23_Array.h"
#include "c24_Array.h"
#include "c25_Array.h"
#include "c26_Array.h"
#include "c27_Array.h"
#include "c28_Array.h"
#include "c29_Array.h"
#include "c30_Array.h"
#include "c31_Array.h"
#include "c32_Array.h"
#include "c33_Array.h"
#include "c34_Array.h"
#include "c35_Array.h"
#include "c36_Array.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _ArrayMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void Array_initializer(void)
{
}

void Array_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Array_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==25) {
    c25_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==26) {
    c26_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==27) {
    c27_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==28) {
    c28_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==29) {
    c29_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==30) {
    c30_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==31) {
    c31_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==32) {
    c32_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==33) {
    c33_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==34) {
    c34_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==35) {
    c35_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==36) {
    c36_Array_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Array_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1213530655U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(919426471U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1787668477U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(887757901U);
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
          extern void sf_c1_Array_get_check_sum(mxArray *plhs[]);
          sf_c1_Array_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_Array_get_check_sum(mxArray *plhs[]);
          sf_c2_Array_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_Array_get_check_sum(mxArray *plhs[]);
          sf_c3_Array_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_Array_get_check_sum(mxArray *plhs[]);
          sf_c4_Array_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_Array_get_check_sum(mxArray *plhs[]);
          sf_c5_Array_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_Array_get_check_sum(mxArray *plhs[]);
          sf_c6_Array_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_Array_get_check_sum(mxArray *plhs[]);
          sf_c7_Array_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_Array_get_check_sum(mxArray *plhs[]);
          sf_c8_Array_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_Array_get_check_sum(mxArray *plhs[]);
          sf_c9_Array_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_Array_get_check_sum(mxArray *plhs[]);
          sf_c10_Array_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_Array_get_check_sum(mxArray *plhs[]);
          sf_c11_Array_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_Array_get_check_sum(mxArray *plhs[]);
          sf_c12_Array_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_Array_get_check_sum(mxArray *plhs[]);
          sf_c13_Array_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_Array_get_check_sum(mxArray *plhs[]);
          sf_c14_Array_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_Array_get_check_sum(mxArray *plhs[]);
          sf_c15_Array_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_Array_get_check_sum(mxArray *plhs[]);
          sf_c16_Array_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_Array_get_check_sum(mxArray *plhs[]);
          sf_c17_Array_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_Array_get_check_sum(mxArray *plhs[]);
          sf_c18_Array_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_Array_get_check_sum(mxArray *plhs[]);
          sf_c19_Array_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_Array_get_check_sum(mxArray *plhs[]);
          sf_c20_Array_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_Array_get_check_sum(mxArray *plhs[]);
          sf_c21_Array_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_Array_get_check_sum(mxArray *plhs[]);
          sf_c22_Array_get_check_sum(plhs);
          break;
        }

       case 23:
        {
          extern void sf_c23_Array_get_check_sum(mxArray *plhs[]);
          sf_c23_Array_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_Array_get_check_sum(mxArray *plhs[]);
          sf_c24_Array_get_check_sum(plhs);
          break;
        }

       case 25:
        {
          extern void sf_c25_Array_get_check_sum(mxArray *plhs[]);
          sf_c25_Array_get_check_sum(plhs);
          break;
        }

       case 26:
        {
          extern void sf_c26_Array_get_check_sum(mxArray *plhs[]);
          sf_c26_Array_get_check_sum(plhs);
          break;
        }

       case 27:
        {
          extern void sf_c27_Array_get_check_sum(mxArray *plhs[]);
          sf_c27_Array_get_check_sum(plhs);
          break;
        }

       case 28:
        {
          extern void sf_c28_Array_get_check_sum(mxArray *plhs[]);
          sf_c28_Array_get_check_sum(plhs);
          break;
        }

       case 29:
        {
          extern void sf_c29_Array_get_check_sum(mxArray *plhs[]);
          sf_c29_Array_get_check_sum(plhs);
          break;
        }

       case 30:
        {
          extern void sf_c30_Array_get_check_sum(mxArray *plhs[]);
          sf_c30_Array_get_check_sum(plhs);
          break;
        }

       case 31:
        {
          extern void sf_c31_Array_get_check_sum(mxArray *plhs[]);
          sf_c31_Array_get_check_sum(plhs);
          break;
        }

       case 32:
        {
          extern void sf_c32_Array_get_check_sum(mxArray *plhs[]);
          sf_c32_Array_get_check_sum(plhs);
          break;
        }

       case 33:
        {
          extern void sf_c33_Array_get_check_sum(mxArray *plhs[]);
          sf_c33_Array_get_check_sum(plhs);
          break;
        }

       case 34:
        {
          extern void sf_c34_Array_get_check_sum(mxArray *plhs[]);
          sf_c34_Array_get_check_sum(plhs);
          break;
        }

       case 35:
        {
          extern void sf_c35_Array_get_check_sum(mxArray *plhs[]);
          sf_c35_Array_get_check_sum(plhs);
          break;
        }

       case 36:
        {
          extern void sf_c36_Array_get_check_sum(mxArray *plhs[]);
          sf_c36_Array_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1269249029U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1076508231U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3612998260U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4135057058U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Array_autoinheritance_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
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
          extern mxArray *sf_c1_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c1_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c2_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c2_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c3_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c3_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c4_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c4_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c5_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c5_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c6_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c6_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c7_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c7_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c8_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c8_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c9_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c9_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c10_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c10_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c11_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c11_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c12_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c12_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c13_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c13_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c14_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c14_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 15:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c15_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c15_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c16_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c16_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 17:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c17_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c17_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c18_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c18_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 19:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c19_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c19_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 20:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c20_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c20_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 21:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c21_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c21_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 22:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c22_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c22_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 23:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c23_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c23_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 24:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c24_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c24_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 25:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c25_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c25_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 26:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c26_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c26_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 27:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c27_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c27_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 28:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c28_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c28_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 29:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c29_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c29_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 30:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c30_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c30_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 31:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c31_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c31_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 32:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c32_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c32_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 33:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c33_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c33_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 34:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c34_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c34_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 35:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c35_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c35_Array_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 36:
      {
        if (strcmp(aiChksum, "1KPkaEZ7HoPbK8UmULOSJ") == 0) {
          extern mxArray *sf_c36_Array_get_autoinheritance_info(void);
          plhs[0] = sf_c36_Array_get_autoinheritance_info();
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

unsigned int sf_Array_get_eml_resolved_functions_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
        extern const mxArray *sf_c1_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray *sf_c2_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray *sf_c3_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray *sf_c4_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray *sf_c5_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray *sf_c6_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray *sf_c7_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray *sf_c8_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray *sf_c9_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray *sf_c10_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray *sf_c11_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray *sf_c12_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray *sf_c13_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray *sf_c14_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray *sf_c15_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray *sf_c16_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray *sf_c17_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray *sf_c18_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray *sf_c19_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 20:
      {
        extern const mxArray *sf_c20_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c20_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 21:
      {
        extern const mxArray *sf_c21_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 22:
      {
        extern const mxArray *sf_c22_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c22_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 23:
      {
        extern const mxArray *sf_c23_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c23_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 24:
      {
        extern const mxArray *sf_c24_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c24_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 25:
      {
        extern const mxArray *sf_c25_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c25_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 26:
      {
        extern const mxArray *sf_c26_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c26_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 27:
      {
        extern const mxArray *sf_c27_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c27_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 28:
      {
        extern const mxArray *sf_c28_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c28_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 29:
      {
        extern const mxArray *sf_c29_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c29_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 30:
      {
        extern const mxArray *sf_c30_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c30_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 31:
      {
        extern const mxArray *sf_c31_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c31_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 32:
      {
        extern const mxArray *sf_c32_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c32_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 33:
      {
        extern const mxArray *sf_c33_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c33_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 34:
      {
        extern const mxArray *sf_c34_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c34_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 35:
      {
        extern const mxArray *sf_c35_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c35_Array_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 36:
      {
        extern const mxArray *sf_c36_Array_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c36_Array_get_eml_resolved_functions_info();
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

void Array_debug_initialize(void)
{
  _ArrayMachineNumber_ = sf_debug_initialize_machine("Array","sfun",0,36,0,0,0);
  sf_debug_set_machine_event_thresholds(_ArrayMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_ArrayMachineNumber_,0);
}

void Array_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_Array_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("Array", "Array");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_Array_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
