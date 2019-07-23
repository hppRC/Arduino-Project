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

void pinModeInit() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TactSW0, INPUT);
  pinMode(TactSW1, INPUT);
  return ;
}
