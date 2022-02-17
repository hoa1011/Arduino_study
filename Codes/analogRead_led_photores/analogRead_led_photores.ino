//Doc gia tri cua quang tro bang analogRead()
int photo = A1; //Quy dinh chan Analog A1 doc quang tro
int photoValue; //Khoi tao bien doc quang tro
int led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue = analogRead(photo); //Doc tin hieu analog, lay gia tri quang tro
  analogWrite(led, photoValue/4); //bat sang den tu chan so 6 dua vao cuong do anh sang doc duoc tu quang tro
}
