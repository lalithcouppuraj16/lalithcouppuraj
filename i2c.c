// ****************************************************************************
///  @file                  i2c.c
///
///  @brief                 LIS3MDLTR 3-Axis magnetometer API implementation
///
///  @author                L.COuppuraj
// ****************************************************************************

#include "i2c.h"

#include <stdint.h>
#include <stdio.h>

//Slave addresses and register addresses are referred from the given datasheet
//Define the magnetometer sensor address or device I2C address 
#define I2C_ADDRESS 0x1E

//Define the register addresses
#define CTRL_REG1   0x20     //for output data rate
#define CTRL_REG2   0x21     //for full scale configuration
#define INT_CFG     0x30     //for interrupt enable/disable
#define OUT_X_L     0x28     //for X axis output
#define OUT_X_H     0x29     //for X axis output
#define OUT_Y_L     0x2A     //for Y axis output
#define OUT_Y_H     0x2B     //for Y axis output
#define OUT_Z_L     0x2C     //for Z axis output
#define OUT_Z_H     0x2D     //for Z axis output

status_t i2c_read(
    uint8_t bus_address,
    uint8_t register_address,
    uint16_t length,
    uint8_t *buffer)
{
    printf(
        "read [%d] bytes from bus [%d] for register [%d]\n",
        length,
        bus_address,
        register_address);

    /* Setting the output to some arbitrary value */
    for (size_t i = 0; i < length; ++i) {
        buffer[i] = 0xff;
    }

    return STATUS_OK;
}

status_t i2c_write(
    uint8_t bus_address,
    uint8_t register_address,
    uint16_t length,
    uint8_t *buffer)
{
    printf(
        "write [%d] bytes to bus [%d] for register [%d]\n\t",
        length,
        bus_address,
        register_address);

    for (size_t i = 0; i < length; ++i) {
        printf("%p", buffer);
    }
    printf("\n");
    return STATUS_OK;
}
