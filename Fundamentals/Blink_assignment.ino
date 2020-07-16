void setup() {
  pinMode(13, OUTPUT);
  
}
int counter = 0; //for countering the number of blinks
void loop() {
  while (counter < 5) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    counter++;
  }
  while (counter > 0) {
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
    counter--;
  }
}
