int r = 9, g = 10, b = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
}
