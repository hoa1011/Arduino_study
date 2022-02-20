int blue = 2;
int green = 3;
int red = 4;
int yellow = 5;
int white = 6;
const int ledNumber = 5;
int pinLed[ledNumber] = {blue,green,red,yellow,white};
void setup() {
  for(int i = 0;i<ledNumber;++i)
  {
    pinMode(pinLed[i],OUTPUT);
  }
}

void loop() {
  for(int i = 0;i<ledNumber;++i)
  {
    digitalWrite(pinLed[i],HIGH);
    delay(200);
  }
  delay(1000);
  for(int i = 0;i<ledNumber;++i)
  {
    digitalWrite(pinLed[i],LOW);
    delay(2000;
  }
  delay(1000);
}
