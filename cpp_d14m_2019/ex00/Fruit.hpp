/*
** EPITECH PROJECT, 2019
** Fruits
** File description:
** Fruit hpp
*/

#ifndef FRUIT_HPP_
	#define FRUIT_HPP_

#include <iostream>

class Fruit {

	public:
		Fruit(const std::string name, int vitamins);
		~Fruit();

		std::string getName() const;
		int getVitamins() const;

	protected:
		std::string _name;
		int _vitamins;

	private:
};

#endif /* !FRUIT_HPP_ */
