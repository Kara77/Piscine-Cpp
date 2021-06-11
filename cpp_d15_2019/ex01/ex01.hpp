/*
** EPITECH PROJECT, 2019
** Compare
** File description:
** ex01 hpp
*/

#ifndef EX01_HPP_
	#define EX01_HPP_

#include <iostream>
#include <string.h>

template<typename T>

int compare(const T &a, const T &b)
{
    if (a == b)
        return (0);
    else if (a < b)
        return (-1);
    else
        return (1);
}

int compare(const char *a, const char *b)
{
    if (strcmp(a, b) == 0)
        return (0);
    else if (strcmp(a, b) > 0)
        return (1);
    else
        return (-1);
}

#endif /* !EX01_HPP_ */