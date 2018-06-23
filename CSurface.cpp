#include "CSurface.h"

CSurface::CSurface() {
}

SDL_Surface* CSurface::OnLoad(char* file) {
	SDL_Surface* temp = NULL;
	SDL_Surface* surface = NULL;

	if((temp = SDL_LoadBMP(file)) == NULL) {
		return NULL;
	}

	surface = SDL_DisplayFormat(temp);
	SDL_FreeSurface(temp);

	return surface;
}


bool CSurface::OnDraw(SDL_Surface* dst, SDL_Surface* src, int x, int y) {
	if(dst == NULL || src == NULL) {
		return false;
	}

	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	SDL_BlitSurface(src, NULL, dst, &rect);

	return true;
}

bool CSurface::OnDraw(SDL_Surface* dst, SDL_Surface* src, int x, int y, int x2, int y2, int w, int h) {
	if(dst == NULL || src == NULL) {
		return false;
	}

	SDL_Rect src_rect;
	src_rect.x = x2;
	src_rect.y = y2;
	src_rect.w = w;
	src_rect.h = h;
	SDL_Rect dst_rect;
	dst_rect.x = x;
	dst_rect.y = y;
	SDL_BlitSurface(src, &src_rect, dst, &dst_rect);

	return true;
}

