#pragma once
#include"Global_headers.h"
#include"Sprite.h"
#include"Setup.h"
#include"Objects.h"


class Diamond : public Objects
{
private:
	
	Sprite* diamond;
	int timeCheck = SDL_GetTicks();
	Setup *setup;
public:
	Diamond(Setup *passed_Setup, int x, int y);
	~Diamond();
	void Update();
	void Draw();
	Sprite* GetDiamonds() { return diamond; }
};

