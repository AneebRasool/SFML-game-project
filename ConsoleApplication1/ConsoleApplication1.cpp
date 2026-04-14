#include<iostream>
#include "game.h"

//using namespace sf (namespace) but here we wont.
using namespace std;
//test! test2

int main()
{

    //init game engine

    Game game;

    //game loop
    while (game.running()) {


        //update
        game.update();


        //render
        game.render();
        }
    

    //end of application
    return 0;
}