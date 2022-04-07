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
#define OCU_AR_RELEASE_VERSION_MAJOR                                           4
#define OCU_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(OCU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible OCU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(OCU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible OCU_AR_RELEASE_VERSION_MINOR!"
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
      FUNC(void, OCU_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, OCU_CONFIG_DATA, OCU_APPL_CONST) lptrCfgModule
      );
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
         OCU_AR_RELEASE_VERSION_MAJOR
      ,  OCU_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, OCU_CONFIG_DATA, OCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Ocu_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Ocu_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfg_CanIf as back-up configuration
            lptrCfg = PBcfg_CanIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Ocu_InitCheck)
   }
#endif
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
#if(STD_ON == Ocu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Ocu_InitCheck)
   }
#endif
}

FUNC(void, OCU_CODE) module_Ocu::MainFunction(void){
#if(STD_ON == Ocu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Ocu_InitCheck)
   }
#endif
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

