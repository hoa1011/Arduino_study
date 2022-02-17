int led = 13;
boolean button_state = false;
int button = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(button); //neu state = 0 co nhan nut, state = 1 khong nhan nut
  digitalWrite(led,button_state); 
}
