#include "Wire.h"
#include "hdc1080.h"

hdc1080 myhdc1080;
float temperature;
unsigned char humidity;


void setup()
{
  Serial.begin(115200);
  Serial.println("Test HDC 1080");
  myhdc1080.Init(Temperature_Resolution_14_bit,Humidity_Resolution_14_bit);
  

}

void loop()
{
  myhdc1080.Start_measurement(&temperature,&humidity);
  Serial.print("Temp = ");
  Serial.print(temperature);
  Serial.print("\tHumi = ");
  Serial.println(humidity);
  delay(500);

}
