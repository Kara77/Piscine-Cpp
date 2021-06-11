/*
** EPITECH PROJECT, 2019
** The return of min
** File description:
** ex02 hpp
*/

#ifndef EX02_HPP_
	#define EX02_HPP_

#include <iostream>

template<typename T>
T min(T a, T b)
{
    if (b < a) {
        std::cout << "template min" << std::endl;
        return (b);
    } else {
        std::cout << "template min" << std::endl;
        return (a);
    }
}

int min(int a, int b)
{
    if (b < a) {
        std::cout << "non-template min" << std::endl;
        return (b);
    } else {
        std::cout << "non-template min" << std::endl;
        return (a);
    }
}

template<typename T>
T templateMin(T array[], int size)
{
    int i = 1;
    T temp = array[0];

    while (i < size) {
        temp = min((float)array[i], (float)temp); 
        i++;
    }
    return (temp);
}

int nonTemplateMin(int array[], int size)
{
    int i = 1;
    int temp = array[0];

    while (i < size) {
        temp = min((int)array[i], (int)temp); 
        i++;
    }
    return (temp);
}

#endif /* !EX02_HPP_ */