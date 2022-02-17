//Su dung bien tro de dieu khien goc quay cua servo
#include<Servo.h>
Servo myservo;
int servoPin = A1;
int val;
void setup() {
  pinMode(servoPin,INPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(servoPin);
  Serial.println(val);
  val = map(val,0,1023,0,180);
  //chuyen doi khoang gia tri doc tu bien tro thanh gia tri goc quay
  myservo.write(val);
  delay(40);

}
