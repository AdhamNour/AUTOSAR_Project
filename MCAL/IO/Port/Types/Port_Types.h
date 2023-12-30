/*
 * Port_Types.h
 *
 *  Created on: Dec 30, 2023
 *      Author: adham
 */

#ifndef MCAL_IO_PORT_TYPES_PORT_TYPES_H_
#define MCAL_IO_PORT_TYPES_PORT_TYPES_H_

#include "Std_Types.h"

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/*Data type for the symbolic name of a port pin */
typedef uint8 Port_PinType;

/*Possible direction of a port pin*/
typedef enum Port_PinDirectionType
{
    PORT_PIN_IN, PORT_PIN_OUT

} Port_PinDirectionType;

/*Initializes the Port Driver module*/
typedef uint8 Port_PinModeType;


#endif /* MCAL_IO_PORT_TYPES_PORT_TYPES_H_ */
