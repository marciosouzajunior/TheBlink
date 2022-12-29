#include "BlinkPattern.h"

void BlinkPattern::init(LedService ledServiceArray[], int size) {
  this->ledServiceArray = ledServiceArray;
  this->size = size;
}
