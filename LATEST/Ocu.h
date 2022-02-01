#pragma once
/*****************************************************/
/* File   : Ocu.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Ocu.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Ocu{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, OCU_CODE) InitFunction         (void);
      FUNC(void, OCU_CODE) DeInitFunction       (void);
      FUNC(void, OCU_CODE) StartChannel         (void);
      FUNC(void, OCU_CODE) StopChannel          (void);
      FUNC(void, OCU_CODE) SetPinState          (void);
      FUNC(void, OCU_CODE) SetPinAction         (void);
      FUNC(void, OCU_CODE) GetCounter           (void);
      FUNC(void, OCU_CODE) SetAbsoluteThreshold (void);
      FUNC(void, OCU_CODE) SetRelativeThreshold (void);
      FUNC(void, OCU_CODE) DisableNotification  (void);
      FUNC(void, OCU_CODE) EnableNotification   (void);
      FUNC(void, OCU_CODE) GetVersionInfo       (void);
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
extern class_Ocu Ocu;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

