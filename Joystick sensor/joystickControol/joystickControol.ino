//taking in the input from a joystick module
const int sw_Pin=12;
const int y_Pin=A0;
const int x_Pin=15;
//since node mcu only have one ANALOG inout therefore need to use arduni baord with software interfacing for getting the input
void setup()
{
  pinMode(sw_Pin,INPUT);
  digitalWrite(sw_Pin,HIGH);
  Serial.begin(115200);
  }

 void loop()
 {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(sw_Pin));
  Serial.print(" | ");
  Serial.print("X-axis: ");
  Serial.print(digitalRead(x_Pin));
  Serial.print(" | ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(y_Pin));
  Serial.println(" | ");
  delay(200);
  }
