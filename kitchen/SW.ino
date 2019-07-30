#include "enpitshield.h"

static boolean Sw0Before;
static boolean Sw1Before;

static boolean Sw0State;
static boolean Sw1State;

static boolean isChange;


void TactSwInit() {
  Sw0Before = SW_OFF;
  Sw1Before = SW_OFF;
  return ;
}

boolean isSw0() {
  Sw0State = digitalRead(TactSW0);
  isChange = Sw0State & (~Sw0Before);
  Sw0Before = Sw0State;
  return isChange;
}

boolean isSw1() {
  Sw1State = digitalRead(TactSW1);
  isChange = Sw1State & (~Sw1Before);
  Sw1Before = Sw1State;
  return isChange;
}

void Sw0Observer() {
  if (isSw0()) {
    if (timerRunning == RUNNING) {
      stopEnding();
      stopTimer();
    } else {
      startTimer();
    }
  }
  return ;
}

void Sw1Observer() {
  if (isSw1() && (timerRunning == STOPED)) {
    mode ^= 1;
    Led1Write();
    Serial.println(mode, DEC);
  }
  return ;
}
