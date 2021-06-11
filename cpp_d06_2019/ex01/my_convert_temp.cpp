/*
** EPITECH PROJECT, 2019
** Tex01
** File description:
** ex01 convert temp
*/

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

int main(void)
{
	double degree = 0;
	std::string type;

	std::cin >> degree;
	std::cin >> type;

	if (type == "Celsius") {
		std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<
			9.0 / 5.0 * degree + 32 << std::setw(16) << "Fahrenheit"
				<< std::endl;
	} else if (type == "Fahrenheit") {
		std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<
			5.0 / 9.0 * (degree - 32) << std::setw(16) << "Celsius" << std::endl;
	}
	return (0);
}