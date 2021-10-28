// anti-minecraft bedwars player action
bool cur = LOW;
bool last = LOW;
bool on = 0;
int led = 13;
int but = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(but, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  cur = digitalRead(but);
  if(last == LOW && cur == HIGH)
  {
    on = !on;
  }
  digitalWrite(led, on );
  last = cur;
}
