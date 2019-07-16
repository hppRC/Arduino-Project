#include "enpitshield.h"

static boolean bCurLed3;
static int Led3_blinkCounter;


void Led3_Init() {
  bCurLed3 = LED_OFF;
  Led3_blinkCounter = 0;
  digitalWrite(LED3, LED_OFF);
  return;
}

void Led3_Tick025() {
  if (Led3_blinkCounter++ < 4) {
    Led3_write();
  }
  Led3_blinkCounter %= 20;
  return ;
}


void Led3_Tick025Ending() {
  Led3_write();
  return ;
}


void Led3_write() {
  if (bCurLed3 == LED_OFF) {
      bCurLed3 = LED_ON;
  } else {
      bCurLed3 = LED_OFF; 
  }
  digitalWrite(LED3, bCurLed3);
}
