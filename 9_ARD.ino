int led1=10;
int led2=11;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  for(int a=0;a<=200;a++) {
    analogWrite(led1,a);
    delay(100);
    analogWrite(led2,a);
    delay(100);
    for(int a=100;a>=0;a-=10){
      analogWrite(led1,a);
      delay(200);
      analogWrite(led2,a);
      delay(200);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedl:

}
