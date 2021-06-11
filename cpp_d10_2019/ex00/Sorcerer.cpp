/*
** EPITECH PROJECT, 2019
** Ponymorphism
** File description:
** Sorcerer cpp
*/

#include <iostream>
#include <ostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title):
_name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << 
        ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string Sorcerer::getName() const
{
    return (_name);
}

const std::string Sorcerer::getTitle() const
{
    return (_title);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &flux, Sorcerer const &a)
{
    flux << "I am " << a.getName() << ", " << a.getTitle() << 
        ", and I like ponies!" << std::endl;
    return (flux);
}