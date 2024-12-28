#include <DUArduino.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  left_sensor = digitalRead(7);
  centre_sensor = digitalRead(8);
  right_sensor = digitalRead(9);
  if(left_sensor == LOW && centre_sensor == LOW && right_sensor == LOW) {
    goForward();
  }
  else if(left_sensor == HIGH && centre_sensor == LOW && right_sensor == LOW) {
      turnRight();
      delay(200);
  }
  else if(left_sensor == LOW && centre_sensor == LOW && right_sensor == HIGH) {
      turnLeft();
      delay(200);
  }
  else if(left_sensor == HIGH && centre_sensor == HIGH && right_sensor == LOW) {
     goBackward();
      delay(200);
      turnRight();
      delay(200);
  }
  //if(left_sensor == LOW && centre_sensor == HIGH && right_sensor == LOW) {
  else {
      goBackward();
      delay(200);
      turnLeft();
      delay(200);
  }
}
