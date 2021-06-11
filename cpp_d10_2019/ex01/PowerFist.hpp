/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** PowerFist hpp
*/

#ifndef POWERFIST_HPP_
	#define POWERFIST_HPP_

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist();
		~PowerFist();

		void attack() const;

	protected:

	private:
};

#endif /* !POWERFIST_HPP_ */