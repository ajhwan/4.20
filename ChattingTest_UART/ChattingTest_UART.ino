#include<SoftwareSerial.h>

SoftwareSerial Kakao(10,11);

void setup(){
  Serial.begin(9600);
  Kakao.begin(9600);
}

void loop(){
  while(Kakao.available()){  
    Serial.write(Kakao.read());
  }
  delay(500);
  while(Serial.available()){
    Kakao.write(Serial.read());
  }
  delay(500);
}
