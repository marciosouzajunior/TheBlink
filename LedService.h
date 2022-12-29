#ifndef LED_SERVICE
#define LED_SERVICE

#include <Arduino.h>

class LedService {
	
  private:
    int *pinArray;
    int size;

  public:
    LedService(int pinArray[], int size);
    void init();
    void on();
    void off();    
    void light(int brightness);
};

#endif