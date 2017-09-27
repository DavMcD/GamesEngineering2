#include "myWindow.h"



myWindow::myWindow()
{
	window = SDL_CreateWindow("Command Pattern", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
}


myWindow::~myWindow()
{
}

void myWindow::makeRed()
{
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
}

void myWindow::makeBlue()
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
}
