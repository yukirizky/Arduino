const int pb = 5;

void setup() {
  Serial.begin(9600);
  pinMode(pb, INPUT);
}

void loop() {
  Serial.println(digitalRead(pb));
  delay (1000);
}
