
#define LED_GPIO  15

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_GPIO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_GPIO, LOW);
  delay(1000);

  digitalWrite(LED_GPIO, HIGH);
  delay(1000);
  
}
