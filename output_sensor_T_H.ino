#include <dht.h>

#include <TimeLib.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  //Serial.println("Temperature = ");  
  unsigned long currentTime = now(); // grab current time
  Serial.print(DHT.temperature);
  Serial.print(",");
  Serial.print(DHT.humidity);
  Serial.print(",");
  Serial.println(currentTime);
  delay(5000);
}

