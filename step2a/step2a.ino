#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++) {
      pinMode(LED_list[i], OUTPUT);
  };

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light;
  for (light=0; light<=10; light++) {
    Serial.println((255*(light*10))/100, DEC);
    analogWrite(LED1, (255*(light*10))/100);
    delay(250);
  }
  return;
}
