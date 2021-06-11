/*
** EPITECH PROJECT, 2019
** ex02
** File description:
** Warrior cpp
*/

#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string &weaponName):
Character(name, level)
{
    this -> _strength = 12;
    this -> _stamina = 12;
    this -> _intelligence = 6;
    this -> _spirit = 5;
    this -> _agility = 7;
    this -> _weaponName = weaponName;
    
    std::cout << "I'm " << _name << 
        " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl; 
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
    if (_power >= 30) {
        _power -= 30;
        std::cout << _name << " strikes with his " << _weaponName << std::endl;
        return (20 + _strength);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

int Warrior::RangeAttack()
{
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " intercepts" << std::endl;
        Range = CLOSE;
        return (0);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);    
    }
}