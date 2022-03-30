int redpin = 12; //select the pin for the red LED
int bluepin =13; // select the pin for the  blue LED
int greenpin = 15;// select the pin for the green LED
int val;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(115200);
}
void loop() 
{
  for(val = 255; val > 0; val--)
  {
    digitalWrite(redpin, val);  //set PWM value for red
    digitalWrite(bluepin, 255 - val); //set PWM value for blue
    digitalWrite(greenpin, 128 - val); //set PWM value for green
    Serial.println(val); //print current value 
    delay(1); 
  }
  for(val = 0; val < 255; val++)
  {
    digitalWrite(redpin, val);
    digitalWrite(bluepin, 255 - val);
    digitalWrite(greenpin, 128 - val);
    Serial.println(val);
    delay(1); 
  }
}
