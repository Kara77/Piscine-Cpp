/*
** EPITECH PROJECT, 2019
** ex02
** File description:
** Warrior hpp
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include <iostream>
#include "Character.hpp"

class Warrior : virtual public Character {

	public:
		Warrior(const std::string &name, int level, const std::string &weaponName = "hammer");
		~Warrior();

        int CloseAttack();
        int RangeAttack();


	protected:
		std::string _weaponName;
	
	private:
};

#endif /* !WARRIOR_HPP_ */
