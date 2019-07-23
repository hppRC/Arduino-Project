#include "enpitshield.h"

static boolean bCurLed1;
static boolean bMode;

void Led1_Init() {
  bCurLed1 = LED_OFF;
  bMode = false;
  digitalWrite(LED1, LED_OFF);
  return ;
}

boolean Led1_checkset(boolean kitchenTimerRunning) {
  if (kitchenTimerRunning) {
    return bMode;
  }
  if (IsSW1()) {
    if (bMode == Mode30SEC) {
      Led1_set60SEC();
    } else {
      Led1_set30SEC();
    }
  }
  return bMode;
}

void Led1_set30SEC() {
  bMode = Mode30SEC;
  digitalWrite(LED1, LED_OFF);
  return ;
}

void Led1_set60SEC() {
  bMode = Mode60SEC;
  digitalWrite(LED1, LED_ON);
  return ;
}
