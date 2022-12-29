#ifndef BLINK_SCHEDULER
#define BLINK_SCHEDULER

#include "BlinkPattern.h"

class BlinkScheduler{
  private:
    BlinkPattern *blinkPatterns[10];
    int blinkTimes[10];
    int index = 0;
    
  public:
    void addPattern(BlinkPattern &pattern, int times);
    void run();
};

#endif
