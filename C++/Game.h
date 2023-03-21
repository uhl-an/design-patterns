// the definition of a Singleton Game Object
// responsible for running the game.
#pragma once
#ifndef GAME_H
#define GAME_H

// provides a common namespace for Core game elements
namespace Core
{
    // a singleton Game Object
    class Game
    {
    public:
        // returns a single static instance to Game
        static Game &getInstance();
        void run();
        void stop();
        void incrementScore();
        int getScore();
        bool isRunning();

    private:
        Game();
        // deletes the copy constructor to prevent copying
        Game(const Game &) = delete;
        // deletes the assignment operator to prevent assignment
        Game &operator=(const Game &) = delete;

        int score;

        // whether or not the game is still running
        bool running;
    };
}

#endif