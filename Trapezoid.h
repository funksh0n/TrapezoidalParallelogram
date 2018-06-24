#ifndef _TRAPEZOID_H_
	#define _TRAPEZOID_H_

#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <iostream>
#include <string>

class Trapezoid {
	public:
		Trapezoid();
		int Function();
		void Run();
		void CleanUp();
	private:
		SDL_Window* window;
		SDL_GLContext context;
		std::string name = "Trapezoid";
};

#endif

