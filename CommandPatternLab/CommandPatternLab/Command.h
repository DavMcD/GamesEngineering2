#pragma once
#include "myWindow.h"
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
protected:
	myWindow theWindow;
};