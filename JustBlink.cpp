#include "JustBlink.h"

void JustBlink::setDelay(int delayValue){
  this->delayValue = delayValue;
}

void JustBlink::execute(){      
  LedService *ptr = ledServiceArray;
  LedService ledService = *ptr;

  // Light leds on all services
  for (int i = 0; i < size; i++){       
    ledService.on();        
    ptr++;
    ledService = *ptr;
  }      
  delay(delayValue);   
  ptr--;

  // Turn off leds on all services
  for (int i = 0; i < size; i++){       
    ledService.off();        
    ptr--;
    ledService = *ptr;
  }      
  delay(delayValue);           
}
