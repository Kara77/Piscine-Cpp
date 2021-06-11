/*
** EPITECH PROJECT, 2019
** project_name rush3
** File description:
** main linux
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "MonitorDisplay.hpp"

int main(int argc, char **argv)
{
	MonitorDisplay *display = new MonitorDisplay();
	if (argc != 2)
		return (84);
	display->getDisplayType(argv[1]);
	display->Display();
	return (0);
}
