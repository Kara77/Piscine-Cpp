/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Teddy.hpp
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy {
	protected:

	public:
		Teddy(std::string aTitle);
		~Teddy();
		void isTaken();
};

#endif