#pragma once
#include"Global_headers.h"

#include"Setup.h"
#include"Sprite.h"
#include"Postac.h"
#include"Enviroment.h"
#include"Stone.h"
#include"Wall.h"

class MainClass
{
private:
	Postac *character;
	
	int screenWidth;
	int screenHeight;

	bool quit=false;

	Enviroment *Stage;
	Setup* setup;

public:
	MainClass(int przekazywany_screenwidth, int przekazywany_screeheight);
	~MainClass();
	void Loop();
};

