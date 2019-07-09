#include "enpitshield.h"

static boolean bCurLed0;
static boolean bTimeAdjuster;

void Led0_Init() {
  bCurLed0 = LED_OFF;
  bTimeAdjuster = true;
  digitalWrite(LED0, LED_OFF);
  return;
}

void Led0_Tick05() {

  if (bTimeAdjuster) {
    if (bCurLed0 == LED_OFF) {
      bCurLed0 = LED_ON;
    } else {
      bCurLed0 = LED_OFF; 
    }
  }
  bTimeAdjuster = !bTimeAdjuster;
  
  digitalWrite(LED0, bCurLed0);
  return ;
}
