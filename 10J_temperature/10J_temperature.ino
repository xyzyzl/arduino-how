int t = 0;
int l = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float v, c, f;
  v = analogRead(t)*0.004882814;
  c = (v-0.5)*100;
  f = c*(9.0/5.0)+32;

  if(c > 25.0)
  {
    double k = c*100;
    Serial.println(constrain(map(k-2500.0, 0, 200, 0, 255),0,255));
    analogWrite(l, constrain(map(k-2500.0, 0, 200, 0, 255),0,255));
  }

/*
  Serial.print("voltage: ");
  Serial.print(v);
  Serial.print(" degrees correct: ");
  Serial.print(c);
  Serial.print(" degrees freedom: ");
  Serial.println(f);
*/
  delay(1000);
}
