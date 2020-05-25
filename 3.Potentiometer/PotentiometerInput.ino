

#define POTENTIOMETER_GPIO  0

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  int PotentiometerValue = analogRead(POTENTIOMETER_GPIO);
  Serial.println(PotentiometerValue);
  delay(100);
  
}
