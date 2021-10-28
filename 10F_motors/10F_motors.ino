int mot = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(mot, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  SerialSpeed();
}

void SerialSpeed() {
  // put your main code here, to run repeatedly:
  int Speed;
  Serial.println("type a speed 0-255 in the box above");
  Serial.println();
  while(1)
  {
    while(Serial.available())
    {
      Speed = Serial.parseInt();
      Speed = constrain(Speed, 0, 255);
      if(Speed==0) continue;
      Serial.println("setting speed to");
      Serial.println(Speed);
      analogWrite(mot, Speed);
    }
  }
}
