/*****************************************************/
/* File   : Ocu.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Ocu_EcuM.h"
#include "Ocu_SchM.h"
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
   ,  public interface_Ocu_EcuM
   ,  public interface_Ocu_SchM
{
   public:
      FUNC(void, OCU_CODE) InitFunction   (void);
      FUNC(void, OCU_CODE) DeInitFunction (void);
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
module_Ocu Ocu;

interface_Ocu_EcuM *EcuM_Client_ptr_Ocu = &Ocu;
interface_Ocu_SchM *SchM_Client_ptr_Ocu = &Ocu;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, OCU_CODE) module_Ocu::InitFunction(void){
}

FUNC(void, OCU_CODE) module_Ocu::DeInitFunction(void){
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

