#include <Arduino.h>
int JoyStick_x = 27;
int JoyStick_y = 14;
int JoyStick_z = 12;
void setup() {
  pinMode(JoyStick_x,INPUT);
  pinMode(JoyStick_y,INPUT);
  pinMode(JoyStick_z,INPUT);
  Serial.begin(115200);
  // put your setup code here, to run once:
}

void loop() {
  int x,y,z;
  x=analogRead(JoyStick_x);
  y=analogRead(JoyStick_y);
  z=digitalRead(JoyStick_z);
  Serial.print(x,DEC);
  Serial.print(",");
  Serial.print(y,DEC);
  Serial.print(",");
  Serial.println(z,DEC);
  delay(100);


  // put your main code here, to run repeatedly:
}