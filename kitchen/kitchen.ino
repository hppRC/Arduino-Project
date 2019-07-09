#include "enpitshield.h"
#include <MsTimer2.h>

#define TIMERCYCLE 500

void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);
  Led0_Init();
  Led3_Init();
  
  MsTimer2::set(TIMERCYCLE, Led0_Tick05);
  MsTimer2::set(TIMERCYCLE/2, Led3_Tick025);
  MsTimer2::start();
}

void loop() {
  // put your main code here, to run repeatedly:
  return ;
}
