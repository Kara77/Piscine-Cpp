/*
** EPITECH PROJECT, 2019
** Or is it eleven ?
** File description:
** Hunter cpp
*/

#include <iostream>
#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level):
Character(name, level),
Warrior(name, level)
{
    this -> _strength = 9;
    this -> _stamina = 9;
    this -> _spirit = 6;
    this -> _agility = 25;
    this -> _weaponName = "sword";

    std::cout << _name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

int Hunter::RangeAttack()
{
    if (_power >= 25) {
        _power -= 25;
        std::cout << _name << " uses his bow" << std::endl;
        return (20 + _agility);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

void Hunter::RestorePower()
{
    _power += 100;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " meditates" << std::endl;
}