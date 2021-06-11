/*
** EPITECH PROJECT, 2019
** Old friends
** File description:
** ex00 hpp
*/

#ifndef EX00_HPP_
#define EX00_HPP_

#include <iostream>
#include <string>

template<typename T>

void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>

T min(T a, T b)
{
    if ( a < b)
        return (a);
    else
        return (b);
}

template<typename T>

T max(T a, T b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

template<typename T>

T add(T a, T b)
{
    return (a + b);
}

#endif /* !EX00_HPP_ */
