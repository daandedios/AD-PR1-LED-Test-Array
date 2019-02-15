//Developer:  Daan de Dios
//Date:       2019-02-15
//function:   LED Test Array


//----------------------global vars----------------------------------
int ledPins[] = {2, 3, 4, 5};
int ledCount = 4;


//----------------------end-global vars------------------------------




//setup runs once, when the Arduino is first oiwerd on.
void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}


//loop runs continuously after the setup() has completed.
void loop() {
  for (int i = 0; i < ledCount; i++) {
    // turn the pin on:
    digitalWrite(ledPins[i], HIGH);
  }
}
