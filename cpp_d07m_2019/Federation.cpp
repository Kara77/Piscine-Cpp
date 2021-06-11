/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** Federation cpp
*/

#include <iomanip>
#include <iostream>
#include <string>
#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width,
	std::string name, short maxWarp): _length(length),
		_width(width), _name(name), _maxWarp(maxWarp)
		{
			std::cout << "The ship USS " << _name << " has been finished." 
			<< std::endl << "It is " << length << " m in length and " << width <<
			" m in width." << std::endl << "It can go to Warp " << maxWarp << "!" 
			<< std::endl;
		}

Federation::Starfleet::Ship::~Ship()
{

}


void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	_core = core;
	std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
	if (_core->checkReactor()->isStable())
		std::cout << "USS " << _name << ": The core is stable at the time." << std::endl;
	else
		std::cout << "USS " << _name << ": The core is unstable at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name): _length(length), _width(width), _name(name)
		{
			std::cout << "The independent ship " << _name << 
			" just finished its construction."
			<< std::endl <<	"It is " << length << " m in length and " << width <<
			" m in width." << std::endl;
		}

Federation::Ship::~Ship()
{

}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
	_core = core;
	std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore()
{
	if (_core->checkReactor()->isStable())
		std::cout << _name << ": The core is stable at the time." << std::endl;
	else
		std::cout << _name << ": The core is unstable at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name): _name(name)
{
}

Federation::Starfleet::Captain::~Captain()
{
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
	this->name = name;
	std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}

std::string Federation::Starfleet::Captain::getName()
{
	return (_name);
}

int Federation::Starfleet::Captain::getAge()
{
	return (_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
	this->_age = age;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
	this->captain = captain;
	std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}