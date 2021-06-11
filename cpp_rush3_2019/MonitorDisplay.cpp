/*
** EPITECH PROJECT, 2019
** file
** File description:
** file
*/

#include <unistd.h>
#include <string.h>
#include "MonitorDisplay.hpp"

MonitorDisplay::MonitorDisplay(): _module(new MonitorModule()),
_ncurses(new DisplayNcurses())//, _sfml(new ) ANTONIN
{}

MonitorDisplay::~MonitorDisplay()
{}

void MonitorDisplay::getDisplayType(char *argv)
{
    if (strcmp(argv, "text") == 0)
        _type = NCURSES;
    else
        _type = SFML;
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
        //change = _sfml->Graphic(_module);     REMOVE COMMENTAIRE ANTONIN
        if (change == true) {
            _type = 1;
            Display();
        }
    }
}