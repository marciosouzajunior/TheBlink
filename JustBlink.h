#ifndef JUST_BLINK
#define JUST_BLINK

#include "BlinkPattern.h"
#include "LedService.h"

class JustBlink : public BlinkPattern {
  private:
    int delayValue;
    
  public:  
    void setDelay(int delayValue);    
    void execute();
};

#endif
