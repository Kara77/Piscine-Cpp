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
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Object.hpp"

class ITable
{
    public:
        virtual void collapse() = 0;
};

ITable *createTable();

#endif
