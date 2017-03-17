#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

#define  BuzzerPin  0
#define  TiltPin    1

using namespace std;

int main(void)
{
        setenv("WIRINGPI_GPIOMEM", "1", 1);
        wiringPiSetup();

        pinMode(TiltPin, INPUT);
        pinMode(BuzzerPin, OUTPUT);
        pullUpDnControl(TiltPin, PUD_UP);

        while(1){
                if(1 == digitalRead(TiltPin)){
                        digitalWrite(BuzzerPin, LOW);
                }
                else{
                        digitalWrite(BuzzerPin, HIGH);
                }
        }

        return 0;
}

