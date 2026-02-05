#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
    
     #define PINO 2

      void pisca_led(int tempo, int vezes,int pino){
      gpio_set_direction(14,GPIO_MODE_OUTPUT);
      gpio_set_direction(pino,GPIO_MODE_OUTPUT);
for (int i =0; i < vezes; i++)
{
    gpio_set_level(pino,1);
    gpio_set_level(14,1);
    vTaskDelay(tempo / portTICK_PERIOD_MS);
    gpio_set_level(pino,0);
    gpio_set_level(14,0);
    
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
    }
    
    void s(){
    pisca_led(100,3, 14);
    pisca_led(100,0, 14);
    pisca_led(100,3, PINO);

    }
    
    void o(){
    pisca_led(500,3, 14);
    
    }
    void app_main(void)
    {
    
     while(true){
    s();
    vTaskDelay(100/portTICK_PERIOD_MS);
    o();
    vTaskDelay(100/portTICK_PERIOD_MS);
    s();
    printf ("joão quer ajuda\n");
    }
    }
   
   
    