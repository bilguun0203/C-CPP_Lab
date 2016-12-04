//
// Created by bilguun on 11/15/16.
//
#include <iostream>
#include <ncurses.h>
#include "tollbridge.h"

using namespace std;

int main(int argc, char **argv)
{
    int ch;
    tollbridge *tb = new tollbridge();

    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();

    printw("-----------------------------------------\n");
    printw("| Press UP to pass car with $10\n| Press DOWN to pass car without paying\n| Press ESC to exit the program\n");
    printw("-----------------------------------------\n\n");
    while((ch = getch()) != 27)
    {
        switch (ch)
        {
            case KEY_UP:
                printw("Car passed with pay\t>>\t+10$ +1\n");
                tb->payingcar();
                break;
            case KEY_DOWN:
                printw("Car passed without pay\t>>\t+0$ +1\n");
                tb->nopaycar();
                break;
        }
    }

    endwin();
    cout << endl << "Tollbridge" << endl;
    tb->display();
    cout << endl;
    delete tb;
    return 0;
}