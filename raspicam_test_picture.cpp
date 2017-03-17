#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

using namespace std;

int main(void)
{
	setenv("WIRINGPI_GPIOMEM", "1", 1);
	wiringPiSetup();

system("raspistill -o newImage.jpg");
cout << "have taken a picture ... "<< endl;

return 0;
}


