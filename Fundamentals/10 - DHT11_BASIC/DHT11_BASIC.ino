#include <DHT.h>

#define DHTPIN A0

#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 Temperature / Humidity Test "));
  dht.begin();
}

void loop() {
  delay(8000); //delay is applied for each consecutive readings for the sensor
  float humid = dht.readHumidity();
  float Temperature = dht.readTemperature();
  //celcius is default temperature for this method.
  //it can be converted to fahrenheit by providing a parameter " true "
  if (isnan(humid) || isnan(Temperature)){
    //check if bogus values are returned
    Serial.println(F("Failed to read from the DHT sensor"));
    return; //so the iteration doesn't continue
    }
  Serial.print(F("Humidity : "));
  Serial.println(humid);
  Serial.print(F("Temperature : "));
  Serial.print(Temperature);
  Serial.println(" celcius");
  Serial.println();
  
}
