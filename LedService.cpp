#include "LedService.h"

LedService::LedService(int pinArray[], int size) {
  this->pinArray = pinArray;
  this->size = size;
  init();
}

void LedService::init() {
  // Reading the values using pointers
  int *ptr = pinArray;
  int pin = *ptr;
  for (int i = 0; i < size; i++){
	pinMode(pin, OUTPUT);
	ptr++;
	pin = *ptr;
  }
}

void LedService::on() {
  light(255);
}

void LedService::off() {
  light(0);
}

void LedService::light(int brightness) {
  int *ptr = pinArray;
  int pin = *ptr;
  for (int i = 0; i < size; i++){
	analogWrite(pin, brightness);
	ptr++;
	pin = *ptr;
  }
}
