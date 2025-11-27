#ifndef __TEMP_HUMID_SENSOR_H__
#define __TEMP_HUMID_SENSOR_H__

#include "DHT.h"
#include "global.h"

#define DHT_PIN     27 
#define DHT_TYPE    DHT11


void temp_humid_sensor(void *pvParameter);

#endif