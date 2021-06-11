/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** Character hpp
*/

#ifndef CHARACTER_HPP_
	#define CHARACTER_HPP_

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {

	public:
		Character(const std::string &name);
		~Character();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);
        const std::string &getName() const;
        int getAp() const;
        AWeapon *getWeapon() const;

	protected:
        const std::string &_name;
        AWeapon *_weapon;

	private:
        int _ap;
};

std::ostream &operator<<(std::ostream &flux, Character const &a);

#endif /* !CHARACTER_HPP_ */
