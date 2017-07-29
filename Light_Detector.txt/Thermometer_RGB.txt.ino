#include <math.h> 
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

int B = 4275; 
int R0 = 100000;
int pinTempSensor = A5;

void setup()   {
  
    Serial.begin(9600); 
    lcd.begin(16,2);
    lcd.setRGB(0, 0, 255);
    
    }

    void loop()   {

    float a = analogRead(A0);
    float green= a*500/1023;
    lcd.setRGB(0, green, 0);

    Serial.print("Level = ");     
    Serial.print(a);

    lcd.setCursor(0, 0);
    lcd.print("Level =");
    lcd.setCursor(0, 1);
    lcd.print(green);
   
    delay(1000);
    }

