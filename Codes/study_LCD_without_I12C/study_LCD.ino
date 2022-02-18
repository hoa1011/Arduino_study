#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2); //Khai bao cac chan tin hieu
int poten = 
void setup() {
  lcd.begin(16,2); //Khai bao thong so LCD
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0); //dua con tro toi cot 1 hang 1
  lcd.print("Hello World ^-^");
  lcd.setCursor(0,1); //dua con tro toi cot 1 hang 2
  lcd.print(millis()/1000); //in ra thoi gian ke tu luc chuong trinh khoi dong
  lcd.setCursor(5,1); //dua con tro toi cot 6 hang 2
  lcd.print("giay");
  delay(1000); //dung 1s giua cac lan dem
}
