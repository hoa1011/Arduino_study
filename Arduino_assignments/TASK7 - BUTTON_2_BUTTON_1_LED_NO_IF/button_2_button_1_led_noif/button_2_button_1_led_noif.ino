int led = 13;
int button1 = 2;
int button2 = 4;
int buttonState1, buttonState2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(buttonState1,INPUT);
  pinMode(buttonState2,INPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  int finalVal = buttonState1&&buttonState2;
  digitalWrite(led,finalVal);
}
