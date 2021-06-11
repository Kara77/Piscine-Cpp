/*
** EPITECH PROJECT, 2019
** Ponymorphisme
** File description:
** Victim hpp
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <iostream>

class Victim {

	public:

		Victim(const std::string &name);
		~Victim();

		const std::string getName() const;
        virtual void getPolymorphed() const;

	protected:
        const std::string &_name;
	private:
};

std::ostream &operator<<(std::ostream &flux, Victim const &a);

#endif /* !VICTIM_HPP_ */
