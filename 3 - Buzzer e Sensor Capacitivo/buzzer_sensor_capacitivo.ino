#include <CapacitiveSensor.h>
#define speaker A4
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        

void setup(){
  Serial.begin(9600);
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
}

void loop(){
  long total1 =  cs_2_3.capacitiveSensor(30);
  if (total1>1000){
    tone(speaker, 300);}
  else{
    noTone(speaker);}
}
