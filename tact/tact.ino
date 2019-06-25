#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(TACTSW0, INPUT);
  pinMode(LED3, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(TACTSW0) == TACTSW_ON) {
    digitalWrite(LED3, LED_ON);
  } else {
    digitalWrite(LED3, LED_OFF);
  }
  return;
}
