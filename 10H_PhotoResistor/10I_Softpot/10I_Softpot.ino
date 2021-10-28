int __ = 9, ___ = 10, ____ = 11, _____ = 0;

int ______,_______,________;
void setup() {
  // put your setup code here, to run once:
  pinMode(__,OUTPUT);
  pinMode(___,OUTPUT);
  pinMode(____,OUTPUT);  

  Serial.begin(9600);
}

// snake case > camel case
void _(int _________)
{
  ______ = constrain(map(_________,0,341,255,0),0,255)
         + constrain(map(_________,682,1023,0,255),0,255);
  _______ = constrain(map(_________,0,341,0,255),0,255)
          - constrain(map(_________,341,682,0,255),0,255);
  ________ = constrain(map(_________,341,682,255,0),0,255)
           - constrain(map(_________,682,1023,0,255),0,255);
  analogWrite(__,______);
  analogWrite(___,_______);
  analogWrite(____,________);
  Serial.println(_______);
  Serial.println(_________);
}

void loop() {
  // put your main code here, to run repeatedly:
  _(analogRead(_____));
}
