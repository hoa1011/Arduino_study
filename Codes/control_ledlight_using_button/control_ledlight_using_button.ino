//Dieu khien do sang cua den bang nut bam
int led = 6;
int button = 13;
int currentStatus = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);

}

void loop() {
    boolean buttonState = digitalRead(button);
  if(buttonState==1)
  {
    delay(30);
    currentStatus=currentStatus+1;
  }
  switch(currentStatus % 3)
  {
    case 0:
    analogWrite(led,0);
    break;
    case 1:
    analogWrite(led,99);
    break;
    case 2:
    analogWrite(led,255);
    break;
    default:
    break;
  }
}
