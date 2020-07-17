void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
char val;
void loop() {
  if (Serial.available() > 0)
  {
    val = Serial.read();
    if (val == '0') {
      digitalWrite(13, LOW);
    }
    else if (val == '1') {
      digitalWrite(13, HIGH);
    }
    //if you want , you can also print the data on serial monitor of what you are inputting using print method.
  }
}
