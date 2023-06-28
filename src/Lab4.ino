
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