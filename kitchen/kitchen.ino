#include "enpitshield.h"
#include <MsTimer2.h>

#define TIMERCYCLE 250

void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TactSW0, INPUT);
  pinMode(TactSW1, INPUT);
  Led0_Init();
  Led3_Init();
  TactSW_Init();
  
  MsTimer2::set(TIMERCYCLE, timerDriver);
  MsTimer2::start();
}

void loop() {

  // こんな感じに使うでしょうという予想
  IsSW0();
  ISSW1();
  return ;
}

void timerDriver() {
  Led0_Tick05();
  Led3_Tick025();
  return ;
}
