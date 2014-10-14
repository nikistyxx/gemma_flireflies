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

//#define SWITCH 0
//#define LED 1
int LED = 0;           // the pin that the LED is attached to
int LED1 = 1;           // the pin that the LED is attached to
int LED2 = 2;           // the pin that the LED is attached to
int fadeAmount = 5;    // how many points to fade the LED by
int brightness = 0;    // how bright the LED is
int fadeAmount1 = 7;    // how many points to fade the LED by
int brightness1 = 0;    // how bright the LED is
int fadeAmount2 = 10;    // how many points to fade the LED by
int brightness2 = 0;    // how bright the LED is

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize the LED pin as an output.
  pinMode(LED, OUTPUT);
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
//  if (! digitalRead(SWITCH)) {  // if the button is pressed
   // set the brightness of pin 9:
  analogWrite(LED, brightness);  
  delay(100); 
   analogWrite(LED1, brightness1);
  delay(50);  
   analogWrite(LED2, brightness2);   

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
   brightness1 = brightness1 + fadeAmount1;
    brightness2 = brightness2 + fadeAmount2;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // reverse the direction of the fading at the ends of the fade: 
  if (brightness1 == 0 || brightness1 == 255) {
    fadeAmount1 = -fadeAmount1 ; 
  }
  // reverse the direction of the fading at the ends of the fade: 
  if (brightness2 == 0 || brightness2 == 255) {
    fadeAmount2 = -fadeAmount2 ; 
  }
  // wait for 30 milliseconds to see the dimming effect    
  delay(30); 
}//loop
 

