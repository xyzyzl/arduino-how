const int LEDPin = 13, ButtonPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(ButtonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(ButtonPin)==LOW) digitalWrite(LEDPin, LOW);
  else digitalWrite(LEDPin, HIGH);
}
