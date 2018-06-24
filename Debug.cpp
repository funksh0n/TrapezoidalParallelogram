#include "Debug.h"

Debug::Debug() {
}

void Debug::Log(std::string str, int line = -1) {
	if(line != -1) {
		std::cout << line << ": ";
	}
	std::string err = SDL_GetError();
	if(err != "") {
		std::cout << "SDL Error: " << err << std::endl;
	}
	std::cout << str << std::endl;
}

