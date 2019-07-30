#include "enpitshield.h"

static boolean Led1Before;

void Led1Init() {
  Led1Before = LED_OFF;
  digitalWrite(LED1, LED_OFF);
  return ;
}

void Led1Write() {
  Led1Before ^= 1;
  digitalWrite(LED1, Led1Before);
  return ;
}
