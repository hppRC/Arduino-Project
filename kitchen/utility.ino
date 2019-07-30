#include "enpitshield.h"

void lightOff13() {
  digitalWrite(LED1, LED_OFF);
  Led1Before = LED_OFF;
  digitalWrite(LED3, LED_OFF);
  Led3Before = LED_OFF;
  return ;
}


void pinModeInit() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TactSW0, INPUT);
  pinMode(TactSW1, INPUT);
  return ;
}
