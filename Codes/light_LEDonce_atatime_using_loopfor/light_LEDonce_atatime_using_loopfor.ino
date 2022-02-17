//TASK: Bat lan luot tung den LED. Khi mot den duoc bat len thi tat ca cac den khac deu tat di
//Gia su minh co 5 den LED su dung cac chan tu 9 den 13 de bat lan luot
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
const int ledNumber = 5;
int pin[ledNumber] = {led1,led2,led3,led4,led5};
void setup() {
  int i = 0;
  while(i<=ledNumber)
  { 
    pinMode(pin[i],OUTPUT);
    ++i;
  }
}

void loop() {
 for(int i = 0;i<ledNumber;++i)
 {
  for(int j = 0;j<ledNumber;++j)
  {
    digitalWrite(pin[j],LOW);
  }
   digitalWrite(pin[i],HIGH);
   delay(1000);
 }
}
