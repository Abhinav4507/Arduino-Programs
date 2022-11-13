int LMotor1=3;
int LMotor2=5;
int RMotor1=6;
int RMotor2=9;

void setup() {
  pinMode(LMotor1,OUTPUT);
  pinMode(LMotor2,OUTPUT);
  pinMode(RMotor1,OUTPUT);
  pinMode(RMotor2,OUTPUT);
}

void loop() {
  //Forward
  analogWrite(LMotor1,170);
  analogWrite(LMotor2,0);
  analogWrite(RMotor1,170);
  analogWrite(RMotor2,0);
delay(1000);
  //  Backword
  analogWrite(LMotor1,0);
  analogWrite(LMotor2,170);
  analogWrite(RMotor1,0);
  analogWrite(RMotor2,170);
 delay(1000);
  // Right
  analogWrite(LMotor1,170);
  analogWrite(LMotor2,0);
  analogWrite(RMotor1,170);
  analogWrite(RMotor2,0);
 delay(1000);
  // Left
  analogWrite(LMotor1,0);
  analogWrite(LMotor2,170);
  analogWrite(RMotor1,170);
  analogWrite(RMotor2,0);
 delay(1000);
}
