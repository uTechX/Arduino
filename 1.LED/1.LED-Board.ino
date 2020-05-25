
#define LED_BOARD 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BOARD, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BOARD, LOW);
  delay(1000);

  digitalWrite(LED_BOARD, HIGH);
  delay(1000);
  
}
