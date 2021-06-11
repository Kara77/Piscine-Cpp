/*
** EPITECH PROJECT, 2019
** Children
** File description:
** Priest hpp
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include <iostream>
#include "Mage.hpp"

class Priest : public Mage {

	public:
		Priest(const std::string &name, int level);
		~Priest();

        int CloseAttack();
        void Heal();

	protected:
	private:
};

#endif /* !PRIEST_HPP_ */
