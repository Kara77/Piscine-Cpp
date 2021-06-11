/*
** EPITECH PROJECT, 2019
** Paladins
** File description:
** Paladin hpp
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include <iostream>
#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin: public Warrior, public Priest {

	public:
		Paladin(const std::string &name, int level);
		~Paladin();

        int Intercept();
        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();

	protected:
	private:
};

#endif /* !PALADIN_HPP_ */
