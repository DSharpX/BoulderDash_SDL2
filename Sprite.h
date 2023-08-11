#pragma once
#include"Global_headers.h"
#include"Collision.h"

class Sprite
{
private:
	SDL_Texture *_image=NULL;
	SDL_Texture *collisionimage=NULL;
	SDL_Rect _rect;
	SDL_Rect _crop;

	Collision collisionRect;

	int img_width;
	int img_height;

	int currentFrame;
	int animationDelay;
	
	int Amount_Frame_X;
	int Amount_Frame_Y;

	SDL_Renderer *sprite_renderer;
public:	
	Sprite(SDL_Renderer *przekazywany_renderer, std::string File_Path, int x, int y, int w, int h, Collision passed_collisionRectangle);	
	~Sprite();
	void draw();
	void SetX(int X);
	void SetY(int Y);
	void SetPosition(int X, int Y);
	int GetX();
	int GetY();
	void SetUpAnimation(int passed_Amount_X, int passed_amount_Y);
	void PlayAnimation(int beginFrame, int endFrame, int row, float speed);
	bool isColliding(Collision Collider);
	Collision GetColisionRect() { return collisionRect; }
};

