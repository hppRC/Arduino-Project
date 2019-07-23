#include "enpitshield.h"

static boolean Led1Before;
static boolean Led1Mode;

void Led1Init() {
  Led1Before = LED_OFF;
  Led1Mode = false;
  digitalWrite(LED1, LED_OFF);
  return ;
}

void Led1Write() {
  Led1Before = ~Led1Before;
  digitalWrite(LED1, Led1Before);
  return ;
}
