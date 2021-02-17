#include <Servo.h>
Servo myservo;

int pot = A5;
int var;

void setup() {
  myservo.attach(6);
}

void loop() {
  var = analogRead(pot);
  var = map (var, 00,1023,00, 180);
  myservo.write(var);
  delay(1000);
}
