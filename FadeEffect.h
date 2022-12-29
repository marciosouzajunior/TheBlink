#ifndef FADE_EFFECT
#define FADE_EFFECT

#include "BlinkPattern.h"
#include <Arduino.h>

class FadeEffect : public BlinkPattern {
  public:  
    void execute();
};

#endif
