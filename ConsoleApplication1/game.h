#pragma once

//precompile headers
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>


/* class that acts game engine wrapper class*/





class Game
{
private:
	//variables
	//window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;


	//private functions
	void initvariables();
	void initwindow();
public:


	//constructor /destructors
	Game();
	virtual ~Game();


	//accessors
	const bool running() const;



	
	//functions
	void pollEvents();
	void update();
	void render();
};

