/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Wrap.cpp
*/

#include "Wrap.hpp"

Wrap::Wrap()
{
    _open = true;
    _full = false;
    std::cout << "whistles while working" << std::endl;
}

Wrap::~Wrap()
{}

void Wrap::wrapMeThat(Object *obj)
{
    if ((this->getOpen()) && (!this->getFull())) {
        std::cout << "tuuuut tuuut tuut" << std::endl;
        this->setFull(true);
        this->_obj = obj;
    }
}

Object *Wrap::openMe()
{
    if (!this->getOpen())
        this->setOpen(true);
    return (this->_obj);
}

void Wrap::closeMe()
{
    if (this->getOpen())
        this->setOpen(false);
}

bool Wrap::getOpen() const
{
    return _open;
}

bool Wrap::getFull() const
{
    return _full;
}

void Wrap::setOpen(bool open)
{
    _open = open;
}

void Wrap::setFull(bool full)
{
    _full = full;
}
