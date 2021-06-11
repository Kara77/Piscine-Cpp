/*
** EPITECH PROJECT, 2019
** Conveyor.cpp
** File description:
** 6
*/

#include <iostream>
#include "PapaXmasConveyorBelt.hpp"
#include "IConveyorBelt.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
	this->_full = 0;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

int PapaXmasConveyorBelt::getFull() const
{
	return (this->_full);
}

void PapaXmasConveyorBelt::setFull(bool full) 
{
	full = _full;
}

Object * PapaXmasConveyorBelt::getObject() const
{
	return (this->objectOnConv);
}

void PapaXmasConveyorBelt::setObject(Object *object) 
{
	if (_full == 0) {
        this->objectOnConv = object;
        _full = 1;
    } else {
        std::cerr << "The Convoyor Belt is already occupied" << std::endl;
    }
}

IConveyorBelt *createConveyorBelt() 
{
	return (new(PapaXmasConveyorBelt));
}