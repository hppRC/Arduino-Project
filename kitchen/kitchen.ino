#include "enpitshield.h"
#include <MsTimer2.h>

static boolean kitchenbMode;
static boolean kitchenTimerRunning;
static boolean ending;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TactSW0, INPUT);
  pinMode(TactSW1, INPUT);
  Inits();

  ending = ENDINGDIDNTSTART;
}

void loop() {
  if (!ending) {
    kitchenTimerRunning = timerControle();
    kitchenbMode = Led1_checkset(kitchenTimerRunning);
  } else {
    FinishEnding_If_SW0Pushed();
  }
  return ;
}

void reset_timer() {
  kitchenbMode = Mode30SEC;
  kitchenTimerRunning = STOPED;
  ending = ENDINGDIDNTSTART;
  Inits();
}


void All_LED_OFF() {
  digitalWrite(LED0, LED_OFF);
  digitalWrite(LED1, LED_OFF);
  digitalWrite(LED3, LED_OFF);
}

void Inits() {
  Led0_Init();
  Led1_Init();
  Led3_Init();
  TactSW_Init();
  timerControler_Init();

  return ;
}
