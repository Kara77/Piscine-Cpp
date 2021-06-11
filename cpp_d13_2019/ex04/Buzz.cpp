/*
** EPITECH PROJECT, 2019
** Simple Inheritance
** File description:
** Buzz cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(std::string name, std::string ascii): Toy(BUZZ, name, ascii)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(std::string statement)
{
    std::cout << "BUZZ: " << _name << " \"" << statement << "\"" << std::endl;
}