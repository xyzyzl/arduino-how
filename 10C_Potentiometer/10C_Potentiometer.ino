const int sensor = 0, led = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

int sv;
void loop() {
  // put your main code here, to run repeatedly:
  sv = analogRead(sensor);
  digitalWrite(led, HIGH);
  delay(sv);
  digitalWrite(led, LOW);
  delay(sv);
}
