
#define LED_GPIO      15
#define SWITCH_GPIO   2


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_GPIO, OUTPUT);  
  pinMode(SWITCH_GPIO, INPUT);

  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int StatusSwitch;
  StatusSwitch = digitalRead(SWITCH_GPIO);
  
  if(StatusSwitch == LOW)
  {
    digitalWrite(LED_GPIO, LOW);

  }
  else
    digitalWrite(LED_GPIO, HIGH);  
    
   Serial.println(StatusSwitch);
}
