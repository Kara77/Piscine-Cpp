/*
** EPITECH PROJECT, 2019
** Ave
** File description:
** Cesar cpp
*/

#include <iostream>
#include "Cesar.hpp"

Cesar::Cesar(): _count(0)
{
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    int test = plainchar;
    if (test >= 'A' && test <= 'Z') {
        test += 3 + _count;
        while (test > 'Z') {
            test -= 26;
        }
    } else if (test >= 'a' && test <= 'z') {
        test += 3 + _count;
        while (test > 'z') {
            test -= 26;
        }
    }
    std::cout << (char)test;
    _count++;
}

void Cesar::decryptChar(char cipherchar)
{
    if (cipherchar >= 'A' && cipherchar <= 'Z') {
        cipherchar -= 3 + _count;
        while (cipherchar < 'A') {
            cipherchar += 26;
        }
    } else if (cipherchar >= 'a' && cipherchar <= 'z') {
        cipherchar -= 3 + _count;
        while (cipherchar < 'a') {
            cipherchar += 26;
        }
    }
    std::cout << cipherchar;
    _count++;
}

void Cesar::reset()
{
    _count = 0;
}