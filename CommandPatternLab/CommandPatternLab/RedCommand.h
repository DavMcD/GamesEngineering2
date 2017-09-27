#pragma once
#include "Command.h"
class RedCommand : public Command
{
public:
	virtual void execute() 
	{ 
		theWindow.makeRed();
		/*SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);*/ 
	}
};

