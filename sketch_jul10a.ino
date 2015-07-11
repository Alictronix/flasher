void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//big pause on pin 12
  digitalWrite(12,HIGH);
  delay(200);
  digitalWrite(12,LOW);
  delay(25);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
 delay(25);
  digitalWrite(10,HIGH);
  delay(100);
  digitalWrite(10,LOW);
 delay(25);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,LOW);
 delay(25);
// big pause on pin 8
digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
 delay(25);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,LOW);
 delay(25);
  digitalWrite(10,HIGH);
  delay(100);
  digitalWrite(10,LOW);
 delay(25);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
 delay(25);

}
