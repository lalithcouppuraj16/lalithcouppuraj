#I2C Driver for LIS3MDLTR 3-Axis Magnetometer Sensor

This is a simple I2C driver implementation for the LIS3MDLTR 3-Axis Magnetometer Sensor.

#Usage

1. Include the `i2c.h` header file in your project.
2. Implement the I2C communication functions (i2c_read and i2c_write) based on the platform.
3. Use the provided API functions to communicate with the sensor.

#API Functions

i2c_read: reads data from the I2C bus.
i2c_write: writes data to the I2C bus.
get_full_scale_config: Retrieves the full-scale configuration from the sensor.
get_output_data_rate: Retrieves the output data rate configuration from the sensor.
set_output_data_rate: Sets the output data rate configuration of the sensor.
interrupt_pin: Enables or disables the interrupt pin of the sensor.
read_output_data: Reads the output data of a specified axis from the sensor.

#Extra Thoughts
What changes you would make to this interfaces for use in an RTOS
environment?
Error handling can be improved a lot and the priorities to the tasks can be set using RTOS which in return improve the quality of the code. 

How might the I2C API be improved?
The API can be improved by adding additional API functions for clock stretching, bus speed and addressing modes. 