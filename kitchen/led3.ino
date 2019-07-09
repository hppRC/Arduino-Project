#include "enpitshield.h"


static boolean bCurLed3;

void Led3_Init() {
  bCurLed3 = LED_OFF;
  digitalWrite(LED3, LED_OFF);
  return;
}

void Led3_Tick025() {
  if (bCurLed3 == LED_OFF) {
    bCurLed3 = LED_ON;
  } else {
    bCurLed3 = LED_OFF; 
  }

  digitalWrite(LED3, bCurLed3);
  return ;
}
