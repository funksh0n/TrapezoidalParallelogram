#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(surface, test, 0, 0);
	SDL_Flip(surface);
}

