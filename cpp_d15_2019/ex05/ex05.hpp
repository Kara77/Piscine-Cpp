/*
** EPITECH PROJECT, 2020
** ex05
** File description:
** ex05 hpp
*/

#ifndef ex05
#define ex05

#include <iostream>

template<typename T>

class array {
    public: array() : _array(0), _size(0) {}
            array(unsigned int n) : _array(new T[n]), _size(n) {}
            array(array const &copy) : _array(new T[copy._size]), _size(copy.size) {
                for (unsigned int i = 0; i < copy._size; i++) {
                    _array[i] = copy._array[i];
                }
            }
};

#endif /* !ex05 */
