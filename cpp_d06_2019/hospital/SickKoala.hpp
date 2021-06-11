/*
** EPITECH PROJECT, 2019
** SickKoala
** File description:
** ex02 SickKoala hpp
*/

#ifndef SICKKOALA_HPP_H
#define SICKKOALA_HPP_H

struct SickKoala
{
	public:
			SickKoala(std::string name);
			~SickKoala();
			void poke();
			bool takeDrug(std::string my_str);
			void overDrive(std::string my_str);

	private:
			std::string name;
};

#endif