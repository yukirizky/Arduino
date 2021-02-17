void setup() {
  pinMode (13, OUTPUT);
}

void loop() {
  digitalWrite (13, HIGH);
  for (int x=0; x<100; x++)
  delay (1000);
}
