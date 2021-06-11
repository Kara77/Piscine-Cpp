//
// EPITECH PROJECT, 2019
// Rush3
// File description:
// main.cpp
//

#include <ostream>
#include <iostream>
#include "include/main.hpp"

int check_param(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error : params !" << std::endl;
        return 0;
    }
    if (av[1][1] == 'G')
        return 1;
    else if (av[1][1] == 'N')
        return 2;
    std::cout << "Error : params !" << std::endl;
    return 0;
}

int main(int ac, char **av)
{
    int nbr = check_param(ac, av);

    if (nbr == 1)
        graphic();
    else if (nbr == 2)
        ncurses();
    return 0;
}
