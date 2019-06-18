#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++) {
      pinMode(LED_list[i], OUTPUT);
  };
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j=0; j<3; j++) {
    for (int i=0; i<3; i++) {
      digitalWrite(LED_list[i], LED_ON);
      delay(150);
      digitalWrite(LED_list[i], LED_OFF);
    };
    delay(200);
  };
  delay(100);
  digitalWrite(LED3, LED_ON);
  delay(300);
  digitalWrite(LED3, LED_OFF);
  delay(450);
  return;
}
