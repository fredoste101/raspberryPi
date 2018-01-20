#include "gpioSignaling.h"
#include <wiringPi.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

GPIOSignal::GPIOSignal(GPIOPin * pin)
{
	if(pin->getMode() != OUTPUT)
	{
		cout << "Pin must be in ouput-mode for signaling!" << endl;
		exit(1);
	}
}

void GPIOSignal::pwm(int period)	//Period in what, milliseconds?
{
	
}
