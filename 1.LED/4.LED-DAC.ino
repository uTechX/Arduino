
#define DAC1 25

void setup() {
  Serial.begin(115200);
  
}
 
void loop() 
{
  int Value = 255; //255= 3.3V 128=1.65V
  
  //dacWrite(DAC1, Value);
  //delay(100);

  for(int i=0;i<255;i++)
  {
    dacWrite(DAC1, i);
    Serial.printf("The value is %d\n",i);
    delay(10);
  }
}
