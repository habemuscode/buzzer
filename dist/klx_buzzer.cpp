#include "Arduino.h"
#include "klx_buzzer.h"

Buzzer::Buzzer(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Buzzer::Accept() {
  tone(_pin, 1000);
  delay(250);
  noTone(_pin);
}

void Buzzer::Error() {
  tone(_pin, 200);
  delay(1500);
  noTone(_pin);
}
