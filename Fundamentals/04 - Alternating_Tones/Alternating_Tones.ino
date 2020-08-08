void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  tone(8,945,1000);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8,1012,1000);
  delay(1000); // Wait for 1000 millisecond(s)
}
