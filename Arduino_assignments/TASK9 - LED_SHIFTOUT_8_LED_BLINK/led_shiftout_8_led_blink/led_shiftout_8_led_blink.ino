int latchPin = 8;
int dataPin = 11;
int clockPin = 12;
int a[] = {255,0};
void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  for(int i = 0;i<2;i++)
  {
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,MSBFIRST,a[i]);
    digitalWrite(latchPin,HIGH);
    delay(1000);
  }
}
