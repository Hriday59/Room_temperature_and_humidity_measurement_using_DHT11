// #include <LiquidCrystal.h>

#include <dht11.h>
dht11 DHT;
#define DHT11_PIN 4

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  int readData = DHT.read(4); 
    float t = DHT.temperature;
    float h = DHT.humidity;
    Serial.print("Temperature = ");
    Serial.print(t);
    Serial.print(" C ");
    Serial.print("    Humidity = ");
    Serial.print(h);
    Serial.println(" % ");
  
  delay(3000);

}
