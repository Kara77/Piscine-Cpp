/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** Federation hpp
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_

#include <iostream>
#include <string>
#include "WarpSystem.hpp"

namespace Federation
{
	namespace Starfleet
	{
		class Captain
		{
			public :
					Captain(std::string name);
					~Captain();
					std::string getName();
					int getAge();
					void setAge(int age);
			private :
					std::string _name;
					int _age;
		};

		class Ensign
		{
			public :
					Ensign(std::string name);
					~Ensign();
					std::string name;
		};

		class Ship
		{
			public :
					Ship(int length, int width, std::string name, short maxWarp);
					~Ship();
					void setupCore(WarpSystem::Core *core);
					void checkCore();
					void promote(Federation::Starfleet::Captain *captain);
			private :
					int  _length;
					int  _width;
					std::string _name;
					short  _maxWarp;
					WarpSystem::Core *_core;
					Federation::Starfleet::Captain *captain;
		};
	}

		class Ship
		{
			public :
					Ship(int length, int width, std::string name);
					~Ship();
					void setupCore(WarpSystem::Core *core);
					void checkCore();
			private :
					int  _length;
					int  _width;
					std::string _name;
					short  _maxWarp = 1;
					WarpSystem::Core *_core;
		};
}
#endif