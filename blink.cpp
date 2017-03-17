//blink.cpp
//Blinking LED

#include <iostream>
#include <wiringPi.h>
/*
* <cstdlib> is needed for setenv
* which sets an environment variable in Linux
* uses the new wiringPi feature to run programs
* as user instead of root
*/
#include <cstdlib>
#define LedPin 0
using namespace std;

int main()
{
setenv("WIRINGPI_GPIOMEM", "1", 1);
wiringPiSetup();

pinMode(LedPin, OUTPUT);

while(3){
digitalWrite(LedPin, LOW); //led on
cout << "led on ..." << endl;
delay(500);
digitalWrite(LedPin, HIGH); //led off
cout << "... led off" << endl;
delay(500);
}
return 0;
}


