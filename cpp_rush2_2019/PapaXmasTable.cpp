/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** PapaXmaxTable.cpp
*/

#include "PapaXmasTable.hpp"

PapaXmasTable::PapaXmasTable()
{
    Object *toy1 = new Teddy("teddy");
    Object *toy2 = new LittlePony("pony");
    Object *box1 = new Box();
    Object *box2 = new Box();
    Object *pap1 = new GiftPaper();
    Object *pap2 = new GiftPaper();
    charge.push_back(toy1);
    charge.push_back(toy2);
    charge.push_back(box1);
    charge.push_back(box2);
    charge.push_back(pap1);
    charge.push_back(pap2);
}

PapaXmasTable::~PapaXmasTable()
{}

void PapaXmasTable::collapse()
{
    if (charge.size >= 10)
        this->~PapaXmasTable();
}

Object *PapaXmasTable::take(int pos)
{
    if (charge.size >= pos)
    {
        Object *temp = charge.at(pos);
        charge.at(pos) = NULL;
        return (temp);
    } 
    else
        return (NULL);
}

void PapaXmasTable::setCharge(Object *in)
{
    charge.push_back(in);
}

std::vector<Object*> PapaXmasTable::getCharge()
{
    return (charge);
}

ITable *createTable() 
{
    return (new PapaXmasTable());
}