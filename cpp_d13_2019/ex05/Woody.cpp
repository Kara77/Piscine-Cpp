/*
** EPITECH PROJECT, 2019
** Simple Inheritance
** File description:
** Woody.cpp
*/

#include "Woody.hpp"

Woody::Woody(std::string name, std::string ascii): Toy(WOODY, name, ascii)
{
}

Woody::~Woody()
{
}

void Woody::speak(std::string statement)
{
    std::cout << "WOODY: " << _name << " \"" << statement << "\"" << std::endl;
}

bool Woody::speak_es(std::string statement)
{
    return (false);
}