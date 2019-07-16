#include "enpitshield.h"
#include <MsTimer2.h>

static boolean kitchenbMode;
static boolean kitchenTimerRunning;

#define TIMERCYCLE 250

void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TactSW0, INPUT);
  pinMode(TactSW1, INPUT);
  Led0_Init();
  Led1_Init();
  Led3_Init();
  TactSW_Init();
  timerControler_Init();
}

void loop() {
  kitchenTimerRunning = timerControle();
  kitchenbMode = Led1_checkset(kitchenTimerRunning);
  return ;
}

void timerDriver() {
  
  Led0_Tick05();
  Led3_Tick025();
  return ;
}
