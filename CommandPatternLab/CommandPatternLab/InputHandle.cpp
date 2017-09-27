#include "InputHandle.h"

InputHandle::InputHandle()
{
	bindCommand();
}

void InputHandle::handleInput()
{
	if (SDLK_r)
		buttonR_->execute();
	else if (SDLK_b)
		buttonB_->execute();
	else if (SDLK_u)
		buttonU_->execute();
	else if (SDLK_SPACE)
		buttonRe_->execute();
}

void InputHandle::bindCommand()
{
	buttonR_ = new RedCommand;
	buttonB_ = new BlueCommand;
	buttonU_ = new RedCommand;
	buttonRe_ = new RedCommand;

}