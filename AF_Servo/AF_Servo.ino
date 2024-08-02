#include <AFMotor.h>
#include <Servo.h>
int spin =10;
int sposition = 120 ; // position
int intial = 0;
Servo luna; ////giving name to servo
String msg = "Enter your angle : " ,msg2="my anlge is ";

void setup()
{
  Serial.begin(9600);
  luna.attach(spin);//Attached to which pin
}

void loop()
{
  Serial.println(msg);
  
 
  while(Serial.available() == 0 ){
  }
 sposition = Serial.parseInt();
   luna.write(sposition);
   delay(2000);
  luna.write(intial);
  Serial.print(msg2);
  Serial.println(sposition);
  
}
