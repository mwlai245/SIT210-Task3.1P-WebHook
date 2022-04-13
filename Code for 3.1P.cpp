// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_DHT.h"
#define DHTTYPE DHT11 
#define DHTPIN A3
DHT dht(DHTPIN,DHT11);
int photodoide =A3; //Onboard  

void setup() {
  dht.begin();
}

void loop() {
  //String temp = String(random(60, 80));
  float temp=dht.getTempCelcius();
  Particle.publish("Temperature", String(temp), PRIVATE);
  delay(30000);               // Wait for 30 seconds
}