#pragma once
#include"Global_headers.h"
#include"Setup.h"
#include"Sprite.h"
#include"Stone.h"
#include"Wall.h"
#include"beam_horizontal.h"
#include"beam_vertical.h"
#include"Door.h"
#include"Diamond.h"

class Enviroment
{
private:

	int mode;
	bool onePressed;

	Sprite* background;
	Setup *setup;



	Stone* stone;
	std::vector <Stone*> Stones;

	Wall* wall;
	std::vector <Wall*> Walls;

	beam_horizontal* beamH;
	std::vector <beam_horizontal*> BeamSH;

	beam_vertical* beamV;
	std::vector <beam_vertical*> BeamSV;

	Door *door;

	Diamond *diamond;
	std::vector <Diamond*> Diamonds;

public:
	Enviroment(int przekazywany_screenwidth, int przekazywany_screeheight, Setup *passed_Setup);
	~Enviroment();
	void DrawBack();
	void Update();
	void DrawFront();
	void pushStone(int x, int y);
	void pushDiamond(int x, int y);
	void pushWall(int x, int y);
	int GetMode() { return mode; }
	

	std::vector <Stone*> GetStones() { return Stones; }
	std::vector<Wall*> GetWalls() { return Walls; }
	std::vector<Diamond*> GetDiamonds() { return Diamonds; }
	std::vector<beam_horizontal*> GetBeam_H() { return BeamSH; }
	std::vector<beam_vertical*> GetBeam_V() { return BeamSV; }
	
	enum ModeType{
		GamePlay,
		Creator
	};
		
};

