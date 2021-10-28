bool b = 0, a = 0;
int pir = 3, led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

  Serial.print("initializing sensor");
  for(int x = 0; x < 20; x++)
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" done");
  Serial.println("SENSOR ACTIVE");
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(pir);
  if(a && !b)
  {
    Serial.println("---");
    Serial.print("Motion detected at ");
    Serial.print(millis()/1000);
    Serial.println(" sec");
    b=a;  
  }
  else if(b && !a)
  {
    Serial.print("Motion ended at ");
    Serial.print(millis()/1000);
    Serial.println(" sec");
    b=a;
  }
  b = a;;
}
