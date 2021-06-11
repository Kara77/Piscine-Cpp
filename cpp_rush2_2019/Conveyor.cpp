/*
** EPITECH PROJECT, 2019
** Conveyor.cpp
** File description:
** 6
*/

#include "IConveyor.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
	this->_full = 0;
	this->_state = OUT;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

int PapaXmasConveyorBelt::getState() const {
	return (this->_state);
}

void PapaXmasConveyorBelt::setState(enum State) {
	this->_state = _state;
}

Object * PapaXmasConveyorBelt::getObject() const{
	return (this->objectOnConv);
}

void PapaXmasConveyorBelt::setObject(Object *object) {
	this->objectOnConv = object;
}

IConveyorBelt *createConveyorBelt() {
	return (new(PapaXmasConveyorBelt));
}