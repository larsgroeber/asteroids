// 
// Created by Adrian Valadkhani on 26.01.20.
//

#ifndef ASTEROIDS_MAINMENU_H
#define ASTEROIDS_MAINMENU_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "GameState.h"

class MainMenu {
private:
    sf::RenderWindow* window;
    //GameState nextState = Running;
public:

    void update();
    bool display();
    
    MainMenu(sf::RenderWindow* window);
    
    MainMenu();
};


#endif //ASTEROIDS_MAINMENU_H
