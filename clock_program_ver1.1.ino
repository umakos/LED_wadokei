#include <MsTimer2.h>
//TimerOneライブラリを以下のサイトからzip形式でダウンロードしてツールのinclude libraryからAdd zip fileを選択して追加する必要がある。
//http://playground.arduino.cc/Main/MsTimer2
#define PIN_0 1
#define PIN_1 0
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7
#define PIN_8 8
#define PIN_9 9
#define PIN_10 10
#define PIN_11 11
#define PIN_12 12
#define pin_13 13

unsigned int cnt;
unsigned int hour=0;
unsigned int minute=0;
unsigned int mode=0;
boolean flag=true;

void count(void) {
  //計時処理
    cnt++;   
   if(cnt>59){minute++;cnt=0;}
   if(minute>59){hour++;minute=0;}
   if(hour>23){hour=0;} 
   /*
    Serial.print(hour);
    Serial.print(":");
    Serial.print(minute);
    Serial.print(":");
    Serial.println(cnt);
    */
  if((hour==0) ||(hour==1)){mode=0;}
  if((hour==2) ||(hour==3)){mode=1;}
  if((hour==4) ||(hour==5)){mode=2;}
  if((hour==6) ||(hour==7)){mode=3;}
  if((hour==8) ||(hour==9)){mode=4;}
  if((hour==10) ||(hour==11)){mode=5;}
  if((hour==12) ||(hour==13)){mode=6;}
  if((hour==14) ||(hour==15)){mode=7;}
  if((hour==16) ||(hour==17)){mode=8;}
  if((hour==18) ||(hour==19)){mode=9;}
  if((hour==20) ||(hour==21)){mode=10;}
  if((hour==22) ||(hour==23)){mode=11;}
   
  if (mode == 10) {
    digitalWrite(PIN_0, HIGH);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
   
  }
  if (mode == 8) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, HIGH);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
   
  }
  if (mode == 6) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, HIGH);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);

  }

  if (mode == 4) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, HIGH);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  
  }
  if (mode == 2) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, HIGH);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }

  if (mode == 0) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, HIGH);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 1) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, HIGH);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 3) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, HIGH);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 5) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, HIGH);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 7) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, HIGH);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 9) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, HIGH);
    digitalWrite(PIN_11, LOW);
  }
  if (mode == 11) {
    digitalWrite(PIN_0, LOW);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
    digitalWrite(PIN_3, LOW);
    digitalWrite(PIN_4, LOW);
    digitalWrite(PIN_5, LOW);
    digitalWrite(PIN_6, LOW);
    digitalWrite(PIN_7, LOW);
    digitalWrite(PIN_8, LOW);
    digitalWrite(PIN_9, LOW);
    digitalWrite(PIN_10, LOW);
    digitalWrite(PIN_11, HIGH);
    
  }
  }
  
void setup() {
  MsTimer2::set(1,count);//時計の（1秒の）個体値調整はここでする。1000msごとに割り込みを入れている。実際の時刻とずれる場合は割り込み周期を調節することで誤差を小さくできる。理論上0.001%の精度（日差0.08秒)で誤差を修正できる
  MsTimer2::start();
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, INPUT_PULLUP );
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
}

void loop() {

  if(digitalRead(13)==1){
    mode++;
    if(mode>12){mode=0;}
    delay(300);
    cnt=0;
    minute=0;
    hour=mode*2;
    }
  
}
