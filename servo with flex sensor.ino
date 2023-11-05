// C++ code
//
#include<Servo.h>
Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(7);
}

void loop()
{
  int angle_value=angle();
  Serial.println(angle_value);
  myServo.write(angle_value);
  
}

int angle()
{
  int sensor_value=analogRead(A0);
  //Serial.println(sensor_value);
  return map(sensor_value,682,275,0,180);
  
}