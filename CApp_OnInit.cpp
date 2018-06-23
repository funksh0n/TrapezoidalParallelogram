#include "CApp.h"

bool CApp::OnInit() {
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return false;
	}
	
	if((surface = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
		return false;
	}

	if((test = CSurface::OnLoad("test.bmp")) == NULL) {
		return false;
	}

	return true;
}

