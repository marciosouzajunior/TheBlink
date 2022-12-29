#include "FadeEffect.h"

void FadeEffect::execute(){      
  LedService *ptr = ledServiceArray;
  LedService ledService = *ptr;

  for (int i = 0; i < size; i++){
    for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
      ledService.light(fadeValue);
      delay(30);  
    }
    for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
      ledService.light(fadeValue);
      delay(30);  
    }
    ptr++;
    ledService = *ptr;
  }           
}
