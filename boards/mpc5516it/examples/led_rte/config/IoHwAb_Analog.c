/*
* Configuration of module: IoHwAb (IoHwAb_Analog.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       3.1.2
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/******************************************** Includes ********************************************/

#include "IoHwAb.h"
#include "IoHwAb_Internal.h"
/***************************************** Private macros *****************************************/

#define IOHWAB_ADC_MAX_MILLIVOLTS		( 5000 )
#define IOHWAB_ADC_VALUE_OF( mV )		( mV * ADC_MAX_VALUE / IOHWAB_ADC_MAX_MILLIVOLTS )

/**************************************** Analog scalings *****************************************/

/***************************************** Analog inputs ******************************************/

/********************************** Parameterized analog inputs ***********************************/



/************************************** Adc group callbacks ***************************************/
