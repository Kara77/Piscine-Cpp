/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Teddy.cpp
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string title) : Toy(title)
{}

Teddy::~Teddy()
{}

void  Teddy::isTaken()
{
	std::cout<< "gra hu"<<std::endl;
}