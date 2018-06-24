#include "Trapezoid.h"

Trapezoid::Trapezoid() {
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

	std::cout << "Trapezoid constructed\n";
}

void Trapezoid::CleanUp() {
}

void Trapezoid::Run() {
}

int main(int argc, char* argv[]) {
	Trapezoid trap;
}

