#pragma once
#include "SDL.h"
#include "RedCommand.h"
#include "BlueCommand.h"

class InputHandle
{
public:
	InputHandle();
	void handleInput(SDL_Event event);
	void bindCommand(Command* b, Command* r);
	// Methods to bind commands...

private:
	Command* buttonR_;
	Command* buttonB_;
	Command* buttonU_;
	Command* buttonRe_;
};