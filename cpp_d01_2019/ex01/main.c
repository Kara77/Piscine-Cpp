/*
** EPITECH PROJECT, 2019
** The Menger Sponge
** File description:
** ex01
*/

#include "menger.h"

int ini_multiplicator(char *str)
{
    int i = 0;
    int multiplicator = 1;

    while(str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9' && i == 0) {
           i++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            i++;
            multiplicator = multiplicator * 10;
        } else { 
            return (multiplicator);
        }
    }
    return (multiplicator);
}

int my_atoi(char *str)
{
    int multiplicator = ini_multiplicator(str);
    int integer = 0;

    while (str[0] >= '0' && str[0] <= '9') {
        integer = integer + (str[0] - 48) * multiplicator;
        multiplicator = multiplicator / 10;
        (str)++;
    }
    return (integer);
}


int main(int argc, char *argv[])
{
    int my_squares = my_atoi(argv[1]);
    int my_levels = my_atoi(argv[2]);
    
    if (argc != 3)
        return (0);
    else if (my_squares <= my_levels)
        return (0);
    menger(my_squares, my_levels, 0, 0);
    return (0);
}