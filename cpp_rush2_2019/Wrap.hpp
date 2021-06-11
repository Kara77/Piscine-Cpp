/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Wrap.hpp
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"
#include "Toy.hpp"

class GiftPaper;
class Box;

class Wrap : public Object
{
    protected:

    bool _open;
    bool _full;
    Object *_obj;

    public:

    Wrap();
    ~Wrap();
    Object * openMe();
    void closeMe();
    void wrapMeThat(Object *obj);
    bool getFull() const;
    bool getOpen() const;
    void setOpen(bool open);
    void setFull(bool full);
};

#endif
