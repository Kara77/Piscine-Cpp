/*
** EPITECH PROJECT, 2019
** SickKoala
** File description:
** ex02 SickKoala cpp
*/

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <boost/algorithm/string/predicate.hpp>
#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name) : name(name)
{

}

SickKoala::~SickKoala()
{
	std::cout << "Mr." << name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke()
{
	std::cout << "Mr." << name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string my_str)
{
	if (boost::iequals(my_str, "mars")) {
		std::cout << "Mr." << name << ": Mars, and it kreogs!" << std::endl;
		return (true);
	} else if (my_str == "Buronzand") {
		std::cout << "Mr." << name << ": And you'll sleep right away!"
			<< std::endl;
		return (true);
	} else {
		std::cout << "Mr." << name << ": Goerkreog!" << std::endl;
		return (false);
	}
}

void SickKoala::overDrive(std::string my_str)
{	
	size_t i = 0;
	std::string kreogs = "Kreog!";
	while (true) {
		i = my_str.find("Kreog!", i);
		if (i == std::string::npos)
			break;
		my_str.replace(i, 6, "1337");
	}
	std::cout << "Mr." << name << my_str << std::endl;
}