/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** RadScorpion cpp
*/

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    if (damage <= 0)
        return;
    else {
        _hp -= damage;
    }
}