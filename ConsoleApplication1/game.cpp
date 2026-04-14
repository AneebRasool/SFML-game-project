#include "game.h"

//private functions
void Game::initvariables()
{
	this->window = nullptr;
}

void Game::initwindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "My first game", sf::Style::Titlebar | sf::Style::Close);
}
//constructors / destructors
Game::Game()
{

}

Game::~Game()
{

}


//functions
void Game::update()
{

}

void Game::render()
{

}
