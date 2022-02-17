//Dung Digitalwrite bat den led tu chan so 11,12 va 13
int pin_led1 = 11;
int pin_led2 = 12;
int pin_led3 = 13;
int pin_led4 = 10;
int pin_led5 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1,OUTPUT);
  pinMode(pin_led2,OUTPUT);
  pinMode(pin_led3,OUTPUT);
  pinMode(pin_led4,OUTPUT);
  pinMode(pin_led5,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_led4,HIGH);
  delay(200);
  digitalWrite(pin_led5,HIGH);
  delay(200);
  digitalWrite(pin_led1,HIGH);
  delay(200);
  digitalWrite(pin_led2,HIGH);
  delay(200);
  digitalWrite(pin_led3,HIGH);
  delay(1000);
  digitalWrite(pin_led4,LOW);
  delay(200);
  digitalWrite(pin_led5,LOW);
  delay(200);
  digitalWrite(pin_led1,LOW);
  delay(200);
  digitalWrite(pin_led2,LOW);
  delay(200);
  digitalWrite(pin_led3,LOW);
  delay(1000);
}
