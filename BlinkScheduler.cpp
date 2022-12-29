#include "BlinkScheduler.h"

void BlinkScheduler::addPattern(BlinkPattern &pattern, int times) {
  this->blinkPatterns[index] = &pattern;
  this->blinkTimes[index] = times;
  index++;
}

void BlinkScheduler::run(){      
  for(int i = 0; i <= index; i++){
    for (int t = 0; t < blinkTimes[i]; t++){
      blinkPatterns[i]->execute();
    }
  }
}
