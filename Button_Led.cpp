#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

#define LedPin 0
#define ButtonPin 1

using namespace std;

int main(int argc, char **argv)
{
	setenv("WIRINGPI_GPIOMEM", "1", 1);
	wiringPiSetup();
	
	pinMode(LedPin, OUTPUT);
	pinMode(ButtonPin, INPUT);
	
	/* pull up to 3.3V or 5V, gives GPIO1 more stability */
	pullUpDnControl(ButtonPin, PUD_UP);
	while(1) {
		digitalWrite(LedPin, HIGH);
		if(digitalRead(ButtonPin) == 0) {
			digitalWrite(LedPin, LOW);
			
		}
	}
	return 0;
}
	
