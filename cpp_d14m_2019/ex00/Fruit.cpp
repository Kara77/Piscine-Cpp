/*
** EPITECH PROJECT, 2019
** Fruits
** File description:
** Fruit cpp
*/

#include <iostream>
#include "Fruit.hpp"

Fruit::Fruit(const std::string name, int vitamins): _name(name), _vitamins(vitamins)
{
}

Fruit::~Fruit()
{
}

std::string Fruit::getName() const
{
    return (_name);
}

int Fruit::getVitamins() const
{
    return (_vitamins);
}