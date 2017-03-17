#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

#define ButtonPin 1

using namespace std;

int main(void)
{
	setenv("WIRINGPI_GPIOMEM", "1", 1);
	wiringPiSetup();
	
	pinMode(ButtonPin, INPUT);
	pullUpDnControl(ButtonPin, PUD_UP); 

while(1){
	//indicate that button has pressed down
	if(digitalRead(ButtonPin) == 0){ 
		system("raspistill -o newImage.jpg");
		cout << "Taken a picture" << endl;
		}
	}
return 0;	
}
