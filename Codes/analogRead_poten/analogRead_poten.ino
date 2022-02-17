//Doc gia tri cua bien tro de dieu khien do sang cua den LED
int poten = A2;
int led = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potenValue = analogRead(poten);
  analogWrite(led, potenValue);
}
