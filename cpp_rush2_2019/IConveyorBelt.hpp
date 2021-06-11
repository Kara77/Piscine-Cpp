/*
** EPITECH PROJECT, 2019
** Conveyor.hpp
** File description:
** .
*/

#ifndef ICONVEYOR_HPP_
#define ICONVEYOR_HPP_

#include "Object.hpp"

class IConveyorBelt {

	public:
		~IConveyorBelt(){};
		virtual int getFull() const = 0;
		virtual void setFull(bool full) = 0;
		virtual Object *getObject() const = 0;
		virtual void setObject(Object *object) = 0;
};

IConveyorBelt *createConveyorBelt();

#endif /* !ICONVOYER_HPP_ */