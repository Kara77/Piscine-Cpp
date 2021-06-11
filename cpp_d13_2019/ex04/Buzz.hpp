/*
** EPITECH PROJECT, 2019
** Simple Inheritance
** File description:
** Buzz hpp
*/

#ifndef BUZZ_HPP_
	#define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : public Toy {

	public:
		Buzz(std::string name, std::string ascii = "buzz.txt");
		~Buzz();

		void speak(std::string statement) override;

	protected:
	private:
};

#endif /* !BUZZ_HPP_ */
