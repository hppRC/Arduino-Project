#include "enpitshield.h"

static boolean bCurLed3;
static int count;

void Led3_Init() {
  bCurLed3 = LED_OFF;
  count = 0;
  digitalWrite(LED3, LED_OFF);
  return;
}

void Led3_Tick025() {
  if (bCurLed3 == LED_OFF) {
      bCurLed3 = LED_ON;
  } else {
      bCurLed3 = LED_OFF; 
  }

  if (count<4) {
    digitalWrite(LED3, bCurLed3);
  }
  count += 1;
  count %= 20;
  return ;
}
