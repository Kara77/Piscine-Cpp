/*
** EPITECH PROJECT, 2018
** Koala Nurse
** File description:
** ex03 .cpp
*/

#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <iomanip>
#include <boost/algorithm/string/predicate.hpp>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int ID) : ID(ID)
{

}

KoalaNurse::~KoalaNurse()
{
	std::cout << "Nurse " << ID << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string Drug, SickKoala *koala)
{
	koala.takedrug(Drug);
}

std::string readReport(std::string filename)
{
	std::drugName = NULL;

	std::ifstream file(filename);
	if (file) {
		getline(filename, drugName);
		while (filename.back != ".") {
			filename.pop_back;
		}
		filename.pop_back;
		std::cout << "Nurse " << ID << " Kreog! Mr." << filename << "needs a "
			<< drugName << std::endl;
	}
	return (drugName);
}

void KoalaNurse::timeCheck()
{
		
}