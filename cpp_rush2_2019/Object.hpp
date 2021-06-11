/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Object.hpp
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>
#include <vector>
#include <string>

class Object {
	protected:
		std::string _title;

	public:
		Object(std::string title = "object");
		~Object();
		virtual void isTaken();
		std::string getTitle() const;
};

Object ** MyUnitTests();
Object *MyUnitTests(Object **);

#endif
