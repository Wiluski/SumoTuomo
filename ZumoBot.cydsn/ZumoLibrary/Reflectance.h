/**
 * @file    Reflectance.h
 * @brief   Reflectance sensor header file
 * @details If you want to use Reflectance sensor methods, you need to include Reflectance.h file. 
*/
#ifndef REFLECTANCE_H_
#define REFLECTANCE_H_
#include <stdint.h>
#include <project.h>

CY_ISR_PROTO(sensor_isr_handler);
    
/**
* @brief    Reflectance Sensor raw values
* @details  raw value of Reflectance Sensor
*/
struct sensors_ {
    uint16_t l3;
   // uint16_t l2; // not used at the moment
    uint16_t l1;
    uint16_t r1;
   // uint16_t r2; // not used at the moment
    uint16_t r3;
};

void reflectance_start(void);
void reflectance_read(struct sensors_ *values);
void reflectance_digital(struct sensors_ *digital);
struct sensors_ threshold;
void reflectance_set_threshold(uint16_t l3, uint16_t l1, /*uint16_t l2,*/ uint16_t r1, /*uint16_t r2,*/ uint16_t r3);

#endif
