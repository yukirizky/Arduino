int analogSensorPin = A0;
int pinLED1 = 3;
int pinLED2 = 4;
int sensorValue = 0;

void setup() {
  pinMode(analogSensorPin ,INPUT);
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
}

void loop() {
  sensorValue = analogRead (analogSensorPin);
  if (sensorValue<=500){
    digitalWrite (pinLED1, HIGH);
    }
    else if (sensorValue>=500){
      digitalWrite(pinLED2, HIGH);
    }
      else {
        digitalWrite (pinLED1, LOW);
        digitalWrite (pinLED2, LOW);
        }
}
