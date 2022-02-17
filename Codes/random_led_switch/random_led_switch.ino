//Dieu khien bat sang den ngau nhien
int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;
int led5 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  delay(500);
  long rand_led = random(9,14);
  digitalWrite(rand_led,HIGH);
  delay(500);
  digitalWrite(rand_led,LOW);
}
