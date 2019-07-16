#include "enpitshield.h"

static boolean bSw0Before;
static boolean bSw1Before;

void TactSW_Init() {
  bSw0Before = SW_OFF;
  bSw1Before = SW_OFF;
  return ;
}

boolean IsSW0() {
  boolean bSw0State = digitalRead(TactSW0);
  boolean isChange = bSw0Before ^ bSw0State;
  bSw0Before = bSw0State;
  return bSw0State & isChange;
}

boolean IsSW1() {
  boolean bSw1State = digitalRead(TactSW1);
  boolean isChange = bSw1Before ^ bSw1State;
  bSw1Before = bSw1State;
  return bSw1State & isChange;
}
