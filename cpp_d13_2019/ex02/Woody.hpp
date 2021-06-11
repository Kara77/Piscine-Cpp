/*
** EPITECH PROJECT, 2019
** Simple inheritance
** File description:
** Woody hpp
*/

#ifndef WOODY_HPP_
	#define WOODY_HPP_

#include <iostream>
#include "Toy.hpp"

class Woody : public Toy {

	public:
		Woody(std::string &name, std::string ascii = "woody.txt");
		~Woody();

	protected:
	private:
};

#endif /* !WOODY_HPP_ */
