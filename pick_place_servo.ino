/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.
//minimum angle of rotation is 45 degree.
 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);
}

void loop() {
  for (pos = 45; pos <= 90; pos += 1) { 
    myservo.write(pos);             
    delay(30);                      
  }          
  delay(1000); 
  for (pos = 90; pos >= 45; pos -= 1) {
    myservo.write(pos);              
    delay(30);                       
  }
  delay(1000);
    for (pos = 0; pos <= 90; pos += 1) { 
    // in steps of 1 degree
    myservo2.write(pos);              
    delay(15);                       
  }

   for (pos = 45; pos <= 90; pos += 1) { 
    myservo.write(pos);             
    delay(30);                      
  }          
  delay(1000); 
  for (pos = 90; pos >= 45; pos -= 1) {
    myservo.write(pos);              
    delay(30);                       
  }
  delay(1000);
  for (pos = 90; pos >= 0; pos -= 1) { 
    myservo2.write(pos);              
    delay(15);                       
  }
  delay(1000);
}
