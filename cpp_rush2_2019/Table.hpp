/*
** EPITECH PROJECT, 2018
** project_name rush2
** File description:
** abstract table
*/
#ifndef _ITABLE_HPP_
#define _ITABLE_HPP_

#include <iostream>
#include <vector>
#include "Object.hpp"

class ITable
{
    public:
        virtual void collapse() = 0;
};

ITable *createTable();

class PapaXmasTable : public ITable
{
    std::vector<Object> charge;
    ~PapaXmasTable();
    void collapse();
    public:
        PapaXmasTable();
        Object take();
        void setCharge(Object in);
};

#endif
