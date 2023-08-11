#pragma once
#include"Global_headers.h"
#include"Setup.h"
#include"Sprite.h"
#include"Objects.h"

class beam_horizontal:Objects
{
private:
	
	Sprite *beam_h;
	Setup *setup;

public:
	beam_horizontal(Setup *passed_Setup, int x, int y);
	~beam_horizontal();
	void Draw();
	void Update();
	Sprite* GetBeamH() { return beam_h; }
};

