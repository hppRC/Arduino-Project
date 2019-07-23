#include "enpitshield.h"

static boolean Led0Before;
static int Led0BlinkCounter;

void Led0Init() {
  Led0Before = LED_OFF;
  Led0BlinkCounter = 0;
  digitalWrite(LED0, LED_OFF);
  return ;
}

void Led0Tick05() {
  if (++Led0BlinkCounter == 20) {
    Led0Write();
  }
  Led0BlinkCounter %= 20;
  return ;
}

void Led0Write() {
  Led0Before ^= 1;
  digitalWrite(LED0, Led0Before);
  return ;
}
