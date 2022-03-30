int buttonPin = 12;


bool buttonState = false;

void setup() {
  Serial.begin(115200);
pinMode(buttonPin,INPUT);
}
void loop() {
  
buttonState = digitalRead(buttonPin);

 if ( buttonState == true){
  Serial.println("The button is pressed");
 }
else {
  Serial.println("The button is not pressed");
}


}
