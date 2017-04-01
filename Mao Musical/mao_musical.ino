 
#include <CapacitiveSensor.h>
#define speaker A4

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);  
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);        
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);        
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);        
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);   
        
void setup(){
  Serial.begin(9600);
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
}

void loop(){
  long total1 =  cs_2_3.capacitiveSensor(30);
  long total2 =  cs_2_4.capacitiveSensor(30);
  long total3 =  cs_2_5.capacitiveSensor(30);
  long total4 =  cs_2_6.capacitiveSensor(30);
  long total5 =  cs_2_7.capacitiveSensor(30);
  long total6 =  cs_2_8.capacitiveSensor(30);
  long total7 =  cs_2_9.capacitiveSensor(30);
  long total8 =  cs_2_10.capacitiveSensor(30);
  
  if (total1>1000){tone(speaker, 261.63);} 
  if (total2>1000){tone(speaker, 293.66);}  
  if (total3>1000){tone(speaker, 329.63);} 
  if (total4>1000){tone(speaker, 349.23);}
  if (total5>1000){tone(speaker, 392);} 
  if (total6>1000){tone(speaker, 440);}
  if (total7>1000){tone(speaker, 493.88);} 
  if (total8>1000){tone(speaker, 523.25);}

  if (total1<=1000 & total2<=1000 & total3<=1000 & 
      total4<=1000 & total5<=1000 & total6<=1000 & 
      total7<=1000 & total8<=1000){  
  noTone(speaker);}
}


