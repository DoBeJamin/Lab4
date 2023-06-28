/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab4/src/Lab4.ino"

void setup();
void loop();
#line 2 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {

  //initialize pins
  pinMode(D3, OUTPUT);

  pinMode(D8, INPUT);
  
}

void loop() {

  // Light on and off based on button
  digitalWrite(D3, digitalRead(D8));

}