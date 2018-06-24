#include "Trapezoid.h"

Trapezoid::Trapezoid() {
	Debug::Log("Trapezoid constructor... ", __LINE__);
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		Debug::Log("Failed to init SDL", __LINE__);
		return;
	}

	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);

	if(!window) {
		Debug::Log("Failed to create window", __LINE__);
		return;
	}

	context = SDL_GL_CreateContext(window);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetSwapInterval(1);
	
	glClearColor(0.0, 1.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	SDL_GL_SwapWindow(window);

	Debug::Log("done!", __LINE__);
}

void Trapezoid::CleanUp() {
	Debug::Log("Trapezoid::CleanUp()... ", __LINE__);
	SDL_GL_DeleteContext(context);
	SDL_DestroyWindow(window);
	SDL_Quit();
	Debug::Log("done!", __LINE__);
}

void Trapezoid::Run() {
	Debug::Log("Trapezoid::Run()... ", __LINE__);
	bool run = true;
	while(run) {
		SDL_Event event;
		while(SDL_PollEvent(&event)) {
			if(event.type == SDL_KEYDOWN) {
				switch(event.key.keysym.sym) {
					case SDLK_ESCAPE:
						run = false;
						break;
				}
			} else {
				run = !(event.type == SDL_QUIT);
			}

		}
	}
	Debug::Log("done!", __LINE__);
}

int main(int argc, char* argv[]) {
	Trapezoid trap;
	trap.Run();
	trap.CleanUp();
}

