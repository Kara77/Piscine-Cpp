/*
** EPITECH PROJECT, 2018
** project_name rush2
** File description:
** abstract table
*/

#ifndef _IMONITORDISPLAY_HPP_
#define _IMONITORDISPLAY_HPP_

#include <iostream>

class IMonitorDisplay
{
    public:
        virtual void getDisplayType(char *argv) = 0;
};

#endif
