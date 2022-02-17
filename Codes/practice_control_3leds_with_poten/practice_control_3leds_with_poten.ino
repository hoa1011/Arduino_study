//TASK: Điều khiển 3 đèn bật tắt bằng biến trở bằng cách chia miền giá trị Analog
int led1 = 10;
int led2 = 11;
int led3 = 12;
int poten = A1;
int potenVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(poten,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potenVal = analogRead(poten);
  if(potenVal >= 0 && potenVal <= 341){
    digitalWrite(led1,HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } else if(potenVal >= 342 && potenVal <= 682) 
  {
     digitalWrite(led1, LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3, LOW);
  }
  else if(potenVal >= 683 && potenVal <= 1023)
  { 
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3,HIGH);
  }
}
