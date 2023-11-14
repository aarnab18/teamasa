//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: TeamASAController.cpp
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
#include "TeamASAController.h"
#include <math.h>
#include "rtwtypes.h"
#include "TeamASAController_types.h"

// Block signals (default storage)
B_TeamASAController_T TeamASAController_B;

// Block states (default storage)
DW_TeamASAController_T TeamASAController_DW;

// Real-time model
RT_MODEL_TeamASAController_T TeamASAController_M_ = RT_MODEL_TeamASAController_T
  ();
RT_MODEL_TeamASAController_T *const TeamASAController_M = &TeamASAController_M_;

// Model step function
void TeamASAController_step(void)
{
  SL_Bus_TeamASAController_std_msgs_Float64 b_varargout_2;
  SL_Bus_TeamASAController_std_msgs_Float64 rtb_BusAssignment;
  real_T rtb_Timegaperror;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S7>/SourceBlock'
  b_varargout_1 = Sub_TeamASAController_33.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S9>/Enable'

  // Start for MATLABSystem: '<S7>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S9>/In1'
    TeamASAController_B.In1_o = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S8>/SourceBlock'
  b_varargout_1 = Sub_TeamASAController_34.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  // Start for MATLABSystem: '<S8>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S10>/In1'
    TeamASAController_B.In1 = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Sum: '<Root>/Time gap error' incorporates:
  //   Constant: '<Root>/Constant2'
  //   MATLAB Function: '<Root>/Actual Time Gap'
  //   MATLAB Function: '<Root>/Desired Time Gap'

  rtb_Timegaperror = TeamASAController_B.In1.Data /
    TeamASAController_B.In1_o.Data - ((TeamASAController_B.In1_o.Data * 2.23694
    - 30.0) * TeamASAController_P.Constant2_Value + 2.0);

  // MATLAB Function: '<Root>/Speed Limiter' incorporates:
  //   Constant: '<Root>/Constant5'
  //   Gain: '<Root>/mph to m//s'

  if (TeamASAController_B.In1_o.Data < TeamASAController_P.mphtoms_Gain *
      TeamASAController_P.Constant5_Value) {
    // MATLAB Function: '<Root>/Calculate acceleration'
    if (TeamASAController_B.In1.Data > 251.0) {
      // BusAssignment: '<Root>/Bus Assignment' incorporates:
      //   Constant: '<Root>/Constant8'

      rtb_BusAssignment.Data = TeamASAController_P.Constant8_Value * 2.2;
    } else if (rtb_Timegaperror < 0.0) {
      // BusAssignment: '<Root>/Bus Assignment' incorporates:
      //   Constant: '<Root>/Constant8'

      rtb_BusAssignment.Data = -TeamASAController_P.Constant8_Value * sqrt(fabs
        (rtb_Timegaperror));
    } else {
      // BusAssignment: '<Root>/Bus Assignment' incorporates:
      //   Constant: '<Root>/Constant8'

      rtb_BusAssignment.Data = TeamASAController_P.Constant8_Value * sqrt
        (rtb_Timegaperror);
    }
  } else {
    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   MATLAB Function: '<Root>/Calculate acceleration'

    rtb_BusAssignment.Data = 0.0;
  }

  // End of MATLAB Function: '<Root>/Speed Limiter'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_TeamASAController_31.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void TeamASAController_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_1[15];
    char_T b_zeroDelimTopic_0[11];
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_4[15] = "/cmd_accel_sim";

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S9>/In1' incorporates:
    //   Outport: '<S9>/Out1'

    TeamASAController_B.In1_o = TeamASAController_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    TeamASAController_DW.obj_e.matlabCodegenIsDeleted = false;
    TeamASAController_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_TeamASAController_33.createSubscriber(&b_zeroDelimTopic[0], 1);
    TeamASAController_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S10>/In1' incorporates:
    //   Outport: '<S10>/Out1'

    TeamASAController_B.In1 = TeamASAController_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    TeamASAController_DW.obj_n.matlabCodegenIsDeleted = false;
    TeamASAController_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_TeamASAController_34.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    TeamASAController_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    TeamASAController_DW.obj.matlabCodegenIsDeleted = false;
    TeamASAController_DW.obj.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Pub_TeamASAController_31.createPublisher(&b_zeroDelimTopic_1[0], 1);
    TeamASAController_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void TeamASAController_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!TeamASAController_DW.obj_e.matlabCodegenIsDeleted) {
    TeamASAController_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!TeamASAController_DW.obj_n.matlabCodegenIsDeleted) {
    TeamASAController_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!TeamASAController_DW.obj.matlabCodegenIsDeleted) {
    TeamASAController_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
