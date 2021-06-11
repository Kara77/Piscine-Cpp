/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    // Initialize internal resources
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
}

// Create additional functions here

static const char *Point_str(PointClass *this)
{
    char *str;
    int size;

    if (this == NULL)
        raise("NULL");
    size = snprintf(NULL, 0, "<%s (%d, %d)>>", this->base.__name__, this->x, this->y);
    if (!(str = malloc(size + 1)))
        raise("malloc fail");
    snprintf(str, size, "<%s (%d, %d)>>", this->base.__name__, this->x, this->y);
    return (str);
}

static PointClass *Point_add(PointClass *first, PointClass *second)
{
    int x;
    int y;
    Object *p3;

    x = first->x + second->x;
    y = first->y + second->y;
    p3 = (Object *)new(Point, x, y);
    return (p3);
}

static PointClass *Point_sub(PointClass *first, PointClass *second)
{
    int x;
    int y;
    Object *p3;

    x = first->x - second->x;
    y = first->y - second->y;
    p3 = (Object *)new(Point, x, y);
    return (p3);
}

static PointClass *Point_mul(PointClass *first, PointClass *second)
{
    int x;
    int y;
    Object *p3;

    x = first->x * second->x;
    y = first->y * second->y;
    p3 = (Object *)new(Point, x, y);
    return (p3);
}

static PointClass *Point_div(PointClass *first, PointClass *second)
{
    int x;
    int y;
    Object *p3;

    if (second->x == 0 && second->y == 0)
        raise("div by 0");
    x = first->x / second->x;
    y = first->y / second->y;
    p3 = (Object *)new(Point, x, y);
    return (p3);
}

static PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_str,
        .__add__ = (binary_operator_t)&Point_add,
        .__sub__ = (binary_operator_t)&Point_sub,
        .__mul__ = (binary_operator_t)&Point_mul,
        .__div__ = (binary_operator_t)&Point_div,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;