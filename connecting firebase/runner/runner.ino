//in this sketch I will be connectin node mcu to a firebase real time database for storing and readning data
//change the frequency of your network to 2.4 ghz in order to connect node mcu
#include<FirebaseESP8266.h>
#include<ESP8266WiFi.h>

#define WIFI_SSID "Heavy Driver"
#define WIFI_PASSWORD "maakabhosda"
#define FIREBASE_AUTH "J7zZWSjFYt1VW2h3Y6SgGz8JW7okCe1qrYYEnEe0"
#define FIREBASE_HOST "channel-relay-control-3a865-default-rtdb.asia-southeast1.firebasedatabase.app/"
FirebaseData firebaseData;
FirebaseJson json;

void setup() {
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

   Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
  }

void loop() {

Serial.println("Roopa ki maa ka bhosda");

}
