#pragma once
#include "SDL.h"
#include "RedCommand.h"
#include "BlueCommand.h"

class InputHandle
{
public:
	InputHandle();
	void handleInput();
	void bindCommand();
	// Methods to bind commands...

private:
	Command* buttonR_;
	Command* buttonB_;
	Command* buttonU_;
	Command* buttonRe_;
};