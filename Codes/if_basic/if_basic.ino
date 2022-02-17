//Su dung khoi lenh dieu kien IF don gian bat tat den sang 2s
int led = 13;
int a = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  if(a < 5) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
  delay(2000);
  if(a > 5){
    digitalWrite(led,HIGH);
  }
  else digitalWrite(led,LOW);
  delay(2000);
  digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
