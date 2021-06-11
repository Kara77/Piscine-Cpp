/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** RadScorpion hpp
*/

#ifndef RADSCORPION_HPP_
	#define RADSCORPION_HPP_

#include <iostream>
#include "AEnemy.hpp"

class RadScorpion : public AEnemy {

	public:
		RadScorpion();
		~RadScorpion();

		void takeDamage(int damage)final;

	protected:

	private:
};

#endif /* !RADSCORPION_HPP_ */