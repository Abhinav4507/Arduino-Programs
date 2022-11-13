void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for (int a=1;a<=10;a++)
{ 
  Serial.print(a);
  Serial.print(".");
  Serial.println(" HELLO WORLD");
   
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
