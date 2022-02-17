//Bat sang lan luot 5 bong den LED, su dung tu chan 9 den 13 roi tat tat ca cac den
int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;
int led5 = 13;
const int ledNumber = 5;
int pin[ledNumber] = {led1,led2,led3,led4,led5}; //Khai bao mang chua cac led
void setup() {
  for(int i = 0;i<ledNumber;++i)
  {
    pinMode(pin[i],OUTPUT); 
  }
}

void loop() {
  for(int i = 0;i<ledNumber;++i)
  {
    digitalWrite(pin[i],HIGH);
    delay(1000);
  }
  for(int i = ledNumber-1;i>=0;--i)
  {
   digitalWrite(pin[i],LOW);
  }
  delay(1500);
}
