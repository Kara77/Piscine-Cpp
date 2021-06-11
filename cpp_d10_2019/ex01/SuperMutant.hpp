/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** SuperMutant hpp
*/

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_

#include <iostream>
#include "AEnemy.hpp"

class SuperMutant : public AEnemy {

	public:
		SuperMutant(int hp, const std::string &type);
		~SuperMutant();

		void takeDamage(int damage)final;

	protected:
	private:
};

#endif /* !SUPERMUTANT_HPP_ */