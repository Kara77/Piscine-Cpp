/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** LittlePony.hpp
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy{
	protected:

	public:
		LittlePony(std::string aTitle);
		~LittlePony();
		void isTaken();

};

#endif
