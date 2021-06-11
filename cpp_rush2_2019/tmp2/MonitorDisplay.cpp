/*
** EPITECH PROJECT, 2019
** file
** File description:
** file
*/

#include "MonitorDisplay.hpp"
#include <cstring>

MonitorDisplay::MonitorDisplay(): _module(new MonitorModule()),
_ncurses(new DisplayNcurses())
{}

MonitorDisplay::~MonitorDisplay()
{}

void MonitorDisplay::getDisplayType(char *argv)
{

    if (strcmp(argv, "text") == 0) {
        _type = NCURSES;
      }
    else {
        _type = SFML;
      }
}

void MonitorDisplay::Display()
{
    bool change;

    if (_type == 0) {
        change = _ncurses->Graphic(_module);
        if (change == true) {
            _type = 1;
            Display();
        }
    }
    else {
        change = Graphic_loop();
        if (change == true) {
            _type = 1;
            Display();
        }
    }
}
