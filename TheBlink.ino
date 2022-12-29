#include "LedService.h"
#include "BlinkPattern.h"
#include "JustBlink.h"
#include "FadeEffect.h"
#include "BlinkScheduler.h"

int ledPinGreen = 3;
int ledPinRed = 5;
LedService ledServiceGreen(ledPinGreen);
LedService ledServiceRed(ledPinRed);
LedService ledServiceArray[] = {ledServiceGreen, ledServiceRed};

JustBlink blinkSlow;
JustBlink blinkFast;
FadeEffect fadeEffect;
BlinkScheduler blinkScheduler;

void setup() {
  // Init led services
  ledServiceGreen.init();
  ledServiceRed.init();

  // Init effects
  blinkSlow.init(ledServiceArray, 2);
  blinkSlow.setDelay(500);
  blinkFast.init(ledServiceArray, 2);
  blinkFast.setDelay(30);
  fadeEffect.init(ledServiceArray, 2);    

  // Add to scheduler
  blinkScheduler.addPattern(blinkSlow, 4);
  blinkScheduler.addPattern(blinkFast, 25);
  blinkScheduler.addPattern(fadeEffect, 1);

  Serial.begin(9600);
}

void loop() {
  blinkScheduler.run();
}
