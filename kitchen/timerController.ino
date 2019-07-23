#include "enpitshield.h"

void timerControllerInit() {
  timerRunning = STOPED;
  MsTimer2::set(TIMERCYCLE, timerDriver);
  MsTimer2::start();
  return ;
}

void timerDriver() {
  timeKeeper();
  Serial.println(Led0BlinkCounter, DEC);
  Serial.println(Led0Before, DEC);
  Led0Tick05();
  if (timerRunning) {
    Led3Tick025();
  }
  return ;
}

void stopTimer() {
  MsTimer2::stop();
  mode = Mode30SEC;
  timerRunning = STOPED;
  confTime = getConfTime();
  return ;
}


void startTimer() {
  pastTime = 0;
  timerRunning = RUNNING;
  MsTimer2::start();
  return ;
}
