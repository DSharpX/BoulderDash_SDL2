#pragma once
#include"Global_headers.h"
#include"Setup.h"
#include"Sprite.h"
#include"Objects.h"


class Wall : public Objects
{
private:

	Sprite *wall;
	Setup *setup;
public:
	Wall(Setup *passed_Setup, int x, int y);	
	~Wall();	
	void Draw();
	void Update();
	Sprite* GetWalls() { return wall; }
};

