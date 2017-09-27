#include "InputHandle.h"

InputHandle::InputHandle()
{
	//bindCommand();
}

void InputHandle::handleInput(SDL_Event event)
{
	if (event.key.keysym.sym == SDLK_r)
	{
		buttonR_->execute();
	}
	if (event.key.keysym.sym == SDLK_b)
		buttonB_->execute();
	/*else if (SDLK_u)
		buttonU_->execute();
	else if (SDLK_SPACE)
		buttonRe_->execute();*/
}

void InputHandle::bindCommand(Command* b, Command* r)
{
	buttonR_ = r;
	buttonB_ = b;
	//buttonU_ = new RedCommand;
	//buttonRe_ = new RedCommand;

}