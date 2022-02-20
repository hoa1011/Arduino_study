int led1 = 2;
int led2 = 3;
int led3 = 4;
char Status;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    Status = Serial.read();
    Serial.print("Du lieu nhan duoc la: ");
    Serial.println(Status,BIN);
    digitalWrite(led1,Status&1);
    digitalWrite(led2,(Status>>1)&1);
    digitalWrite(led3,(Status>>2)&1);
  }
}
