#include "enpitshield.h"

void timerControllerInit() {
  timerRunning = STOPED;
  mode = Mode30SEC;
  pastTime = 0;
  confTime = getConfTime();
  MsTimer2::set(TIMERCYCLE, timerDriver);
  MsTimer2::start();
  return ;
}

void timerDriver() {
  timeKeeper();
  Led0Tick05();
  if (timerRunning) {
    Led3Tick025();
  }
  return ;
}

void stopTimer() {
  mode = Mode30SEC;
  timerRunning = STOPED;
  confTime = getConfTime();
  lightOff13();
  return ;
}


void startTimer() {
  pastTime = 0;
  confTime = getConfTime();
  Serial.println(confTime, DEC);
  timerRunning = RUNNING;
  MsTimer2::start();
  return ;
}
