#include <MsTimer2.h>
#include "enpitshield.h"


void flush () {
  static boolean output = LED_OFF;

  digitalWrite(LED0, output);
  //output == LED_OFF -> output = LED_ON
  //output == LED_ON -> output = LED_OFF
  output = (output == LED_OFF ? LED_ON: LED_OFF);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(LED0, OUTPUT);

  MsTimer2::set(500, flush);

  pinMode(LED3, OUTPUT);

  pinMode(TACTSW0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(TACTSW0) == TACTSW_ON) {
    MsTimer2::start();

    digitalWrite(LED3, LED_ON);
    delay(250);
    digitalWrite(LED3, LED_OFF); 
    delay(250);
  } else {
    MsTimer2::stop();
    digitalWrite(LED0, LED_OFF);
    digitalWrite(LED3, LED_OFF);

  }
}
