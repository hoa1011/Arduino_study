int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
int a[] = {1,2,4,8,16,32,64,128};
void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
    for (int i = 0; i < 8; i++) {
     digitalWrite(latchPin,LOW);
     shiftOut(dataPin,clockPin,MSBFIRST,a[i]);
     digitalWrite(latchPin,HIGH);
    delay(1000); 
  }
}
