char data; //Khai bao bien doc du lieu

void setup() {
  Serial.begin(9600); //Khoi dong Serial
}

void loop() {
  if(Serial.available()) //Kiem tra xem co du lieu co duoc gui den Arduino hay khong
  {
    data = Serial.read(); //doc du lieu gui den board Arduino tu Serial Monitor
    Serial.println(data); //gui du lieu vua doc den Serial Monitor
  }
}
