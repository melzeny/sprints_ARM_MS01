/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Timer_Cfg.h"
#include "Timer.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
void Gpt_NotificationFn(void);

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
const Gpt_ConfigType Gpt_Config[GPT_ACTIVATED_CHANNELS_SIZE] =
{
	/* channel										channelTickFreq					channelTickMaxValue					channelMode								gptNotification */
	{GPT_16_32_BIT_TIMER0,				500,										0xFF,												GPT_CH_MODE_ONESHOT,			Gpt_NotificationFn},
	{GPT_32_64_BIT_WIDE_TIMER1,		1000,						 				0xFFFF,											GPT_CH_MODE_CONTINUOUS,   0}
};
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void Gpt_NotificationFn(void)
{
	
}

/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
