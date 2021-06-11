/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** SuperMutant cpp
*/

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, const std::string &type):
AEnemy(170, "Super Mutant") 
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    if (damage <= 0)
        return;
    else {
        _hp -= damage;
    }
}