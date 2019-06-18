#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++) {
      pinMode(LED_list[i], OUTPUT);
  };
}

void loop() {
  // put your main code here, to run repeatedly:
  int light, repeat;
  for (light=0; light<=10; light++) {
    for (repeat=0; repeat<50; repeat++) {

      digitalWrite(LED0, LED_ON);
      delay(light);
      digitalWrite(LED0, LED_OFF);
      delay(10-light);
      
    }
  }
  return;
}
