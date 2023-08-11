#pragma once
#include"Global_headers.h"
#include"Setup.h"
#include"Sprite.h"
#include"Objects.h"
class Stone:public Objects
{
private:

	Sprite *stone;
	Setup *setup; 

public:
	Stone(Setup *passed_Setup, int x, int y);
	~Stone();
	void Draw();	
	void Update();
	Sprite* GetStones() { return stone; }
};

