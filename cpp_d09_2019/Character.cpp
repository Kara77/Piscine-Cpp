/*
** EPITECH PROJECT, 2019
** ex01
** File description:
** Character cpp
*/

#include <iomanip>
#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name, int level): _name(name), _level(level)
{
    this -> _pv = 100;
    this -> _power = 100;
    this -> _strength = 5;
    this -> _stamina = 5;
    this -> _intelligence = 5;
    this -> _spirit = 5;
    this -> _agility = 5;
    this -> Range = CLOSE;

    std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
}

std::string Character::getName()
{
    return (_name);
}

int Character::getLvl() const
{
    return (_level);
}

int Character::getPv() const
{
    return (_pv);
}

int Character::getPower() const
{
    return (_power);
}

int Character::CloseAttack()
{
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " strikes with a wooden stick" << std::endl;    
        return (10 + _strength);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

int Character::RangeAttack()
{
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " tosses a stone" << std::endl;    
        return (5 + _strength);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

void Character::TakeDamage(int damage)
{
    _pv -= damage;
    if (_pv <= 0) {
        std::cout << _name << " out of combat" << std::endl;
    } else
        std::cout << _name << " takes " << damage << " damage" << std::endl;
}

void Character::Heal()
{
    _pv += 50;
    if (_pv > 100)
        _pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

void Character::RestorePower ()
{
    _power += 100;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " eats" << std::endl;
}