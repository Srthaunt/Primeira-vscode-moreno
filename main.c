#include <time.h>
#include <stdlib.h> 
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

  

 void app_main() {
  gpio_set_direction(2,GPIO_MODE_OUTPUT);
srand((unsigned int) time(NULL));
  int min = 30;
  int max = 50;
while (true){
  int temp = (rand() % (max - min + 1)) +min;
 printf(" sua temperatura é %d\n" ,temp);
 if (  temp < 40){
 
   vTaskDelay(3000 / portTICK_PERIOD_MS);
 
   
  if ( temp > 40)
  gpio_set_level(2,1);
 }
}
 }