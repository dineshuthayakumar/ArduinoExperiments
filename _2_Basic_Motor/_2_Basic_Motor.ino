void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, 150);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(11, 150);
}
