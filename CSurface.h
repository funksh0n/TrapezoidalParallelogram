#ifndef _CSURFACE_H_
	#define _CSURFACE_H_

#include <SDL/SDL.h>

class CSurface {
	public:
		CSurface();
		static SDL_Surface* OnLoad(char* file);
		static bool OnDraw(SDL_Surface* dst, SDL_Surface* src, int x, int y);
};

#endif

