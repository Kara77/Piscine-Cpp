/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** Droids cpp
*/

#include <iomanip>
#include <iostream>
#include <ostream>
#include "Droid.hpp"

Droid::Droid(std::string Id, size_t Energy, const size_t Attack, const size_t Toughness,
    std::string *Status): _Id(Id), _Energy(Energy), _Attack(Attack), _Toughness(Toughness), 
        _Status(Status)
{
    std::cout << "Droid '" << _Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &Droid): _Id(Droid.getId()), _Energy(Droid.getEnergy()), 
    _Attack(Droid.getAttack()), _Toughness(Droid.getToughness()), _Status(Droid.getStatus())
{
    std::cout << "Droid '" << _Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << _Id << "' Destroyed" << std::endl;
}

void Droid::setId(std::string Id)
{
    _Id = Id;
}

void Droid::setEnergy(size_t Energy)
{
    _Energy = Energy;
}

void Droid::setStatus(std::string *Status)
{
    _Status = Status;
}

std::string Droid::getId() const
{
    return (_Id);
}

size_t Droid::getEnergy() const
{
    return (_Energy);
}

size_t Droid::getAttack() const
{
    return (_Attack);
}

size_t Droid::getToughness() const
{
    return (_Toughness);
}

std::string *Droid::getStatus() const
{
    return (_Status);
}

bool Droid::operator==(Droid const &a) const
{
    if ((a.getId() == _Id) && (a.getEnergy() == _Energy) && 
        (a.getAttack() == _Attack) && (a.getToughness() == _Toughness) 
            && (a.getStatus() == _Status)) {
            return (true);
    } else
        return (false);
}

bool Droid::operator!=(Droid const &a) const
{
   if ((a.getId() != _Id) || (a.getEnergy() != _Energy) || 
        (a.getAttack() != _Attack) || (a.getToughness() != _Toughness) || (a.getStatus() != _Status)) {
        return(true);
    } else
        return (false);
}

std::ostream &operator<<(std::ostream &flux, Droid const &a)
{
    flux << "Droid '" << a.getId() << "', " << *(a.getStatus()) << ", " << a.getEnergy();
    return (flux);
}

void Droid::operator<<(size_t &Durasel)
{   
    if (_Energy + Durasel <= 100) {
        _Energy += Durasel;
        Durasel = 0;
    }
    else {
        Durasel -= 100 - _Energy;
        _Energy = 100;
    }

}