#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(surface, test, 0, 0);
	CSurface::OnDraw(surface, test, 250, 250, 0, 0, 50, 50);
	SDL_Flip(surface);
}

