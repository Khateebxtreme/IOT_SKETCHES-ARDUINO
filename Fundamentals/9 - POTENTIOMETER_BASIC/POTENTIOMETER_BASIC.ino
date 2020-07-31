void setup()
{
  pinMode(A0, INPUT);
  pinMode(13,OUTPUT);
}
int SensorRead;
void loop()
{
  SensorRead=analogRead(A0);
  if(SensorRead>500)
    digitalWrite(13,HIGH);
  else{
    digitalWrite(13,LOW);
  }
}
