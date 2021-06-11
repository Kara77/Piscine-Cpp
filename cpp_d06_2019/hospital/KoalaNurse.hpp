/*
** EPITECH PROJECT, 2018
** Koala Nurse
** File description:
** ex03 .hpp
*/

#ifndef KOALA_NURSE_HPP_
#define KOALA_NURSE_HPP_

struct KoalaNurse
{
	public:
			KoalaNurse(int ID);
			~KoalaNurse();
			void giveDrug(std::string giveDrug, SickKoala koala);


	private:
			int ID;
			std::string Drug;
			std::string filename;
};

#endif