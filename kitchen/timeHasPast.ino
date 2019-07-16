#include "enpitshield.h"

static int endingTime;

void timeHasPast_Init() {
  All_LED_OFF();
  MsTimer2::stop();
  endingTime = 0;
  set_startEnding();
}

void set_startEnding() {
  MsTimer2::set(ENDINGCYCLE, endingDriver);
  MsTimer2::start();
}

void endingDriver() {
  Led3_Tick025Ending();
  endingTime++;
  if (endingTime > _15SECEND) {
    reset_timer();
  }
}

void FinishEnding_If_SW0Pushed() {
  if (IsSW0) {
    MsTimer2::stop();
    reset_timer();
  }
}
