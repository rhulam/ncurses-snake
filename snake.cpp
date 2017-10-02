#include "snake.h"

snakepart::snakepart(int col, int row)
{
    x = col;
    y = row;
}

snakepart::snakepart()
{
    x = 0;
    y = 0;
}

snakeclass::snakeclass()
{
    initscr();
    nodelay(stdscr, true);
    keypad(stdscr, true);
    noecho();
    curs_set(0);
    getmaxyx(stdscr, maxheigth, maxwidth);
    partchar = 'x';
    oldchar = (char)219;
    foo = '*';
    for (int i = 0; i < 5; ++i)
        snake.push_back(snakepart(40 + i, 10));
    points = 0;
    del = 110000;
    get = false;
    direction = 'l';
    srand(time(NULL));
    putfood();
    for (int i = 0; i < maxwidth - 1; i++)
    {
        move(0, i);
        addch(oldchar);
    }
    for (int i = 0; i < maxwidth - 1; i++)
    {
        move(maxheigth - 2, i);
        addch(oldchar);
    }
    for (int i = 0; i < maxheigth - 1; i++)
    {
        move(i, 0);
        addch(oldchar);
    }
    for (int i = 0; i < maxheigth - 2; i++)
    {
        move(i, maxwidth  - 2);
        addch(oldchar);
    }
    for (int i = 0; i < snake.size(); i++)
    {
        move(snake[i].y, snake[i].x);
        addch(partchar);
    }
    move(maxheigth - 1, 0);
    printw("%d", points);
    move(food.y, food.x);
    addch(foo);
    refresh();
}

snakeclass::~snakeclass()
{
    nodelay(stdscr, false);
    getch();
    endwin();
}

void snakeclass::putfood()
{
    food.x = 10;
    food.y = 10;
}



















