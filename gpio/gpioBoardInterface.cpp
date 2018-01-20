#include <iostream>
#include <wiringPi.h>
#include <unistd.h>

#include "gpioBoardInterface.h"
#include "gpioPinInterface.h"



using namespace std;

GPIOBoard::GPIOBoard()
{
	wiringPiSetup();
	
	for(int i = 0; i < MAX_NUM_OF_GPIO_PINS; i++)	//Init pin-list
	{
		GPIOBoard::pins[i] = new GPIOPin(i);
	}
};
