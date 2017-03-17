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
	
	while(1) {
		if(digitalRead(ButtonPin) == 0) {
			
			system("raspistill -o newImage.jpg");
			cout << "have taken a picture ... "<< endl;
			system("mail -A newImage.jpg -s 'DoorBell' yourname@gmail.com < message.txt");
			}
		}

return 0;
}
