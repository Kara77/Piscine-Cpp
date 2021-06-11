/*
** EPITECH PROJECT, 2019
** Children
** File description:
** Mage cpp
*/

#include <iostream>
#include "Character.hpp"
#include "Mage.hpp"

Mage::Mage(const std::string &name, int level): Character(name, level)
{
    this -> _strength = 6;
    this -> _stamina = 6;
    this -> _intelligence = 12;
    this -> _spirit = 11;
    this -> _agility = 7;

    std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " blinks" << std::endl;
        Range = 1;
        return (0);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

int Mage::RangeAttack()
{
    if (_power >= 25) {
        _power -= 25;
        std::cout << _name << " launches a fire ball" << std::endl;
        return (20 + _spirit);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);        
    }
}

void Mage::RestorePower()
{
    _power += 50 + _intelligence;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " takes a mana potion" << std::endl;
}