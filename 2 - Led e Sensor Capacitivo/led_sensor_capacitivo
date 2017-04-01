#include <CapacitiveSensor.h>

CapacitiveSensor cs_2_3 = CapacitiveSensor(2,3); 

void setup()                    
{
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  pinMode(10, OUTPUT);    
  Serial.begin(9600);
}

void loop()                    
{  
  long start = millis();
  long total1 =  cs_2_3.capacitiveSensor(30);

  if (total1 > 150) {digitalWrite(10, HIGH);}
  if (total1<=150 ){digitalWrite(10, LOW);}

}
