/*
** EPITECH PROJECT, 2019
** exo01
** File description:
** Parts cpp
*/

#include <iostream>
#include "Parts.hpp"
#include "KoalaBot.hpp"

Arms::Arms(std::string serial, bool functional): _serial(serial), _functional(functional)
{
}

Arms::~Arms()
{

}

bool Arms::isFunctionnal()
{
    return (_functional);
}

std::string Arms::serial()
{
    return (_serial);
}

void Arms::informations()
{
    std::cout << "\t[Parts] Arms " << _serial << " status : ";
    
    if (_functional == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl; 
}

Legs::Legs(std::string serial, bool functional): _serial(serial), _functional(functional)
{
}

Legs::~Legs()
{
}

bool Legs::isFunctionnal()
{
    return (_functional);
}

std::string Legs::serial()
{
    return (_serial);
}

void Legs::informations()
{
    std::cout << "\t[Parts] Legs " << _serial << " status : ";
    
    if (_functional == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl; 
}

Head::Head(std::string serial, bool functional): _serial(serial), _functional(functional)
{
}

Head::~Head()
{
}

bool Head::isFunctionnal()
{
    return (_functional);
}

std::string Head::serial()
{
    return (_serial);
}

void Head::informations()
{
    std::cout << "\t[Parts] Head " << _serial << " status : ";
    
    if (_functional == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl; 
}