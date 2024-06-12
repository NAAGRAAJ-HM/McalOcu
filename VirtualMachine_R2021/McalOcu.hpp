#pragma once
/******************************************************************************/
/* File   : McalOcu.hpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalOcu.hpp"
#include "CfgMcalOcu.hpp"
#include "McalOcu_core.hpp"
#include "infMcalOcu_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalOcu:
      INTERFACES_EXPORTED_OCU
      public abstract_module
   ,  public class_McalOcu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalOcu_Type* lptrConst = (ConstMcalOcu_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, OCU_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, OCU_CONST,       OCU_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   OCU_CONFIG_DATA, OCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) MainFunction   (void);
      OCU_CORE_FUNCTIONALITIES
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
extern VAR(module_McalOcu, OCU_VAR) McalOcu;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

