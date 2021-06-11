/*
** EPITECH PROJECT, 2019
** project_name rush3
** File description:
** Monitor display
*/

#ifndef _MONITORDISPLAY_HPP_
#define _MONITORDISPLAY_HPP_

#include <iostream>
#include "IMonitorDisplay.hpp"
#include "DisplayNcurses.hpp"
#include "SFML.hpp"

class MonitorDisplay : public IMonitorDisplay
{
    public:
        MonitorDisplay();
        ~MonitorDisplay();

        void getDisplayType(char *argv);
        void Display();

    private:
        MonitorModule *_module;
        DisplayNcurses *_ncurses;
        InitResources *_sfml;
        int _type;
        enum TYPE {
            NCURSES,
            SFML
        };
};

#endif
