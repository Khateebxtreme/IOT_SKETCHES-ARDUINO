void setup() {
  #define push_but 12
  #define green 3
  #define yellow 5
  #define red 6
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(push_but,INPUT);
  digitalWrite(green,HIGH);
}
void loop(){
    if(digitalRead(push_but)==HIGH){
      changeLights();
      delay(14000);
    }
}

void changeLights(){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
