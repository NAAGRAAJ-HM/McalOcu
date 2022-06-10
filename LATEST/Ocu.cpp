/******************************************************************************/
/* File   : Ocu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgOcu.hpp"
#include "Ocu_core.hpp"
#include "infOcu_Exp.hpp"
#include "infOcu_Imp.hpp"

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
      INTERFACES_EXPORTED_OCU
      public abstract_module
   ,  public class_Ocu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Ocu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, OCU_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, OCU_CONFIG_DATA, OCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) MainFunction   (void);
      OCU_CORE_FUNCTIONALITIES
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgOcu;
         }
      }
      else{
#if(STD_ON == Ocu_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Ocu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  OCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
#if(STD_ON == Ocu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Ocu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  OCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, OCU_CODE) module_Ocu::MainFunction(void){
#if(STD_ON == Ocu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Ocu_InitCheck)
   }
   else{
#if(STD_ON == Ocu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  OCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, OCU_CODE) module_Ocu::StartChannel(void){
}

FUNC(void, OCU_CODE) module_Ocu::StopChannel(void){
}

FUNC(void, OCU_CODE) module_Ocu::SetPinState(void){
}

FUNC(void, OCU_CODE) module_Ocu::SetPinAction(void){
}

FUNC(void, OCU_CODE) module_Ocu::GetCounter(void){
}

FUNC(void, OCU_CODE) module_Ocu::SetAbsoluteThreshold(void){
}

FUNC(void, OCU_CODE) module_Ocu::SetRelativeThreshold(void){
}

FUNC(void, OCU_CODE) module_Ocu::DisableNotification(void){
}

FUNC(void, OCU_CODE) module_Ocu::EnableNotification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

