int sens = A0;
int led = 9;
int senv;
int ledv;
int del = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  senv = analogRead(sens);
  ledv = map(senv, 0, 1023, 0, 255);

  analogWrite(led, ledv);
  Serial.print("The sensor value is: ");
  Serial.print(senv);
  Serial.print(" and the LED value is: ");
  Serial.print(ledv);
  Serial.println();
  delay(del);
}
