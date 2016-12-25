// Test program for controlling servos with the tinyduino
// for Balloon Robot 

#include <Servo.h> 

Servo rightLeg;
Servo leftLeg;

void setup() {
  // put your setup code here, to run once:
  rightLeg.attach(9);
  //leftLeg.attach(10);
  rightLeg.write(0);
  //leftLeg.write(0);
}

void loop() {
 rightLeg.write(180);
 delay(1000);
 rightLeg.write(0);
 delay(1000);
 

}
