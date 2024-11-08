#include <DHT.h>
DHT dht(5, DHT11);

void setup(){
dht.begin();
Serial.begin (115200);
}

void loop() {
float h = dht.readHumidity();
float t = dht.readTemperature();

Serial.print("Humidity: ");
Serial.println(h);
Serial.print("Temperature: ");
Serial.println(t);
}
