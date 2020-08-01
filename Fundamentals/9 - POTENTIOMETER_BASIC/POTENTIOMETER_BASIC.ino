void setup()
{
  pinMode(A0, INPUT);
  pinMode(13,OUTPUT);
  //default led is used
}
int SensorRead;
void loop()
{
  SensorRead=analogRead(A0);
  if(SensorRead>400)
    digitalWrite(13,HIGH);
  else{
    digitalWrite(13,LOW);
  }
}
