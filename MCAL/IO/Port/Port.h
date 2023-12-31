 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Adham Nour
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

#include "Common_Macros.h"
#include "Std_Types.h"

/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

#include "Registers/Port_Regs.h"

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
#include "Types/Port_Types.h"



/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

//TODO : DELETE THE FOLLOWING FUNCTION AFTER IMPLEMENTING THE DRIVER
/************************************************************************************
* Service Name: Port_SetupGpioPin
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin as Digital GPIO pin
*              - Setup the direction of the GPIO pin
*              - Setup the internal resistor for i/p pin
************************************************************************************/
void Port_SetupGpioPin(const Port_ConfigType *ConfigPtr );

#endif /* PORT_H */
