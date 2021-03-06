/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** ex00 Skat cpp
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "Skat.hpp"
#include <stdio.h>

Skat::Skat(const std::string &name, int stimPaks): _name(name), _stimPaks(stimPaks)
{
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    int &ref = _stimPaks;
    return (ref);
}

const std::string &Skat::name()
{
    return (_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (number > _stimPaks)
        std::cout << "Don't be greedy" << std::endl;
    else {
        _stimPaks -= number;
        stock += number;
        std::cout << "Keep the change." << std::endl;
    }
}

void Skat::addStimPaks(unsigned int number)
{
    if (number <= 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    else
        _stimPaks += number;
        
}

void Skat::useStimPaks()
{
    if (_stimPaks > 0) {
        _stimPaks--;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    } else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status()
{
    std::cout << "Soldier " << _name << " reporting " << 
        _stimPaks << " stimpaks remaining sir!" << std::endl;
}