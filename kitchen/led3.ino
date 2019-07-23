#include "enpitshield.h"

static boolean Led3Before;
static int Led3BlinkCounter;

void Led3Init() {
  Led3Before = LED_OFF;
  Led3BlinkCounter = 0;
  digitalWrite(LED3, LED_OFF);
  return ;
}

void Led3Tick025() {
  Led3BlinkCounter++;
  if (Led3BlinkCheck()) {
    Led3Write();
  }
  Led3BlinkCounter %= 200;
  return ;
}

void Led3Write() {
  Led3Before ^= 1;
  digitalWrite(LED3, Led3Before);
  return ;
}

boolean Led3BlinkCheck() {
  switch (Led3BlinkCounter) {
    case 0: ;
    case 10: ;
    case 20: ;
    case 30: ;
    case 40:
      return true;
  }
  return false;
}
