#pragma once
#include "Command.h"
#include "SDL.h"

class BlueCommand : public Command
{
public:
	BlueCommand::BlueCommand(myWindow window) 
	{
		wind = &window;
	};
	virtual void execute()
	{ 
		wind->makeBlue();
	}
private:
	myWindow* wind;
};

