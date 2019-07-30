#include "enpitshield.h"

static int endingPastTime;

void endingControllerInit() {
  MsTimer2::set(ENDINGCYCLE, endingDriver);
  endingPastTime = 0;
  timerRunning = RUNNING;
  endingKeeperInit();
  return ;
}

void endingDriver() {
  endingKeeper();
  Led0Tick05();
  Led3Ending025();
  return ;
}

void startEnding() {
  MsTimer2::start();
  return ;
}

void stopEnding() {
  MsTimer2::stop();
  lightOff13();
  timerControllerInit();
}
