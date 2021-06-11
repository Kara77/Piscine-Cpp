/*
** EPITECH PROJECT, 2019
** Ponymorphism
** File description:
** Peon hpp
*/

#ifndef PEON_HPP_
	#define PEON_HPP_

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{

	public:
		Peon(const std::string &name);
		~Peon();

        void getPolymorphed() const override;

	protected:
	private:
};

#endif /* !PEON_HPP_ */
