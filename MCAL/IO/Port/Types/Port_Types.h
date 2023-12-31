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

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF, PULL_UP, PULL_DOWN
} Port_InternalResistor;

/* Description: Structure to configure each individual PIN:
 *  1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *  2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct
{
    uint8 port_num;
    uint8 pin_num;
    Port_PinDirectionType direction;
    Port_PinModeType mode;
    Port_InternalResistor resistor;
    uint8 initial_value;
    boolean pin_dir_changeable;
    boolean pin_mode_changeable;
} Port_PinConfig;

typedef struct
{
    Port_PinConfig pins [PORT_CONFIGURED_PINS];
}Port_ConfigType;

#endif /* MCAL_IO_PORT_TYPES_PORT_TYPES_H_ */
