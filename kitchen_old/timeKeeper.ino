#include "enpitshield.h"

static int pastTime;

void timeKeeper_Init() {
  pastTime = 0;
}


boolean timeKeeperTimePast(boolean kitchenbMode) {
  if (kitchenbMode == Mode30SEC) {
    return check30TimePast();
  } else if (kitchenbMode == Mode60SEC){
    return check60TimePast();
  }
}


boolean check30TimePast() {
  pastTime++;
  if (pastTime > _30SEC) {
    return true;
  } else {
    return false;
  }
}


boolean check60TimePast() {
  pastTime++;
  if (pastTime > _60SEC) {
    return true;
  } else {
    return false;
  }
}
