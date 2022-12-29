#ifndef LED_SERVICE
#define LED_SERVICE

#include <Arduino.h>

class LedService {
	
  private:
    int pin;

  public:
    LedService(int pin);
    void init();
    void on();
    void off();    
    void light(int brightness);
};

#endif
