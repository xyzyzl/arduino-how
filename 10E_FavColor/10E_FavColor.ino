int r = 9, g = 10, b = 11;

void setColor(int _r, int _g, int _b)
{
  analogWrite(r,_r);
  analogWrite(g,_g);
  analogWrite(b,_b);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(0x99, 0x00, 0x12); // wine red
  delay(1000);
  setColor(0xfb, 0xb1, 0x17); // beer
  delay(1000);
}
