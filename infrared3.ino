#include <IRremote.h>

const int RECV_PIN = 7;

// Add three leds into your project

const int ledGreen = 6



void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);


  pinMode(ledGreen, OUTPUT);

}
 
void loop() {   
  // put your main code here, to run repeatedly:
   if (IrReceiver.decode()){
 int decoded = IrReceiver.decodedIRData.decd 