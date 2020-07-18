void setup(){
  pinMode(A0,INPUT);
  pinMode(4,OUTPUT);
}
void loop(){
  /*as the range is between 0 to 1024 so a quarter of the max
    range can be considered as sufficiently dark i.e 256*/
  digitalWrite(4,LOW);//normal state reset at every iteration
  if(analogRead(A0)<256){
    digitalWrite(4,HIGH);
  }
}
