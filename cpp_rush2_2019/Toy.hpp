/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Toy.hpp
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object {
	protected:
	public:
		Toy(std::string title = "toy");
		~Toy();
};

#endif