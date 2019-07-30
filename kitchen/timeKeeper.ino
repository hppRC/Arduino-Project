#include "enpitshield.h"

static int pastTime;
static int confTime;

void timeKeeperInit() {
  pastTime = 0;
  confTime = getConfTime();
  return ;
}

void timeKeeper() {
  if (timerRunning) { 
    pastTime++;
    Serial.println(pastTime, DEC);
  }
  if (pastTime > confTime) {
    stopTimer();
    timeKeeperInit();
    endingControllerInit();
    startEnding();
  }
  return ;
}

int getConfTime() {
  if (mode == Mode30SEC) {
    return _30SEC ;
  } else if (mode == Mode60SEC) {
    return _60SEC;
  }
}
