#ifndef _CAPP_H_
	#define _CAPP_H_

#include <SDL/SDL.h>

class CApp {
	private:
		bool running;

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

