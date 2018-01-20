#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "gpioBoardInterface.h"

using namespace std;

int main()
{
	cout << "Test driver for gpio-board" << endl;
	
	GPIOBoard * gpio = new GPIOBoard();
	
	auto pin0 = gpio->pins[0];
	
	pin0->setMode(OUTPUT);
	
	const timespec t {0, 99999};
	
	
	while(true)
	{
		pin0->setOutput(HIGH);
		nanosleep(&t, NULL);
		pin0->setOutput(LOW);
		nanosleep(&t, NULL);
		
	}
	
	
	return 0;
}
