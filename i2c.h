#ifndef I2C_HEADER_H
#define I2C_HEADER_H

#include <stdint.h>

typedef enum {
    STATUS_OK,
    STATUS_ERROR
} status_t;
//Stub functions
// status_t i2c_read(
//     uint8_t bus_address,
//     uint8_t register_address,
//     uint16_t length,
//     uint8_t *buffer);

// status_t i2c_write(
//     uint8_t bus_address,
//     uint8_t register_address,
//     uint16_t length,
//     uint8_t *buffer);

//Fucntion to get full_scale_config
uint8_t get_full_scale_config();


//Function to get output data rate
uint8_t get_output_data_rate();


//Function to set output data rate
void set_output_data_rate();

//Function to enable or disable the interrupt pin
void interrupt_pin(bool enable);


//Function to read output data of a specified axis
int16_t read_output(uint8_t axis);

#endif
