#include <wiringPi.h>
#include "gpioPinInterface.h"


GPIOPin::GPIOPin(int pinNum)
{
	GPIOPin::pinNum = pinNum;
	GPIOPin::mode = !INPUT & !OUTPUT;	//There are more values, but they are special and apply only to special pins
	GPIOPin::output = !HIGH & !LOW;		//Neither to begin with
}

void GPIOPin::setMode(int mode)
{
		pinMode(GPIOPin::pinNum, mode);
}

int GPIOPin::getMode()
{
	return GPIOPin::mode;
}


int GPIOPin::getPinNum()
{
	return GPIOPin::pinNum;
}

void GPIOPin::setOutput(int value)
{
	GPIOPin::output = value;
	digitalWrite(GPIOPin::pinNum, value);
}

int GPIOPin::getOutput()
{
	return GPIOPin::output;
}
