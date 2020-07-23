#include <EEPROM.h>
void setup() 
{
  Serial.begin(9600);
}
  int addr;
  int data;

void loop() 
{
  String userInp=Serial.readString();
  if(userInp.startsWith("read")) {
    addr = userInp.substring(userInp.indexOf(' ') +1).toInt();
    Serial.print("Get data from this address  -> ");
    Serial.print(addr);
    Serial.println();
    Serial.println(EEPROM.read(addr)); 
} 
else if(userInp.startsWith("write")) {
    addr = userInp.substring(6,7).toInt();
    data = userInp.substring(8).toInt();
    Serial.print("The address where we want to put the data -> ");
    Serial.print(addr);
    Serial.println("\nThe data inserted at the above address -> ");
    Serial.print(data);
    Serial.println();
    EEPROM.write(addr,data); 
}
}
       
  
