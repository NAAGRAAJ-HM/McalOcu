/******************************************************************************/
/* File   : Ocu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "Ocu_Cfg.h"
#include "infOcu_EcuM.h"
#include "infOcu_Dcm.h"
#include "infOcu_SchM.h"

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
      FUNC(void, OCU_CODE) InitFunction   (void);
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) GetVersionInfo (void);
      FUNC(void, OCU_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, OCU_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Ocu, OCU_VAR) Ocu;
CONSTP2VAR(infEcuMClient, OCU_VAR, OCU_CONST) gptrinfEcuMClient_Ocu = &Ocu;
CONSTP2VAR(infDcmClient,  OCU_VAR, OCU_CONST) gptrinfDcmClient_Ocu  = &Ocu;
CONSTP2VAR(infSchMClient, OCU_VAR, OCU_CONST) gptrinfSchMClient_Ocu = &Ocu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, OCU_CODE) module_Ocu::InitFunction(void){
   Ocu.IsInitDone = E_OK;
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
   Ocu.IsInitDone = E_NOT_OK;
}

FUNC(void, OCU_CODE) module_Ocu::GetVersionInfo(void){
#if(STD_ON == Ocu_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, OCU_CODE) module_Ocu::MainFunction(void){
}

#include "Ocu_Unused.h"

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

