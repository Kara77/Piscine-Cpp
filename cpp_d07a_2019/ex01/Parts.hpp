/*
** EPITECH PROJECT, 2019
** ex01
** File description:
** Parts hpp
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>

class Arms {

	public:
        Arms(std::string serial = "A-01", bool functional = true);
        ~Arms();
        bool isFunctionnal();
        std::string serial();
        void informations();

	private:
        std::string _serial;
        bool _functional;
};

class Legs {

	public:
        Legs(std::string serial = "L-01", bool functional = true);
		~Legs();
        bool isFunctionnal();
        std::string serial();
        void informations();

	private:
        std::string _serial;
        bool _functional;
};

class Head {
    
	public:
        Head(std::string serial = "H-01", bool functional = true);
		~Head();
        bool isFunctionnal();
        std::string serial();
        void informations();

	private:
        std::string _serial;
        bool _functional;
};
#endif /* !PARTS_HPP_ */
