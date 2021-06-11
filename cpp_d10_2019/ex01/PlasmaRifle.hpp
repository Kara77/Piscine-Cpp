/*
** EPITECH PROJECT, 2019
** Let them burn
** File description:
** PlasmaRifle hpp
*/

#ifndef PLASMARIFLE_HPP_
	#define PLASMARIFLE_HPP_

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		~PlasmaRifle();

		void attack() const;

	protected:
	private:
};

#endif /* !PLASMARIFLE_HPP_ */
