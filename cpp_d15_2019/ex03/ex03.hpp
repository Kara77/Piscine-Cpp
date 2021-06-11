/*
** EPITECH PROJECT, 2019
** Another iteration
** File description:
** ex03 hpp
*/

#ifndef EX03_HPP_
	#define EX03_HPP_

#include <iostream>

template<typename T>
void foreach(const T array[], void (*func)(const T &elem), int size)
{
    int i = 0;

    while (i < size) {
        func(array[i]);
        i++;
    }
}


template<typename T>
void print(const T &elem)
{
    std::cout << elem << std::endl;
}


#endif /* !EX03_HPP_ */
