int pinLED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(pinLED,OUTPUT);
  Serial.println("LED Menyala");
}

void loop() {
  digitalWrite(pinLED,HIGH);
  delay(1000);
}
