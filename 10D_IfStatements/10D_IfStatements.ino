int r = 9, g = 10, x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(x = 0; x < 255; x++)
  {
    analogWrite(r, x);
    analogWrite(g, 255-x);
    delay(10);
  }
  for(x = 255; x >= 0; x--)
  {
    analogWrite(r, x);
    analogWrite(g, 255-x);
    delay(10);
  }
}
