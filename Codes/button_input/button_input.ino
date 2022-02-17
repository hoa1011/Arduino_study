int led = 13;
int button = 10;
boolean button_state = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(button);
  digitalWrite(led,button_state);
}
