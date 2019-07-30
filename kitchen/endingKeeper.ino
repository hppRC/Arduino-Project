#include "enpitshield.h"

static int endingConfTime;

void endingKeeperInit() {
  endingPastTime = 0;
  endingConfTime = _15SECEND;
  return ;
}

void endingKeeper() {
  endingPastTime++;
  Serial.println(endingPastTime, DEC);
  if (endingPastTime > endingConfTime) {
    stopEnding();
  }
  return ;
}
