// Game Programming Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SDL.h"
#include <cstdio>
//int main()
//{
//    std::cout << "Hello World!\n";
//}

//Creating a window using SDL
int main(int argc, char  *argv[]) {
	//if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
	//	return 0;
	//}

	////Created the window, with the title of c++ testing, the positon of 250,250 and the size of 1280 x 720
	//SDL_Window* window = SDL_CreateWindow("C++ Testing", 250, 250, 1280, 720, SDL_WINDOW_SHOWN);
	////Creates a renderer that is used to draw things in the window
	//SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	////Setting the render color to red and then clearing the screen with the color (makes the window red)
	//SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	//SDL_RenderClear(renderer);

	////Sets the render color to blue and then created a rectangle with the positon of 100x100 and the size of 300x300 and then draws it on the window.
	//SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
	//SDL_Rect r;
	//r.x = 100;
	//r.y = 100;
	//r.w = 300;
	//r.h = 300;
	//SDL_RenderDrawRect(renderer, &r);

	//SDL_RenderPresent(renderer);

	//SDL_Delay(1000);
	//r.x = 300;
	//SDL_RenderDrawRect(renderer, &r);

	//SDL_Delay(4000);

	int age = 19;
	int printTimes = 5;

	printf("\nAge: %d", age);

	printf("\n");

	int xPrintTimes = 5;
	for (int i = 0; i < xPrintTimes; i++) {
		printf("%0*d\n", xPrintTimes, 0);
	}

	printf("\n");

	int xPrintTimes1 = 5;
	for (int i = 0; i < xPrintTimes1; i++) {
		printf("%0*d\n", xPrintTimes1-i, 0);
	}

	printf("\n2D ARRAY\n");

	int nums[5][5] = { {0} };
	char numsOut[5][5];

	//Creating the array
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int num = rand() % 2;
			std::cout << num;
			nums[i][j] = num;
		}
	}

	std::cout << "\n";
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (nums[i][j] == 0) {
				numsOut[i][j] = ' ';
			}
			else {
				numsOut[i][j] = '*';
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << nums[i][0] << " " << nums[i][1] << " " << nums[i][2] << " " << nums[i][3] << " " << nums[i][4] << "\n";
	}
	std::cout << "\n";
	for (int i = 0; i < 5; i++) {
		std::cout << numsOut[i][0] << " " << numsOut[i][1] << " " << numsOut[i][2] << " " << numsOut[i][3] << " " << numsOut[i][4] << "\n";
	}

	return 0;
}
