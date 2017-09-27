#pragma once
#include "Command.h"
class RedCommand : public Command
{
public:
	RedCommand::RedCommand(myWindow window)
	{
		wind = &window;
	};
	virtual void execute() 
	{ 
		wind->makeRed();
		/*SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);*/ 
	}
private:
	myWindow* wind;
};

