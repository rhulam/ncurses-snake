#ifndef NCURSES_SNAKE_H
#define NCURSES_SNAKE_H

#include <iostream>
#include <ncurses.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>

struct snakepart
{
    int x, y;
    snakepart(int col, int row);
    snakepart();
};

class snakeclass {
    int points, del, maxwidth, maxheigth;
    char direction;
    unsigned char oldchar, foo, partchar;
    bool get;
    snakepart food;
    std::vector<snakepart> snake;

    void putfood();
    bool collision();
    void movesnake();

    public:
    snakeclass();
    ~snakeclass();
    void start();
};

#endif
