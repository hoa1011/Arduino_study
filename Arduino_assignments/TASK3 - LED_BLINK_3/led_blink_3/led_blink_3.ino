int led1 = 2;
int led2 = 3;
int led3 = 4;
const int ledNumber = 3;
int ledPin[ledNumber] = {led1,led2,led3};

void setup() {
  int i = 0;
  while(i<ledNumber)
  {
    pinMode(ledPin[i],OUTPUT);
    ++i;
  }
}

void loop() {
  int j = ledNumber-1;
  while(j>=0)
  {
    digitalWrite(ledPin[j],HIGH);
    delay(200);
    digitalWrite(ledPin[j],LOW);
    delay(200);
    --j;
  }
}
