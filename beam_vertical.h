#pragma once
#include"Global_headers.h"
#include"Setup.h"
#include"Sprite.h"
#include "Objects.h"

class beam_vertical:public Objects
{
private:

	Sprite *beam_v;
	Setup *setup;
public:
	beam_vertical(Setup *passed_Setup, int x, int y);
	~beam_vertical();
	void Draw();
	void Update();
	Sprite* GetBeamV() { return beam_v; }
};

