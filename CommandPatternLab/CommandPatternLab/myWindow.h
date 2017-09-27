#pragma once
#include "SDL.h"
class myWindow
{
public:
	myWindow();
	~myWindow();
	void makeRed();
	void makeBlue();
private:
	SDL_Window *window;// = SDL_CreateWindow("Command Pattern", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer;// = SDL_CreateRenderer(window, -1, 0);

};

