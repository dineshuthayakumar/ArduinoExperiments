int lmt1 = 3;
int lmt2 = 5;
int rmt1 = 6;
int rmt2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  goForward();
  delay(1000);
  goBackward();
  delay(1000);
}

void goForward() {
  analogWrite(lmt1, 150);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 150);
}

void goBackward() {
  analogWrite(lmt1, 150);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 150);
  analogWrite(rmt2, 0);
}
