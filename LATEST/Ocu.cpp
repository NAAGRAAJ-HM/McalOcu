/******************************************************************************/
/* File   : Ocu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infOcu_EcuM.hpp"
#include "infOcu_Dcm.hpp"
#include "infOcu_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define OCU_AR_RELEASE_MAJOR_VERSION                                           4
#define OCU_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(OCU_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible OCU_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(OCU_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible OCU_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Ocu:
      public abstract_module
{
   public:
      module_Ocu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, OCU_CODE) InitFunction   (void);
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) MainFunction   (void);
};

extern VAR(module_Ocu, OCU_VAR) Ocu;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, OCU_VAR, OCU_CONST) gptrinfEcuMClient_Ocu = &Ocu;
CONSTP2VAR(infDcmClient,  OCU_VAR, OCU_CONST) gptrinfDcmClient_Ocu  = &Ocu;
CONSTP2VAR(infSchMClient, OCU_VAR, OCU_CONST) gptrinfSchMClient_Ocu = &Ocu;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgOcu.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Ocu, OCU_VAR) Ocu(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, OCU_CODE) module_Ocu::InitFunction(
   CONSTP2CONST(CfgOcu_Type, CFGOCU_CONFIG_DATA, CFGOCU_APPL_CONST) lptrCfgOcu
){
   if(NULL_PTR == lptrCfgOcu){
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgOcu for memory faults
// use PBcfg_Ocu as back-up configuration
   }
   Ocu.IsInitDone = E_OK;
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
   Ocu.IsInitDone = E_NOT_OK;
}

FUNC(void, OCU_CODE) module_Ocu::MainFunction(void){
}

class class_Ocu_Unused{
   public:
      FUNC(void, OCU_CODE) StartChannel         (void);
      FUNC(void, OCU_CODE) StopChannel          (void);
      FUNC(void, OCU_CODE) SetPinState          (void);
      FUNC(void, OCU_CODE) SetPinAction         (void);
      FUNC(void, OCU_CODE) GetCounter           (void);
      FUNC(void, OCU_CODE) SetAbsoluteThreshold (void);
      FUNC(void, OCU_CODE) SetRelativeThreshold (void);
      FUNC(void, OCU_CODE) DisableNotification  (void);
      FUNC(void, OCU_CODE) EnableNotification   (void);
};

FUNC(void, OCU_CODE) class_Ocu_Unused::StartChannel(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::StopChannel(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::SetPinState(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::SetPinAction(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::GetCounter(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::SetAbsoluteThreshold(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::SetRelativeThreshold(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::DisableNotification(void){
}

FUNC(void, OCU_CODE) class_Ocu_Unused::EnableNotification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

