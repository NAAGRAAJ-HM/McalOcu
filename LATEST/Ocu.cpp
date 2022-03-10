/*****************************************************/
/* File   : Ocu.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infOcu_EcuM.h"
#include "infOcu_SchM.h"
#include "Ocu_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Ocu:
      public abstract_module
{
   public:
      FUNC(void, OCU_CODE) InitFunction   (void);
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) GetVersionInfo (void);
      FUNC(void, OCU_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Ocu     Ocu;
infEcuMClient* gptrinfEcuMClient_Ocu = &Ocu;
infDcmClient*  gptrinfDcmClient_Ocu  = &Ocu;
infSchMClient* gptrinfSchMClient_Ocu = &Ocu;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, OCU_CODE) module_Ocu::InitFunction(void){
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
}

FUNC(void, OCU_CODE) module_Ocu::GetVersionInfo(void){
}

FUNC(void, OCU_CODE) module_Ocu::MainFunction(void){
}

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

FUNC(void, OCU_CODE) class_Ocu_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

