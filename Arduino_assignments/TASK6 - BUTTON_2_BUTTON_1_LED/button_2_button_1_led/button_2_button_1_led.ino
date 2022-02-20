int led = 13;
int button1 = 2;
int button2 = 4;
int buttonState1, buttonState2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  if(buttonState1 == HIGH && buttonState2==HIGH)
  {
    digitalWrite(led,HIGH);
  } else digitalWrite(led,LOW);
}
