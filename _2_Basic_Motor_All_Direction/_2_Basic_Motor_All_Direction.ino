#include <DUArduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
}

void loop() {
  goForward();
  delay(delay_period);
  goBackward();
  delay(delay_period);
  turnLeft();
  delay(delay_period);
  turnRight();
  delay(delay_period);
  goLeft();
  delay(delay_period);
  goRight();
  delay(delay_period);
  halt();
  delay(delay_period);
}



