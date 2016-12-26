// Test program for controlling servos with the tinyduino
// for Balloon Robot 

#include <Servo.h> 

Servo rightLeg;
Servo leftLeg;

//const int R_PIN= 1;
const int L_PIN=2;

const int EXTENDED=155;
const int RETRACTED=0;


void setup() {
  // put your setup code here, to run once:
  //rightLeg.attach(R_PIN);
  leftLeg.attach(L_PIN);
 // rightLeg.write(EXTENDED);
  delay(100);
  leftLeg.write(EXTENDED);
}

void loop() {
 //rightLeg.write(RETRACTED);
 leftLeg.write(EXTENDED);
 delay(1500);
 //rightLeg.write(EXTENDED);
 //leftLeg.write(RETRACTED);
 //delay(1500);

}
