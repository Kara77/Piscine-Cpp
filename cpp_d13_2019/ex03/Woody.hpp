/*
** EPITECH PROJECT, 2019
** Simple inheritance
** File description:
** Woody hpp
*/

#ifndef WOODY_HPP_
	#define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy {

	public:
		Woody(std::string name, std::string ascii = "woody.txt");
		~Woody();

		void speak(std::string statement) override;

	protected:
	private:
};

#endif /* !WOODY_HPP_ */
