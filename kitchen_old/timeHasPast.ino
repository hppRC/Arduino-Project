#include "enpitshield.h"

static int endingTime;

void timeHasPast_Init() {
  MsTimer2::stop();
  Inits();
  endingTime = 0;
  set_startEnding();

  return ;
}

void set_startEnding() {
  MsTimer2::set(ENDINGCYCLE, endingDriver);
  Serial.print(1, DEC);
  MsTimer2::start();
  Serial.print(2, DEC);
  endingDriver();

  return ;
}

void endingDriver() {
  Serial.print(3, DEC);
  Led3_Tick025Ending();
  endingTime++;
  Serial.print(4, DEC);
  if (endingTime > _15SECEND) {
    reset_timer();
    timerControler_Init();
  }
  return ;
}

void FinishEnding_If_SW0Pushed() {
  if (IsSW0) {
    Serial.print(6, DEC);
    Serial.print(bSw0Before);
    MsTimer2::stop();
    reset_timer();
    timerControler_Init();
  }

  return ;
}
