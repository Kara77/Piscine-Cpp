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

Toy::Toy(const ToyType &type, const std::string &name, const std::string &n_picture,
int error): 
_type(type), _name(name), _n_picture(n_picture), _error(Error())
{
}

Toy::Toy():
    _type(BASIC_TOY),
    _name("toy"),
    _n_picture(*(new Picture()))
{
}

Toy::Toy(Toy const &copy_toy): _type(copy_toy._type), _name(copy_toy._name),
_n_picture(copy_toy._n_picture)
{
}

Toy::~Toy()
{
}


//      *** SPEAK ***


void Toy::speak(std::string statement)
{
    std::cout << _name << " \"" << statement << "\""<< std::endl; 
}

bool Toy::speak_es(std::string statement)
{
    return (false);
}

//      *** GETTER ***


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


//      *** SETTER ***


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


//      *** OPERATOR ***


Toy Toy::operator=(Toy const &a)
{
    _type = a._type;
    _name = a._name;
    _n_picture = a._name;
    return (*this);
}

std::ostream &operator<<(std::ostream &flux, Toy const &toy)
{
    flux << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return (flux);
}

Toy &Toy::operator<<(const std::string &a)
{
    this -> _n_picture.data = a;
    return (*this);
}


//      *** HANDLING ERROR ***


std::string Toy::Error::what()
{
    if (PICTURE) {
        return ("bad new illustration");
    } else if (SPEAK) {
        return ("wrong mode");
    }
}

std::string Toy::Error::where()
{
    if (PICTURE)
        return ("setAscii");
    else
        return ("speak_es");
}


//        *** ERROR CONSTRUCTEUR/DESTRUCTEUR ***


Toy::Error::Error(): type(UNKNOW)
{
}

Toy::Error::~Error()
{
}

Toy::Error Toy::getLastError()
{
    return;
}