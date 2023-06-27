/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab4/src/Lab4.ino"
void setup();
void loop();
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);







void setup() {

  //initialize pins
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D3, OUTPUT);

  pinMode(D8, INPUT);


}

void loop() {

  if (digitalRead(D8)) {
    analogWrite(D7,0); 
    analogWrite(D6,0); 
    analogWrite(D3,0); 
  } else {
    analogWrite(D7,255); 
    analogWrite(D6,255); 
    analogWrite(D3,255); 
  }

}