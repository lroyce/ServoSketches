#include <Servo.h>

Servo myservo;  


void setup() {
       
  myservo.attach(9);
  myservo.write(0);
  pinMode(2,INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  
  while(digitalRead(2) == LOW){
    digitalWrite(13, HIGH);
    myservo.write(180);   
    delay(100);
  }
  myservo.write(0); 
  digitalWrite(13, LOW);

}
