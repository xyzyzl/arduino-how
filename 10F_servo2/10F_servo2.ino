#include <Servo.h>

Servo servo1;

void setup() {
  servo1.attach(9);

}

void loop() {
  for(int k = 0; k <= 180; k++)
  {
    servo1.write(k);
    delay(15);
  }
}
