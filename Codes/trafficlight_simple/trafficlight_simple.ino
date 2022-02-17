int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ledControl(red,5000);
  ledControl(yellow,2000);
  ledControl(green,6000);
}

void ledControl(int led, int delay_time)
{
  digitalWrite(led,HIGH);
  delay(delay_time);
  digitalWrite(led,LOW);
}
