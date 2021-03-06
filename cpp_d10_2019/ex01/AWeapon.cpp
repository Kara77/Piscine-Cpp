/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** AWeapon cpp
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): 
    _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

const std::string &AWeapon::getName() const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return (_apcost);
}

int AWeapon::getDamage() const
{
    return (_damage);
}