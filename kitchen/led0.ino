#include "enpitshield.h"

static boolean bCurLed0;

void Led0_Init() {
  bCurLed0 = LED_OFF;
  digitalWrite(LED0, LED_OFF);
  return;
}

void Led0_Tick05() {
  if (bCurLed0 == LED_OFF) {
    bCurLed0 = LED_ON;
  } else {
    bCurLed0 = LED_OFF; 
  }
}