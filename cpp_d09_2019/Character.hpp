/*
** EPITECH PROJECT, 2019
** ex01
** File description:
** Character hpp
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>

class Character {

	public:
		Character(const std::string &name, int level);
		~Character();

                std::string getName();
                int getLvl() const;
                int getPv() const;
                int getPower() const;

                int CloseAttack();
                int RangeAttack();
                void TakeDamage(int damage);
                void Heal();
                void RestorePower();

                int Range;
                enum Range {
                        CLOSE,
                        RANGE
                };

	protected:
                const std::string &_name;
                int _level;
                int _pv;
                int _power;
                int _strength;
                int _stamina;
                int _intelligence;
                int _spirit;
                int _agility;
	private:
};

#endif /* !CHARACTER_HPP_ */
