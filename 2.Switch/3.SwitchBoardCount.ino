
#define LED_BOARD     2
#define SWITCH_BOARD  0

int CountSwitch=0;
bool FlagStatus=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BOARD, OUTPUT);  
  pinMode(SWITCH_BOARD, INPUT);
  
  // Initialize Serial Monotor Port
  Serial.begin(115200);
  }


void loop() {
  // put your main code here, to run repeatedly:

  bool StatusSwitch;

  // Input Switch
  StatusSwitch = digitalRead(SWITCH_BOARD);

  // Check Status
  if(StatusSwitch == LOW)
  {
    digitalWrite(LED_BOARD, HIGH);
    if(FlagStatus==0)
    {
      CountSwitch++;
      FlagStatus=1; 
   }
   Serial.println(CountSwitch);  
   
  }
  else
  {
    FlagStatus=0;
    digitalWrite(LED_BOARD, LOW);  
  }
//    delay(100);    
}
