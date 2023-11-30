#include <IRremote.h>

const int RECV_PIN = 7;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
}
 
void loop() {   
  // put your main code here, to run repeatedly:
   if (IrReceiver.decode()){
 Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
 IrReceiver.resume(); 
  }
}
