/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** AEnemy hpp
*/

#ifndef AENEMY_HPP_
	#define AENEMY_HPP_

#include <iostream>

class AEnemy {

	public:
		AEnemy(int hp, const std::string &type);
		~AEnemy();

        virtual void takeDamage(int damage);

        const std::string &getType() const;
        int getHP() const;

	protected:
        int _hp;
        const std::string &_type;

	private:
};

#endif /* !AENEMY_HPP_ */
