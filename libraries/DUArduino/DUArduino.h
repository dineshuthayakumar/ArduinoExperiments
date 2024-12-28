int lmt1 = 3;
int lmt2 = 5;
int rmt1 = 6;
int rmt2 = 11;
int value = 75;
int delay_period = 2000;
int left_sensor, centre_sensor, right_sensor;


void leftMotorBackward() {
  analogWrite(lmt1, value);
  analogWrite(lmt2, 0);
}

void leftMotorForward() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, value);
}

void leftMotorHalt() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
}

void rightMotorBackward() {
  analogWrite(rmt1, 0);
  analogWrite(rmt2, value);
}

void rightMotorForward() {
  analogWrite(rmt1, value);
  analogWrite(rmt2, 0);
}

void rightMotorHalt() {
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}

void halt() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}

void goRight() {
  rightMotorHalt();
  leftMotorForward();
}

void goLeft() {
  leftMotorHalt();
  rightMotorForward();
}

void goBackward() {
  leftMotorBackward();
  rightMotorBackward();
}

void goForward() {
  leftMotorForward();
  rightMotorForward();
}

void turnLeft() {
  rightMotorForward();
  leftMotorBackward();
}

void turnRight() {
  leftMotorForward();
  rightMotorBackward();
}