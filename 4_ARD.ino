int led =13;
int led2 = 10;
int led3 = 7;
void setup() {
  // put your setup code here, to run once:
pinMode (led, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(1000);
digitalWrite(led, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(1000);
digitalWrite(led, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(1000);
}
