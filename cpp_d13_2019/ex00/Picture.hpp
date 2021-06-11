/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Picture hpp
*/

#ifndef PICTURE_HPP_
	#define PICTURE_HPP_

#include <iostream>

class Picture {

	public:
		Picture(const std::string &file);
		Picture();
        ~Picture();

        bool getPictureFromFile(const std::string &file);

        std::string data;
	protected:
	private:
};

#endif /* !PICTURE_HPP_ */