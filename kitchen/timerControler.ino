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
      reset_timer();
      timerRunning = false;
    } else {
      MsTimer2::start();
      timerRunning = true;
    }
  }
  return timerRunning;
}

void timerDriver() {
  Led0_Tick05();
  Led3_Tick025();
  if (timeKeeperTimePast(kitchenbMode)) {
    timeHasPast_Init();
    ending = ENDINGSTARTED;
  }
  return ;
}
