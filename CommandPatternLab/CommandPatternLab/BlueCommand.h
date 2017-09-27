#pragma once
#include "Command.h"
#include "SDL.h"

class BlueCommand : public Command
{
public:
	virtual void execute()
	{ 
		theWindow.makeBlue();
		/*SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);*/ 
	}
};

