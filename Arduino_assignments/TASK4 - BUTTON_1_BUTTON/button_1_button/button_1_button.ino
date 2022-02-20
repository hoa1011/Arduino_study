int led = 13;
int button = 2;
int val;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  val = digitalRead(button);
  if(val == HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else digitalWrite(led,LOW);
}
