#ifndef _CAPP_H_
	#define _CAPP_H_

#include <SDL/SDL.h>
#include "CSurface.h"

class CApp {
	private:
		bool running;
		SDL_Surface* surface;
		SDL_Surface* test;

	public:
		CApp();
		int OnExecute();
		bool OnInit();
		void OnEvent(SDL_Event* event);
		void OnLoop();
		void OnRender();
		void OnCleanup();
};

#endif

