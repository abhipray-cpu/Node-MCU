const int PIN=12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(PIN));

}
