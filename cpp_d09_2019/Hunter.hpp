/*
** EPITECH PROJECT, 2019
** Or is it eleven?
** File description:
** Hunter hpp
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include <iostream>
#include "Warrior.hpp"

class Hunter : public Warrior {

	public:
		Hunter(const std::string &name, int level);
		~Hunter();

		int RangeAttack();
		void RestorePower();

	protected:
	private:
};

#endif /* !HUNTER_HPP_ */
