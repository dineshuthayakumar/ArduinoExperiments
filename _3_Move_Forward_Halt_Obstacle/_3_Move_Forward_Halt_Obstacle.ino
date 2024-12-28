int lmt1 = 3;
int lmt2 = 5;
int rmt1 = 6;
int rmt2 = 11;
int value = 75;
int sensor;

void setup() {
  // put your setup code here, to run once:
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(8);
  if(sensor == HIGH) {
      halt();
  }
  else {
    goForward();
  }
}

void halt() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}

void goLeft() {
  rightMotorHalt();
  leftMotorForward();
}

void goRight() {
  leftMotorHalt();
  rightMotorForward();
}

void goBackward() {
  leftMotorForward();
  rightMotorForward();
}

void goForward() {
  leftMotorBackward();
  rightMotorBackward();
}

void turnRight() {
  rightMotorForward();
  leftMotorBackward();
}

void turnLeft() {
  leftMotorForward();
  rightMotorBackward();
}

void leftMotorForward() {
  analogWrite(lmt1, value);
  analogWrite(lmt2, 0);
}

void leftMotorBackward() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, value);
}

void leftMotorHalt() {
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
}

void rightMotorForward() {
  analogWrite(rmt1, 0);
  analogWrite(rmt2, value);
}

void rightMotorBackward() {
  analogWrite(rmt1, value);
  analogWrite(rmt2, 0);
}

void rightMotorHalt() {
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}

