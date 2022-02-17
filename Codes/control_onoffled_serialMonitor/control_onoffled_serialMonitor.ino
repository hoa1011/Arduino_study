contchar data;
int led = 12;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    data = Serial.read();
    if(data == '1')
    {
      digitalWrite(led,HIGH);
    }
    else if(data == '0')
    {
      digitalWrite(led,LOW);
    }
  }
}
