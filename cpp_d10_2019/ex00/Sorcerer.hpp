/*
** EPITECH PROJECT, 2019
** Ponymorphism
** File description:
** Sorcerer
*/

#ifndef SORCERER_HPP_
	#define SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

	public:
		Sorcerer(const std::string &name, const std::string &title);
		~Sorcerer();

		const std::string getName() const;
		const std::string getTitle() const;
        virtual void polymorph(const Victim &victim) const;

	protected:
        const std::string &_name;
        const std::string &_title;
	private:
};

std::ostream &operator<<(std::ostream &flux, Sorcerer const &a);

#endif /* !SORCERER_HPP_ */
