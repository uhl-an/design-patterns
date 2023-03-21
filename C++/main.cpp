#include <iostream>
#include "Game.h"

/**
 * Simple demonstration of a Singleton using a
 * Game object that keeps track of a player's
 * score and is responsible for running the game;
 */
int main()
{
    Core::Game::getInstance().run();

    while (Core::Game::getInstance().isRunning())
    {
        char input = 'n';

        std::cout << "Stop Running (y/n)? ";

        std::cin >> input;

        if (input == 'y')
        {
            Core::Game::getInstance().stop();
        }

        Core::Game::getInstance().incrementScore();
    }

    return 0;
}