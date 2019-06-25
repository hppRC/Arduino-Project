#include "enpitshield.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(TACTSW0, INPUT);
  for (int j=0; j<4; j++) {
    pinMode(LED_list[j], OUTPUT); 
  }
}

int i = 0;
int RECOG_RATE = 1;
int push_continue_flag = false;

void loop() {
  if ((digitalRead(TACTSW0) == TACTSW_ON) && (!push_continue_flag)) {
    i++;
    i %= RECOG_RATE*4;
    push_continue_flag = true;
  } else if ((digitalRead(TACTSW0) == TACTSW_OFF) || (!push_continue_flag)) {
    push_continue_flag = false;
  } 
  
  int led = i/RECOG_RATE;
  if ((led) != 0) {
    digitalWrite(LED_list[led-1], LED_OFF);
    digitalWrite(LED_list[led], LED_ON);
  } else {
    digitalWrite(LED_list[3-led], LED_OFF);
    digitalWrite(LED_list[led], LED_ON);
  }
  return;
}
