int led = 11;
unsigned long timevar;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  timevar = millis();
  analogWrite(led, timevar/100);
  //Muc dich chia 100 la de no quay tua xoay vong 
  //lai tranh rui ro so lon qua va truong hop dung 
  //het gia tri so cap cho gia tri xuat analog
}
