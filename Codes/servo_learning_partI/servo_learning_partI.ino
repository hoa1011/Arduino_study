//Dieu khien servo theo kieu "quet"
//Arduino dieu khien servo quay "quet" goc tu 0 den 180 va tu 180 do tro ve 0
#include<Servo.h>

Servo myservo; //Tao doi tuong servo tu thu vien servo

int pos = 0; //Gia tri dung de xac dinh goc quay cua servo
void setup() {
  myservo.attach(9); //Khai bao chan tin hieu Arduino ket noi voi Servo

}

void loop() {
  //Quay servo tu goc 0 den 180 do
  for(pos=0;pos<=180;++pos)
  {
    myservo.write(pos);
    //quay servo den goc pos
    delay(15);
    //dung chuong trinh lai doi servo quay
  }
  for(pos = 180;pos>=0;--pos)
  {
    myservo.write(pos);
    delay(15);
  }
}
