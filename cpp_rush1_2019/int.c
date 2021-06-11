/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <string.h>
#include "point.h"
#include <stdarg.h>
#include "new.h"
#include "int.h"

typedef struct
{
    Class   base;
    int     x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

static int len_of_int(int x)
{
    int i = 0;

    while (x > 0) {
        i++;
        x = x/10;
    }
    i++;
    return (i);
}

static const char *Int_str(IntClass *this)
{
    char *str;
    int len = len_of_int(this->x);
    int len2 = strlen(this->base.__name__);
    int totlen = len + len2 + 6;

    str = malloc(sizeof(char) * totlen);
    snprintf(str, totlen, "<%s (%d)>", this->base.__name__,
    this->x);
    return (str);
}

static IntClass *Int_add(IntClass *first, IntClass *second)
{
    int x;
    Object *p3;

    x = first->x + second->x;
    p3 = new(Int, x);
    return (p3);
}

static IntClass *Int_sub(IntClass *first, IntClass *second)
{
    int x;
    Object *p3;

    x = first->x - second->x;
    p3 = new(Int, x);
    return (p3);
}

static IntClass *Int_mul(IntClass *first, IntClass *second)
{
    int x;
    Object *p3;

    x = first->x * second->x;
    p3 = new(Int, x);
    return (p3);
}

static IntClass *Int_div(IntClass *first, IntClass *second)
{
    int x;
    Object *p3;

    if (second->x == 0)
        raise("div by 0");
    x = first->x / second->x;
    p3 = new(Int, x);
    return (p3);
}

static bool Int_eq(IntClass *first, IntClass *second)
{
    if (first->x == second->x)
        return (true);
    return (false);
}

static bool Int_gt(IntClass *first, IntClass *second)
{
    if (first->x > second->x)
        return (true);
    return (false);
}

static bool Int_lt(IntClass *first, IntClass *second)
{
    if (first->x < second->x)
        return (true);
    return (false);
}

static IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_str,
        .__add__ = (binary_operator_t)&Int_add,
        .__sub__ = (binary_operator_t)&Int_sub,
        .__mul__ = (binary_operator_t)&Int_mul,
        .__div__ = (binary_operator_t)&Int_div,
        .__eq__ = (binary_comparator_t)&Int_eq,
        .__gt__ = (binary_comparator_t)&Int_gt,
        .__lt__ = (binary_comparator_t)&Int_lt,
    },
    .x = 0
};

const Class *Int = (Class *)&_description;