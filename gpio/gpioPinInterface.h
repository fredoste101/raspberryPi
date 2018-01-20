#pragma once

//No pull-up/pull-down resistor-handling yet

class GPIOPin
{
	private:
		int pinNum;
		int mode;
		int output;
	public:
		GPIOPin(int pinNum);	//Num is wiringPi-numbering and mode is wiringPi-mode for pins
		
		void setMode(int mode);
		
		int getPinNum();
		int getMode();	//Returns wiringPi mode
		
		int getInput();	//For input-mode
		void setOutput(int value);	//For ouput-mode. value should be macro HIGH or LOW
		int getOutput();
		
};
