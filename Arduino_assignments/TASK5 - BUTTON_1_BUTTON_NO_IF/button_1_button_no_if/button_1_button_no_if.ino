int led = 13;
int button = 2;
int buttonState;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  digitalWrite(led,buttonState);
}
