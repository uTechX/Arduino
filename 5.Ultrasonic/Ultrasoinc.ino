

#define GPIO_TRIGER 16
#define GPIO_ECHO   17

int redLED = 13;                 // 빨간 LED 13번에 연결                  
int greenPin=10;                 // 초록 LED 10번에 연결
int threshold = 15;              // 거리 임계 값 설정


void setup() 
{
  pinMode(GPIO_TRIGER,OUTPUT);   // 5번에triger핀연결
  pinMode(GPIO_ECHO,INPUT);      // 4번 핀에 echo핀 연결
  
  Serial.begin(115200);            // 9600속도로 시리얼 통신 시작
}
 
void loop() 
{
//  초음파 센서로 거리 측정
  float Duration, Distance;
  digitalWrite(GPIO_TRIGER, HIGH);                                      
  delayMicroseconds(10);                                  
  digitalWrite(GPIO_TRIGER, LOW);                                     
  Duration =pulseIn(GPIO_ECHO, HIGH);                        // echo핀이 HIGH 유지한 시간 저장
  Distance =((float)(340 *Duration) /10000) /2;              // 거리를 cm로환산
 
// 측정한 거리 출력
  Serial.print(Distance);                     // 시리얼 창에 줄 바꿈 없이 거리 출력
  Serial.println("cm ");                       // 단위 출력
 
  delay(500);                      // 안정적으로 값을 읽기 위해 2000밀리초 지연
}
 
