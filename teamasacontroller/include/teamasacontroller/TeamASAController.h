//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: TeamASAController.h
//
// Code generated for Simulink model 'TeamASAController'.
//
// Model version                  : 1.2
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Tue Nov 14 10:10:05 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_TeamASAController_h_
#define RTW_HEADER_TeamASAController_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "TeamASAController_types.h"
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_TeamASAController_T {
  SL_Bus_TeamASAController_std_msgs_Float64 In1;// '<S10>/In1'
  SL_Bus_TeamASAController_std_msgs_Float64 In1_o;// '<S9>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_TeamASAController_T {
  ros_slroscpp_internal_block_P_T obj; // '<S5>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S7>/SourceBlock'
};

// Parameters (default storage)
struct P_TeamASAController_T_ {
  SL_Bus_TeamASAController_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                              //  Referenced by: '<S2>/Constant'

  SL_Bus_TeamASAController_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                       //  Referenced by: '<S9>/Out1'

  SL_Bus_TeamASAController_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                //  Referenced by: '<S7>/Constant'

  SL_Bus_TeamASAController_std_msgs_Float64 Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                         //  Referenced by: '<S10>/Out1'

  SL_Bus_TeamASAController_std_msgs_Float64 Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                //  Referenced by: '<S8>/Constant'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<Root>/Constant6'

  real_T Constant7_Value;              // Expression: 2
                                          //  Referenced by: '<Root>/Constant7'

  real_T Constant8_Value;              // Expression: 3
                                          //  Referenced by: '<Root>/Constant8'

  real_T Constant_Value_i;             // Expression: 1/10
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value;              // Expression: 1/15
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 1/20
                                          //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value;              // Expression: 75
                                          //  Referenced by: '<Root>/Constant3'

  real_T Constant4_Value;              // Expression: 85
                                          //  Referenced by: '<Root>/Constant4'

  real_T Constant5_Value;              // Expression: 95
                                          //  Referenced by: '<Root>/Constant5'

  real_T mphtoms_Gain;                 // Expression: 0.44704
                                          //  Referenced by: '<Root>/mph to m//s'

};

// Real-time Model Data Structure
struct tag_RTM_TeamASAController_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_TeamASAController_T TeamASAController_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_TeamASAController_T TeamASAController_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_TeamASAController_T TeamASAController_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void TeamASAController_initialize(void);
  extern void TeamASAController_step(void);
  extern void TeamASAController_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_TeamASAController_T *const TeamASAController_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'TeamASAController'
//  '<S1>'   : 'TeamASAController/Actual Time Gap'
//  '<S2>'   : 'TeamASAController/Blank Message'
//  '<S3>'   : 'TeamASAController/Calculate acceleration'
//  '<S4>'   : 'TeamASAController/Desired Time Gap'
//  '<S5>'   : 'TeamASAController/Publish'
//  '<S6>'   : 'TeamASAController/Speed Limiter'
//  '<S7>'   : 'TeamASAController/Subscribe'
//  '<S8>'   : 'TeamASAController/Subscribe1'
//  '<S9>'   : 'TeamASAController/Subscribe/Enabled Subsystem'
//  '<S10>'  : 'TeamASAController/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_TeamASAController_h_

//
// File trailer for generated code.
//
// [EOF]
//
