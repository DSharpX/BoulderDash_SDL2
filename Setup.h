#pragma once
#include"Global_headers.h"

class Setup
{
private:
	
	SDL_Window *_window=NULL;
	SDL_Renderer *_renderer=NULL;
	SDL_Event *mEvent = new SDL_Event();
	
public:
	Setup(int przekazywany_screenwidth, int przekazywany_screeheight);
	~Setup();
	SDL_Renderer *GetRenderer();
	SDL_Event *GetEvent();
	void begin();
	void end();

};

