char data;
String text = "";
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    data = Serial.read();
    text += data;
    if(data == '.'){
      Serial.print("Van ban vua nhan duoc: ");
      Serial.println(text);
      text = "";
    }
  }
}
