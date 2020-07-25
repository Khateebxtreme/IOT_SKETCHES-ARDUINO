void setup() {
  #define green 3
  #define yellow 5
  #define red 6
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
}
void loop() {
 digitalWrite(red,HIGH);
 digitalWrite(yellow,LOW);
 digitalWrite(green,LOW);
 delay(5000);
 digitalWrite(red,LOW);
 digitalWrite(yellow,HIGH);
 digitalWrite(green,LOW);
 delay(2000);
 digitalWrite(green,HIGH);
 digitalWrite(yellow,LOW);
 digitalWrite(red,LOW);
 delay(1000);
}
