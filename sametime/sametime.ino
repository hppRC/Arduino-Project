#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++) {
    pinMode(LED_list[i], OUTPUT);
  }
  Serial.begin(9600);
}

int time = 0;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(time, DEC);
  for (int i=0; i<10; i++) {
    digitalWrite(LED0, LED_ON);
    
    digitalWrite(LED3, LED_ON);
    delay(125);
    digitalWrite(LED3, LED_OFF);
    delay(125);
    digitalWrite(LED3, LED_ON);
    delay(125);
    digitalWrite(LED3, LED_OFF);
    delay(125);
    digitalWrite(LED0, LED_OFF);
    digitalWrite(LED3, LED_ON);
    delay(125);
    digitalWrite(LED3, LED_OFF);
    delay(125);
    digitalWrite(LED3, LED_ON);
    delay(125);
    digitalWrite(LED3, LED_OFF);
    delay(125);
    time++;
  }
}
