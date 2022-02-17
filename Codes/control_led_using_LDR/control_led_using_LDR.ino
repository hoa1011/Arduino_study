int photo = A1; //quy dinh chan Analog doc quang tro
int photoVal; //khoi tao bien doc gia tri quang tro
int led = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  photoVal = analogRead(photo);
  //doc tin hieu Analog tu quang tro
  if(photoVal <= 15){
    digitalWrite(led,LOW);
  }
  else digitalWrite(led,HIGH);
}

//Note: gia tri photolnp <= 15 (độ sáng tương đương 1 căn phòng, 
//đèn bật, ngược lại đèn tắt)
