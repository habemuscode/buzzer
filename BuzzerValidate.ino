#include "klx_buzzer.h"
Buzzer _buzzer(12);

void setup(){
  _buzzer.Accept();
  delay(1000);
  _buzzer.Error();
}

void loop(){
  
}
