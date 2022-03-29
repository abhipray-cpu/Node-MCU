#include<ESP8266WiFi.h>
#define WIFI_SSID "Heavy Driver"
#define WIFI_PASSWORD "maakabhosda"
//this only works for 2.4 Ghz frequency
void setup() 
{
  Serial.begin(115200);                                                  
 WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
   
   Serial.println();
   Serial.print("Connected with IP: ");
   Serial.println(WiFi.localIP());
   Serial.println();

  
}
void loop()
{
  }
