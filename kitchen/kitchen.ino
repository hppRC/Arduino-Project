#include "enpitshield.h"
#include <MsTimer2.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);
  Led0_init();

  MsTimer2::set(TIMERCYCLE, Led0_Tick05);
  MsTimer2::start();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
