int led1 = 3;
int led2 = 5;
int led3 = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led1, 255);
  analogWrite(led2, 175);
  analogWrite(led3, 0);
}
