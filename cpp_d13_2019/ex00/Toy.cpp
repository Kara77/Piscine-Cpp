/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Toy cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Toy.hpp"

Picture Toy::getPicture() const
{
    return (_n_picture);
}

Toy::Toy(const ToyType &type, const std::string &name, const std::string &n_picture): 
_type(type), _name(name), _n_picture(n_picture)
{
}

Toy::Toy(): 
    _type(BASIC_TOY),
    _name("toy"),
    _n_picture(*(new Picture()))
{
}

Toy::~Toy()
{
}

int Toy::getType() const
{
    return (_type);
}

std::string Toy::getName() const
{
    return (_name);
}

std::string Toy::getAscii() const
{
    return (_n_picture.data);
}

void Toy::setName(std::string name)
{
    _name = name;
}

bool Toy::setAscii(const std::string &file)
{
    if (_n_picture.getPictureFromFile(file)) {
        return (true);
    } else {
        _n_picture.getPictureFromFile(file);
        return (false);
    }
}