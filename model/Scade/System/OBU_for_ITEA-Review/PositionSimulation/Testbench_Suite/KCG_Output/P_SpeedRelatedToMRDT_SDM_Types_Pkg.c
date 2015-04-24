/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P_SpeedRelatedToMRDT_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::P_SpeedRelatedToMRDT */
V_internal_real_Type_SDM_Types_Pkg P_SpeedRelatedToMRDT_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_ebd */ V_internal_real_Type_SDM_Types_Pkg v_p_ebd,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_sdb */ V_internal_real_Type_SDM_Types_Pkg v_p_sdb,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_target1 */ V_internal_real_Type_SDM_Types_Pkg v_target1,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_ebd_valid */ kcg_bool v_p_ebd_valid)
{
  V_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_p_mrdt;
  
  if (v_p_ebd_valid) {
    tmp = v_p_ebd;
  }
  else {
    tmp = 0.0;
  }
  v_p_mrdt = /* 1 */ Max3_math_V_internal_real_Type(tmp, v_p_sdb, v_target1);
  return v_p_mrdt;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** P_SpeedRelatedToMRDT_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

