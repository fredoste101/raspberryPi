#pragma once
#include "gpioPinInterface.h"
#include <wiringPi.h>
#include <unistd.h>

#define MAX_NUM_OF_GPIO_PINS 32

class GPIOBoard
{
	private:
		
	public:
		GPIOBoard();
		GPIOPin * pins[MAX_NUM_OF_GPIO_PINS];	//Maybe make this public so easy access?
		
		
		
	//Can handle pins: turn on/off, and get status of pin

};
