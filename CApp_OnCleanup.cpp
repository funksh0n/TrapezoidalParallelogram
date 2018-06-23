#include "CApp.h"

void CApp::OnCleanup() {
	surface = NULL;
	test = NULL;

	SDL_Quit();
}

