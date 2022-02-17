//Dem 5 lan nhat nut khi nhan du 5 lan se sang den
int button = 10;
int buttonState = 0;
int count = 0;
int led = 13;

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(count<5)
  {
    buttonState = digitalRead(button);
    Serial.println(buttonState);
    if(buttonState == HIGH)
    {
      count+=1;
      delay(300); //Cho 300ms de tranh Arduino doc sai tin hieu nut bam
    }
  }
  digitalWrite(led,HIGH); //bat den
}
