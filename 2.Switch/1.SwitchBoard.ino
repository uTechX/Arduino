
#define LED_BOARD     2
#define SWITCH_BOARD  0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BOARD, OUTPUT);  
  pinMode(SWITCH_BOARD, INPUT);

  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int StatusSwitch;
  StatusSwitch = digitalRead(SWITCH_BOARD);
  
  if(StatusSwitch == LOW)
  {
    digitalWrite(LED_BOARD, HIGH);
    Serial.println(StatusSwitch);
  }
  else
    digitalWrite(LED_BOARD, LOW);  
}
