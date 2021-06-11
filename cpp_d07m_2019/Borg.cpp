/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** borg cpp
*/

#include <iomanip>
#include <iostream>
#include <string>
#include "Borg.hpp"

Borg::Ship::Ship()
{
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\n" 
    << "Your biological characteristics and technologies will be assimilated.\n"
    << "Resistance is futiles." << std::endl;
}

Borg::Ship::~Ship()
{
    
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
}

void Borg::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true) {
        std::cout << "Everything is in order." << std::endl;
    } else {
        std::cout << "Critical failure imminent." << std::endl;
    }
}