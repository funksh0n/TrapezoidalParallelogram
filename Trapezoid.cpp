#include "Trapezoid.h"

Trapezoid::Trapezoid() {
	std::cout << "Trapezoid constructor... ";
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "Failed to init SDL\n";
		return;
	}

	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);

	if(!window) {
		std::cout << "Failed to create window\n";
		//CheckSDLError(__LINE__);
		return;
	}

	context = SDL_GL_CreateContext(window);
	SDL_GL_SetSwapInterval(1);

	std::cout << "done!\n";
}

void Trapezoid::CleanUp() {
	std::cout << "Trapezoid::CleanUp()... ";
	SDL_GL_DeleteContext(context);
	SDL_DestroyWindow(window);
	SDL_Quit();
	std::cout << "done!\n";
}

void Trapezoid::Run() {
}

int main(int argc, char* argv[]) {
	Trapezoid trap;
	trap.CleanUp();
}

