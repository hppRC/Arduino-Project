#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++) {
      pinMode(LED_list[i], OUTPUT);
  };
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<4; i++) {
    digitalWrite(LED_list[i], LED_ON);
    delay(500);
    digitalWrite(LED_list[i], LED_OFF);
    delay(500);
  };
  return;
}
