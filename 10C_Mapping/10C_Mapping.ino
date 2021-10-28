const int sensor = 0, led1 = 11, led2 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

int sv;
void loop() {
  // put your main code here, to run repeatedly:
  sv = analogRead(sensor);
  sv = map(sv, 0, 1023, 0, 255);
  analogWrite(led1, sv);
  analogWrite(led2, 255-sv);
}
