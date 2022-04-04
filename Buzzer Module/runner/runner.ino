int buzzer = 12; // set the buzzer control digital IO pin
void setup() {
  pinMode(buzzer, OUTPUT); // set pin 8 as output
 Serial.begin(115200);
}

void loop() {
  //sound1   
  Serial.println("This is sound1!");
  for (int i = 0; i < 80; i++) {  // make a sound
  digitalWrite(buzzer, HIGH); // send high signal to buzzer 
  delay(1); // delay 1ms
  digitalWrite(buzzer, LOW); // send low signal to buzzer
  delay(1);
  }
 delay(5000);
  
  //sound2
  Serial.println("This is sound2!");
  for (int j = 0; j < 100; j++) { //make another sound
  digitalWrite(buzzer, HIGH);
  delay(2); // delay 2ms
  digitalWrite(buzzer, LOW);
  delay(2);
   }
   delay(5000);

//sound3
Serial.println("This is sound3!");
for(int i =0;i<100;i++)
{
  digitalWrite(buzzer,HIGH);
  delay(10);
  digitalWrite(buzzer,LOW);
  delay(5000);
}

//sound4
Serial.println("This is sound4!");
for(int i=0;i<69;i++)
{
    digitalWrite(buzzer,LOW);
    delay(6);
    digitalWrite(buzzer,HIGH);
    delay(9);
 }
 delay(5000);

}
