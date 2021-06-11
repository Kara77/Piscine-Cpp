/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** PlasmaRifle cpp
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}