#pragma once
#include"Global_headers.h"
#include"Sprite.h"
#include"Setup.h"
#include "Objects.h"

class Door: public Objects
{
private:

	Sprite* door;
	int timeCheck = SDL_GetTicks();
	Setup *setup;
public:
	Door(Setup *passed_Setup);
	~Door();
	void Update();
	void Draw();
};

