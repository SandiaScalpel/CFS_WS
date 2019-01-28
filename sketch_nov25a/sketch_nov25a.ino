#include <Arduino.h>

void setup() {
    pinMode(13, OUTPUT);
    blinks(2);
}

void loop() {
    
  
  for (int i=1; i <= 25; i++){
    for (int j=1; j <= i; j++){
      blinks(i);
    }
    delay(1500);
  }
}

void blinks(int d)
{
   digitalWrite(13, 1);
   delay(1000/d);
   digitalWrite(13, 0);
   delay(1000/d);
}
