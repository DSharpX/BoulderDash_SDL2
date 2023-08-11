#pragma once
#include"Global_headers.h"
#include"Sprite.h"
#include"Setup.h"
#include"Enviroment.h"

class Postac
{
private:
	Enviroment* enviroment;

	Sprite* character;
	int timeCheck = SDL_GetTicks();

	Setup *setup;

	bool MoveRight = false;
	bool MoveLeft = false;
	bool MoveUp = false;
	bool MoveDown = false;
	
public:
	Postac(Setup *passed_Setup, Enviroment* passed_enviroment);
	~Postac();
	void CollisionMove();
	void Update();
	void Draw();

};

