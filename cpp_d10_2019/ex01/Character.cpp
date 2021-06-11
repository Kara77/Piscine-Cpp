/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** Character cpp
*/

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name): _name(name), _ap(40) 
{   
}

Character::~Character()
{
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

const std::string &Character::getName() const
{
    return (_name);
}

int Character::getAp() const
{
    return (_ap);
}

AWeapon *Character::getWeapon() const
{
    return (_weapon);
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::attack(AEnemy *enemy)
{
    if (_weapon && (_ap >= _weapon->getAPCost())) {
        _ap -= _weapon->getAPCost();
        std::cout << _name << " attacks" << enemy->getType() <<
        " with a " << _weapon->getName() << std::endl;
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() <= 0) {
            delete(enemy);
        }
    } else
        return;
}

std::ostream &operator<<(std::ostream &flux, Character const &a)
{
    if (a.getWeapon()) {
        flux << a.getName() << " has " << a.getAp() << 
            " AP and wields a " << a.getWeapon() << std::endl;
    }
    else {
        flux << a.getName() << " has " << a.getAp() << " AP and is unarmed" << std::endl;
    }
    return (flux);
}