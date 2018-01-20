#pragma once

#include "gpioPinInterface.h"
#include <time.h>

/*
struct timespec 
{
	time_t tv_sec;	/* seconds */
//  long   tv_nsec;	/* nanoseconds */
//};

class GPIOSignal	
{
	private:
	
	public:
		GPIOSignal(GPIOPin * pin);	//Takes as input a pin in output-mode.
		
		void pwm(int period);	//Creates a simple Pulse Width Modulation signal.
		
};
