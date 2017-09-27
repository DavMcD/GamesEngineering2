#include "SDL.h"
#include "Command.h"
#include "InputHandle.h"
#include "BlueCommand.h"
#include "RedCommand.h"
#include "myWindow.h"



int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	//SDL_Window *window = SDL_CreateWindow("Command Pattern", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	//SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);


	myWindow wind = myWindow();
	SDL_Event event;
	bool running = true; 
	InputHandle handlr;

	BlueCommand* blue = new BlueCommand(wind);
	RedCommand* red = new RedCommand(wind);
	handlr.bindCommand(blue, red);

	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			handlr.handleInput(event);
		}
	}

	return 0;
}