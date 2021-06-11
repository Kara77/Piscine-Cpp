/*
** EPITECH PROJECT, 2019
** Children
** File description:
** Priest cpp
*/

#include <iostream>
#include "Mage.hpp"
#include "Priest.hpp"

Priest::Priest(const std::string &name, int level): Character(name, level),
Mage(name, level)
{
    this -> _strength = 4;
    this -> _stamina = 4;
    this -> _intelligence = 42;
    this -> _spirit = 21;
    this -> _agility = 2;

    std::cout << _name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " uses a spirit explosion" << std::endl;
        Range = 1;
        return (10 + _spirit);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

void Priest::Heal()
{
    if (_power >= 10) {
        _power -= 10;
        _pv += 70;
        std::cout << _name << " casts a little heal spell" << std::endl;
    } else {
        std::cout << _name << " out of power" << std::endl;
    }
    if (_pv > 100) {
        _pv = 100;
    }
}