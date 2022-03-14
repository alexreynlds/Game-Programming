// Game Programming Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SDL.h"

//int main()
//{
//    std::cout << "Hello World!\n";
//}

//Creating a window using SDL
int main(int argc, char  *argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return 0;
	}

	SDL_Window* window = SDL_CreateWindow("Test", 250, 250, 800, 600, SDL_WINDOW_SHOWN);

	SDL_Delay(4000);

	return 0;
}
