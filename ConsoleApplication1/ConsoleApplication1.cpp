#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

//using namespace sf (namespace) but here we wont.
using namespace std;
//test! test2

int main()
{
    //window:
    
    
    //Videomode has 
    sf::RenderWindow window(sf::VideoMode(800, 600), "My first game", sf::Style::Titlebar | sf::Style::Close);
    sf::Event ev; //ex event if u press a button, it will find and capture the event in this!


    //game loop
    while (window.isOpen()) {

        //event polling
        while (window.pollEvent(ev)) { //while we get events from window, save to event variable!

            switch (ev.type) {

            //window close
            case sf::Event::Closed: window.close(); break;

            case sf::Event::KeyPressed: if (ev.key.code == sf::Keyboard::Escape) {
                window.close(); break;
            } 

            
            }
            //update
            


            //render
            window.clear(sf::Color::Blue); //clear old frame

            //draw your game
            window.display(); //tell app that window is done drawing


        }
    }

    //end of application
    return 0;
}