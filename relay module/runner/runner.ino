
const int relay1=14;
const int relay2=12;
const int relay3=13;
const int relay4=15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //here LOW will switch on the relay channel and HIGH will switch off the relay channel
Serial.println("Switching on relay1");
digitalWrite(relay1,LOW);
Serial.println("Switching on relay2");
digitalWrite(relay2,LOW);
Serial.println("Switching on relay3");
digitalWrite(relay3,LOW);
Serial.println("Switching on relay4");
digitalWrite(relay4,LOW);
delay(7000);
Serial.println("Switching off relay1");
digitalWrite(relay1,HIGH);
Serial.println("Switching off relay2");
digitalWrite(relay2,HIGH);
Serial.println("Switching off relay3");
digitalWrite(relay3,HIGH);
Serial.println("Switching off relay4");
digitalWrite(relay4,HIGH);
delay(7000);
}
