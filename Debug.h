#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <SDL2/SDL.h>
#include <iostream>
#include <string>

class Debug {
	public:
		Debug();
		static void Log(std::string, int);
};
#endif

