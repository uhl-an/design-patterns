/**
 * An implementation of the Game header file.
 */
#include "Game.h"
#include <iostream>

/**
 * Provides a namespace for Core game elements.
 */
namespace Core
{

    /**
     * Returns a single static reference to the Game object.
     */
    Game &Game::getInstance()
    {
        static Game instance;

        return instance;
    }

    /**
     * Prints a message to the console.
     */
    void Game::run()
    {
        running = true;

        std::cout << "Game is running..." << std::endl;
    }

    /**
     * Tells the user the Game is over.
     * Switches a boolean flag to mark that the
     * game is not running.
     */
    void Game::stop()
    {
        std::cout << "Game Over..." << std::endl;
        std::cout << "Score: " << Game::getScore() << std::endl;

        running = false;
    }

    /**
     * Ensures a single instance of the Game object.
     */
    Game::Game()
    {
        score = 0;
    }

    void Game::incrementScore() { Game::score++; }

    int Game::getScore() { return score; }

    bool Game::isRunning()
    {
        return running;
    }

}