/*
** EPITECH PROJECT, 2019
** Testing
** File description:
** ex04 hpp
*/

#ifndef EX04_HPP_
	#define EX04_HPP_

#include <iostream>

template<typename T>
bool equal(const T a, const T b)
{
    if (a == b)
        return (true);
    else
        return (false);
}

template<typename T>
class Tester
{   
    public:
        T first;
    bool equal(const T a, const T b)
    {
        if (a == b)
            return (true);
        else
            return (false);
    }
};

#endif /* !EX04_HPP_ */
