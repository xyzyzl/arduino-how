int pir = 3, led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool a = digitalRead(pir);
  if(a == HIGH) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);
  Serial.println(a);
}
