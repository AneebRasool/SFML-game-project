#pragma once

/* class that acts game engine wrapper class*/

class Game
{
private:

	//private functions
	void initvariables();
	void initwindow();
public:


	//constructor /destructors
	Game();
	virtual ~Game();

	//functions
	void update();
	void render();
};

