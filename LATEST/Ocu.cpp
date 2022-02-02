/*****************************************************/
/* File   : Ocu.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Ocu.h"

#include "Ocu_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Ocu Ocu;
class_Ocu_EcuM Ocu_EcuM;
class_Ocu_EcuM *Ocu_EcuM_ptr = &Ocu_EcuM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, OCU_CODE) class_Ocu_EcuM::InitFunction(void){
}

FUNC(void, OCU_CODE) class_Ocu_EcuM::DeInitFunction(void){
}

FUNC(void, OCU_CODE) class_Ocu::StartChannel(void){
}

FUNC(void, OCU_CODE) class_Ocu::StopChannel(void){
}

FUNC(void, OCU_CODE) class_Ocu::SetPinState(void){
}

FUNC(void, OCU_CODE) class_Ocu::SetPinAction(void){
}

FUNC(void, OCU_CODE) class_Ocu::GetCounter(void){
}

FUNC(void, OCU_CODE) class_Ocu::SetAbsoluteThreshold(void){
}

FUNC(void, OCU_CODE) class_Ocu::SetRelativeThreshold(void){
}

FUNC(void, OCU_CODE) class_Ocu::DisableNotification(void){
}

FUNC(void, OCU_CODE) class_Ocu::EnableNotification(void){
}

FUNC(void, OCU_CODE) class_Ocu::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

