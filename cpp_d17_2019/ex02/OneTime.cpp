/*
** EPITECH PROJECT, 2019
** Ave
** File description:
** Onetime cpp
*/

#include <iostream>
#include "OneTime.hpp"

OneTime::OneTime(const std::string &key): _key(key), _i(0)
{
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    int test = plainchar;

    if (test >= 'A' && test <= 'Z') {
        if (_key[_i] >= 'A' && _key[_i] <= 'Z')
            test += _key[_i] - 'A';
        else
            test += _key[_i] - 'a';
        while (test > 'Z')
            test -= 26;
    } else if (test >= 'a' && test <= 'z') {
        if (_key[_i] >= 'A' && _key[_i] <= 'Z')
            test += _key[_i] - 'A';
        else
            test += _key[_i] - 'a';
        while (test > 'z')
            test -= 26;
    }
    std::cout << (char)test;
    _i++;
    if (_i >= _key.size())
        _i = 0;
}

void OneTime::decryptChar(char cipherchar)
{
    int test = cipherchar;

    if (test >= 'A' && test <= 'Z') {
        if (_key[_i] >= 'A' && _key[_i] <= 'Z')
            test -= _key[_i] - 'A';
        else
            test -= _key[_i] - 'a';
        while (test < 'A')
            test += 26;
    } else if (test >= 'a' && test <= 'z') {
        if (_key[_i] >= 'A' && _key[_i] <= 'Z')
            test -= _key[_i] - 'A';
        else
            test -= _key[_i] - 'a';
        while (test < 'a')
            test += 26;
    }
    std::cout << (char)test;
    _i++;
    if (_i >= _key.size())
        _i = 0;
}

void OneTime::reset()
{
    _i = 0;
}

/*
Antoine

Corentin

C += (A - 'A'); ?

o += (n - 'n'); 

*/