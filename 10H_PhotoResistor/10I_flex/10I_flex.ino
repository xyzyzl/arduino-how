int flx = 0, r = 9, b = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int fv = constrain(map(analogRead(flx), 829, 950, 0, 255),0,255);
  Serial.println(fv);
  analogWrite(r, fv);
  analogWrite(b, 255-fv);
}
