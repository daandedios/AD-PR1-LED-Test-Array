//Developer:  Daan de Dios
//Date:       2019-02-17
//function:   LED Test Array Delay

//  -----!! This script turns all LEDs ON !!-----
// 


//----------------------global vars----------------------------------
int ledPins[] = {2, 3, 4, 5};
int ledCount = 4;
//----------------------end-global vars------------------------------


//setup runs once, when the Arduino is first oiwerd on.
void setup() {
  for (int i = 0; i < ledCount; i ++) {
    pinMode(ledPins[i], OUTPUT);
  }
}


//loop runs continuously after the setup() has completed.
void loop() {
  for (int i = 0; i < ledCount; i++){
    delay(300);
    digitalWrite(ledPins[i], HIGH);
    delay(200);
  }

  delay(400);

  for (int x = ledCount; x >= 0; x--){
    digitalWrite(ledPins[x], LOW);
    delay(20);  
  }
}