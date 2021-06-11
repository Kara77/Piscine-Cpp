/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** AEnemy cpp
*/

#include <iostream>
#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type): _hp(hp), _type(type)
{
}

AEnemy::~AEnemy()
{
}

const std::string &AEnemy::getType() const
{
    return (_type);
}

int AEnemy::getHP() const
{
    return (_hp);
}