#pragma once
/******************************************************************************/
/* File   : McalOcu_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalOcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALOCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALOCU_CODE) StartChannel         (void);                \
              FUNC(void, MCALOCU_CODE) StopChannel          (void);                \
              FUNC(void, MCALOCU_CODE) SetPinState          (void);                \
              FUNC(void, MCALOCU_CODE) SetPinAction         (void);                \
              FUNC(void, MCALOCU_CODE) GetCounter           (void);                \
              FUNC(void, MCALOCU_CODE) SetAbsoluteThreshold (void);                \
              FUNC(void, MCALOCU_CODE) SetRelativeThreshold (void);                \
              FUNC(void, MCALOCU_CODE) DisableNotification  (void);                \
              FUNC(void, MCALOCU_CODE) EnableNotification   (void);                \

#define MCALOCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALOCU_CODE) StartChannel         (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) StopChannel          (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetPinState          (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetPinAction         (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) GetCounter           (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetAbsoluteThreshold (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetRelativeThreshold (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) EnableNotification   (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalOcu_Functionality{
   public:
      MCALOCU_CORE_FUNCTIONALITIES_VIRTUAL
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

