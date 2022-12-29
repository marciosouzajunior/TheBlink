#ifndef BLINK_PATTERN
#define BLINK_PATTERN

#include "LedService.h"

class BlinkPattern {
  protected:
    LedService *ledServiceArray;
    int size;
    
  public:
    void init(LedService ledServiceArray[], int size);
    virtual void execute();
};

#endif
