#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

extern float glob_temp;
extern float glob_humid;
extern float glob_soil;

extern SemaphoreHandle_t xSensorMutex;
extern SemaphoreHandle_t xSerialMutex;

#endif