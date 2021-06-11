/*
** EPITECH PROJECT, 2019
** Fruits
** File description:
** FruitBox cpp
*/

#include <iostream>
#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits() const
{
    return (_size);
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *temp;
    FruitNode *element;
    
    temp = this->_
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *temp;

    if (_list == NULL)
        return (0);
    temp = _list;
    _list = _list->next;
    _nbFruit--;
    return (temp->fruit);
}

FruitNode *FruitBox::head()
{
    return _list;
}