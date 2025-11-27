#include "soil_sensor.h"

void soil_sensor(void *pvParameter){
    int soil_val = 0;
    float curr_soil_per = 0;

    while (1){
        soil_val = analogRead(SOILD_PIN);

        if (curr_soil_per < 0) curr_soil_per = 0;
        if (curr_soil_per > 100) curr_soil_per = 100;

        if (xSensorMutex != NULL && xSemaphoreTake(xSensorMutex, portMAX_DELAY) == pdTRUE) 
        {
            soil_val = glob_soil;
            xSemaphoreGive(xSensorMutex);
        }
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}