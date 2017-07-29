#include <math.h> 
 
int B = 4275; 
double R0 = 100000;
int pinTempSensor = A5;

void setup()   { 
    }
 void loop()  {
    int a = analogRead(pinTempSensor); 
    float R = 1023.0/a-1.0; 
    R = R0*R; 
    float temperature = 1.0/(log(R/R0)/B+1/298.15)-273.15;
    }

