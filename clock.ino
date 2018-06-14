#include <SoftwareSerial.h>

//int bluetoothRx = 8;
//int bluetoothTx = 9;
int val;

//SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 /* if(bluetooth.available()){
    val = (int)bluetooth.read();
  }*/

  if(Serial.available()){
    val = Serial.read();
    }

  if(val=='1'){
   digitalWrite(7,HIGH);
   }
   
   if(val=='2'){
   digitalWrite(7,LOW);
   }

   if(val=='3'){
   digitalWrite(8,HIGH);
   }
   
   if(val=='4'){
   digitalWrite(8,LOW);
   }
}
