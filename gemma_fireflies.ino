/*
  Button
  Turns on an LED when a switch connected from #0 to ground is pressed
 
  This example code is in the public domain.

  To upload to your Gemma or Trinket:
  1) Select the proper board from the Tools->Board Menu
  2) Select USBtinyISP from the Tools->Programmer
  3) Plug in the Gemma/Trinket, make sure you see the green LED lit
  4) For windows, install the USBtiny drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds
*/

#define SWITCH 0
//#define LED 1
int LED = 1;           // the pin that the LED is attached to
int fadeAmount = 5;    // how many points to fade the LED by
int brightness = 0;    // how bright the LED is

// the setup routine runs once when you press reset:
void setup() {
  // initialize the LED pin as an output.
  pinMode(LED, OUTPUT);
  // initialize the SWITCH pin as an input.
  pinMode(SWITCH, INPUT);
  // ...with a pullup
  digitalWrite(SWITCH, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  if (! digitalRead(SWITCH)) {  // if the button is pressed
   // set the brightness of pin 9:
  analogWrite(LED, brightness);    

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30); 
//    digitalWrite(LED, brightness);    // light up the LED
//     brightness = brightness + fadeAmount;
//    delay(500);
//   digitalWrite(LED, LOW);    // light up the LED
//   delay(200);
//    digitalWrite(LED, HIGH);    // light up the LED
//      delay(400);
//   digitalWrite(LED, LOW);    // light up the LED
//   delay(300);
//    digitalWrite(LED, HIGH);    // light up the LED
  } else {
    digitalWrite(LED, LOW);     // otherwise, turn it off
  }
 
}
