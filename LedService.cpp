#include "LedService.h"

LedService::LedService(int pin) {
  this->pin = pin;
  init();
}

void LedService::init() {
	pinMode(pin, OUTPUT);
}

void LedService::on() {
  light(255);
}

void LedService::off() {
  light(0);
}

void LedService::light(int brightness) {
	analogWrite(pin, brightness);
}
