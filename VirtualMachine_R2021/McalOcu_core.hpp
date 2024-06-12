#pragma once
/******************************************************************************/
/* File   : McalOcu_core.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalOcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define OCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, OCU_CODE) StartChannel         (void);                \
              FUNC(void, OCU_CODE) StopChannel          (void);                \
              FUNC(void, OCU_CODE) SetPinState          (void);                \
              FUNC(void, OCU_CODE) SetPinAction         (void);                \
              FUNC(void, OCU_CODE) GetCounter           (void);                \
              FUNC(void, OCU_CODE) SetAbsoluteThreshold (void);                \
              FUNC(void, OCU_CODE) SetRelativeThreshold (void);                \
              FUNC(void, OCU_CODE) DisableNotification  (void);                \
              FUNC(void, OCU_CODE) EnableNotification   (void);                \

#define OCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, OCU_CODE) StartChannel         (void) = 0;            \
      virtual FUNC(void, OCU_CODE) StopChannel          (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetPinState          (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetPinAction         (void) = 0;            \
      virtual FUNC(void, OCU_CODE) GetCounter           (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetAbsoluteThreshold (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetRelativeThreshold (void) = 0;            \
      virtual FUNC(void, OCU_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, OCU_CODE) EnableNotification   (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalOcu_Functionality{
   public:
      OCU_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

