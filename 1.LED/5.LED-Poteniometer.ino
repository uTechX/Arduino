
#define LED_GPIO            15
#define POTENTIOMETER_GPIO  0

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_GPIO, OUTPUT);

  // PWM Initialize 12 kHz PWM, 8-bit resolution
  ledcSetup(1, 12000, 8);
  ledcAttachPin(LED_GPIO, 1);
  
  // Initialize Serial Monitor 
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int BrightnessLED;
  int PotentiometerValue;
  
  PotentiometerValue=analogRead(POTENTIOMETER_GPIO);
  BrightnessLED=map(PotentiometerValue, 0, 4095, 0, 255);
  
  ledcWrite(1, BrightnessLED);
  Serial.println(BrightnessLED);

  /*
  for(i=0;i<255;i++)
  {
    BrightnessLED = 255-i;
    ledcWrite(1, BrightnessLED);
    delay(100);

    // output the value to serial monitor
    Serial.println(BrightnessLED);
  }
  */
}
