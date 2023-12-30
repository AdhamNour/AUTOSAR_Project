/*
 * Port_Errors.h
 *
 *  Created on: Dec 30, 2023
 *      Author: adham
 */

#ifndef MCAL_IO_PORT_ERRORS_PORT_ERRORS_H_
#define MCAL_IO_PORT_ERRORS_PORT_ERRORS_H_

/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/

/*Invalid Port Pin ID Requested*/
#define PORT_E_PARAM_PIN 0x0A
/*Port Pin not configured as changeable*/
#define PORT_E_DIRECTION_UNCHANGEABLE 0x0B
/*API Port_Init service called with wrong parameter*/
#define PORT_E_INIT_FAILED 0x0C
/*API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_PARAM_INVALID_MODE 0x0D
/*API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_MODE_UNCHANGEABLE 0x0E
/*API service called without module initialization*/
#define PORT_E_UNINIT 0x0F

#endif /* MCAL_IO_PORT_ERRORS_PORT_ERRORS_H_ */
