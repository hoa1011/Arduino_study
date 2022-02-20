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
    Serial.print(text);
    text = ""; //De reset dat lai chuoi ky tu
  }
}
