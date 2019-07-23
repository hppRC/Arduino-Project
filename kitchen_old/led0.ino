#include "enpitshield.h"

static boolean bCurLed0;
static int Led0_blinkCounter;


void Led0_Init() {
  bCurLed0 = LED_OFF;
  Led0_blinkCounter = 0;
  digitalWrite(LED0, LED_OFF);
  return;
}

void Led0_Tick05() {
  if (Led0_blinkCounter++ < 1) {
    Led0_write();
  }
  Led0_blinkCounter %= 2;
  return ;
}

void Led0_write() {
    if (bCurLed0 == LED_OFF) {
      bCurLed0 = LED_ON;
    } else {
      bCurLed0 = LED_OFF; 
    }
  digitalWrite(LED0, bCurLed0);
}
