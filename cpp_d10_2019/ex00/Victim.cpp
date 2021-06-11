/*
** EPITECH PROJECT, 2019
** Ponymorphism
** File description:
** Victim cpp
*/

#include <iostream>
#include <ostream>
#include "Victim.hpp"

Victim::Victim(const std::string &name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just popped!"
    << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << 
        " just died for no apparent reason!" << std::endl;
}

const std::string Victim::getName() const
{
    return (_name);
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!"
        << std::endl;
}

std::ostream &operator<<(std::ostream &flux, Victim const &a)
{
    flux << "I'm " << a.getName() << " and I like otters!" << std::endl;
    return (flux);
}