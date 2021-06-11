/*
** EPITECH PROJECT, 2019
** Paladins
** File description:
** Paladin cpp
*/

#include <iostream>
#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level): 
Character(name, level),
Warrior(name, level),
Priest(name, level)

{
    this -> _strength = 9;
    this -> _stamina = 10;
    this -> _intelligence = 10;
    this -> _spirit = 10;
    this -> _agility = 2;

    std::cout << "the light falls on " << _name << std::endl;
}

Paladin::~Paladin()
{
}

int Paladin::Intercept()
{
    return (Warrior::RangeAttack());
}

int Paladin::CloseAttack()
{
    return (Warrior::CloseAttack());
}

int Paladin::RangeAttack()
{
    return (Priest::RangeAttack());
}

void Paladin::Heal()
{
    Priest::Heal();
}

void Paladin::RestorePower()
{
    Warrior::RestorePower();
}