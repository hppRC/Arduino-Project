#include "enpitshield.h"
#include <MsTimer2.h>

static boolean timerRunning;
static boolean mode;
static boolean ending;

void setup() {
  pinModeInit();
  Led0Init();
  Led1Init();
  Led3Init();
  timerControllerInit();
  timeKeeperInit();
  Serial.begin(9600);
  timerRunning = STOPED;
  mode = Mode30SEC;
  return ;
}

void loop() {
  Sw0Observer();
  Sw1Observer();
  return ;
}
