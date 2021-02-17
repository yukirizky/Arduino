int pwm=5;
void setup() {
  pinMode(pwm, OUTPUT);
}

void loop() {
  analogWrite (pwm, 255);
}
