/*
** EPITECH PROJECT, 2019
** project_name rush3
** File description:
** Display ncurses
*/

#ifndef _DISPLAYNCURSES_HPP_
#define _DISPLAYNCURSES_HPP_

#include <iostream>
#include <curses.h>
#include <iostream>
#include <ncurses.h>
#include <time.h>
#include "MonitorModule.hpp"

class DisplayNcurses
{
    public:
        DisplayNcurses();
        ~DisplayNcurses();

        void InitResources(MonitorModule *module, WINDOW *(*window));
        bool Graphic(MonitorModule *module);
    private:
};

#endif