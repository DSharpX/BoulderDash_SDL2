#pragma once
#include"Global_headers.h"
class Collision
{
private:
	int offsetX;
	int offsetY;

	SDL_Rect CollisionRect;

	
public:
	Collision();
	Collision(int x, int y, int w, int h);	
	~Collision();
	void SetRectangle(int x, int y, int w, int h);
	SDL_Rect GetRectangle() { return CollisionRect; };
	void setXRectangle(int x) { CollisionRect.x = x + offsetX; }
	void setYRectangle(int y) { CollisionRect.y = y + offsetY; }
};

