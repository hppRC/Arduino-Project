#include "enpitshield.h"

static boolean timerRunning;


void timerControler_Init() {
  timerRunning = false;
  MsTimer2::set(TIMERCYCLE, timerDriver);
}

boolean timerControle() {
  if (IsSW0()) {
    if (timerRunning) {
      MsTimer2::stop();
      timerRunning = false;
      All_LED_OFF();
    } else {
      MsTimer2::start();
      timerRunning = true;
    }
  }
  return timerRunning;
}

void All_LED_OFF() {
  digitalWrite(LED0, LED_OFF);
  digitalWrite(LED1, LED_OFF);
  digitalWrite(LED3, LED_OFF);
}
