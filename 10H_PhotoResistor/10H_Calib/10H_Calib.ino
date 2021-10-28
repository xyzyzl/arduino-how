int sens = A0;
int led = 9;
int ind = 13;
int but = 2;

int mn = 0, mx = 1023, cur = 0, mpp = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(ind, OUTPUT);
  pinMode(but, OUTPUT);
  Serial.begin(9600);  
}

void printv()
{
  Serial.print("Minimum: ");
  Serial.print(mn);
  Serial.print(", Maximum: ");
  Serial.print(mx);
  Serial.print(", Current: ");
  Serial.print(cur);
  Serial.print(", Mapped: ");
  Serial.println(mpp);
}

void calibrate()
{
  digitalWrite(ind, HIGH);
  cur = analogRead(sens);
  if(cur > mx)
  {
    mx = cur;
  } else if(cur < mn)
  {
    mn = cur;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(but) == HIGH)
  {
    mn = 1023;
    mx = 0;
    while(digitalRead(but) == HIGH)
    {
      calibrate();
      printv();
    }
  } else 
  {
    cur = analogRead(sens);
    mpp = map(cur, mn, mx, 0, 255);
    mpp = constrain(mpp, 0, 255);
    analogWrite(led, mpp);
    printv(); 
  }
}
