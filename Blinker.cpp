#include <Arduino.h>
#include "Blinker.h"

Blinker::Blinker(unsigned int ledpin, unsigned long blinkInterval, const long startDelay) {
  n_LEDPIN = ledpin;
  n_blinkInterval = blinkInterval;
  n_volgendeBlinkON = n_nu;
  n_startDelay = startDelay

  n_nu = millis();
}

Blinker::~Blinker() {}


 
int Blinker::begin() {
  pinMode(n_LEDPIN, OUTPUT);

  return 0;
};
int Blinker::handle(void) {
  int retVal = 0;
  unsigned long n_nu = millis();
 if (n_nu >= n_volgendeBlinkON) {
    n_volgendeBlinkON = n_nu + n_blinkInterval;
    digitalWrite(n_LEDPIN, !digitalRead(n_LEDPIN));
    retVal = 1;
  }
  return retVal;
};


