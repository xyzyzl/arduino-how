// anti-minecraft bedwars player action
bool cur = LOW;
bool last = LOW;
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
  while(last != cur)
  {
    delay(50);
    last = cur;
    cur = digitalRead(but);
  }
  digitalWrite(led, cur);
  last = cur;
}
