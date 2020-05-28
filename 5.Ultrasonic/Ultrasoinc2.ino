#define TRIG 2  
#define ECHO 3   
long distance;  
int i,cnt_chk,sum_dist;  
  
void setup() {  
   Serial.begin(9600);  
   pinMode(TRIG, OUTPUT);  
   pinMode(ECHO, INPUT);  
}  
void loop() {  
   for ( i = 0; i < 5; i++ ) {   
        digitalWrite(TRIG, LOW);  
        delayMicroseconds(2);  //2uS 동안 멈춤  
        digitalWrite(TRIG, HIGH);  
        delayMicroseconds(10);  //10uS 동안 동작  
        digitalWrite(TRIG, LOW);  
        distance = pulseIn(ECHO, HIGH) * 0.017;  
        if ( distance > 0 )  {  
             cnt_chk++;  
             sum_dist = sum_dist + distance;  
        }  
   }   
   if ( cnt_chk > 0 ) {  
       distance = sum_dist / cnt_chk;  
       Serial.print("Distance=");  
       Serial.println(distance);    
    }  
 delay(500);  
}  
