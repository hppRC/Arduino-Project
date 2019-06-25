#include "enpitshield.h"

void setup() {
  //タクトスイッチ1と全てのLEDの初期設定を行う
  pinMode(TACTSW0, INPUT);
  for (int j=0; j<4; j++) {
    pinMode(LED_list[j], OUTPUT); 
  }
}


//LEDを先に進める用の変数
int i = 0;

//LEDを変更するのに必要なボタン押下の回数
int RECOG_RATE = 1;

//スイッチの押下継続を判定するためのフラグ
int push_continue_flag = false;


void loop() {
  //スイッチを押し続けても点灯LEDが遷移しないように条件分岐させる
  //一度押下していない状態を挟むと、再度入力ができるようになる
  if ((chtsw(TACTSW0) == TACTSW_ON) && (!push_continue_flag)) {
    i++;
    i %= RECOG_RATE*4;
    push_continue_flag = true;
  } else if ((chtsw(TACTSW0) == TACTSW_OFF) || (!push_continue_flag)) {
    push_continue_flag = false;
  } 

  //点灯するLEDを決定
  int led = i/RECOG_RATE;
  
  if (led != 0) {
    digitalWrite(LED_list[led-1], LED_OFF);
  } else {
    digitalWrite(LED_list[3-led], LED_OFF);
  }
  digitalWrite(LED_list[led], LED_ON);
  return;
}


boolean chtsw(byte dx) {
  boolean tsw = digitalRead(dx);
  
  delay(20);
  if (tsw == digitalRead(dx)) {
    return !tsw;
  }
  return tsw;
}
