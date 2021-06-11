/*
** EPITECH PROJECT, 2019
** float.c
** File description:
** Class float
*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "new.h"
#include "float.h"

typedef struct
{
    Class   base;
    float   f;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->f = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

static char const *Float_str(FloatClass *this)
{
    char *str;
    int size;

    size = snprintf(NULL, 0, "<%s (%f)>", this->base.__name__, this->f);
    if (!(str = malloc(size + 1)))
        raise("str malloc failed");
    str[size] = 0;
    sprintf(str, "<%s (%f)>", this->base.__name__, this->f);
    return (str);
}

static FloatClass *Float_add(FloatClass *first, FloatClass *second)
{
    float f;
    Object *p3;

    f = first->f + second->f;
    p3 = new(Float, f);
    return (p3);
}

static FloatClass *Float_sub(FloatClass *first, FloatClass *second)
{
    float f;
    Object *p3;

    f = first->f - second->f;
    p3 = new(Float, f);
    return (p3);
}

static FloatClass *Float_mul(FloatClass *first, FloatClass *second)
{
    float f;
    Object *p3;

    f = first->f * second->f;
    p3 = new(Float, f);
    return (p3);
}

static FloatClass *Float_div(FloatClass *first, FloatClass *second)
{
    float f;
    Object *p3;

    if (second->f == 0)
        raise("Div by 0");
    f = first->f / second->f;
    p3 = new(Float, f);
    return (p3);
}

static bool Float_eq(FloatClass *first, FloatClass *second)
{
    if (first->f == second->f)
        return (true);
    return (false);
}

static bool Float_gt(FloatClass *first, FloatClass *second)
{
    if (first->f > second->f)
        return (true);
    return (false);
}

static bool Float_lt(FloatClass *first, FloatClass *second)
{
    if (first->f < second->f)
        return (true);
    return (false);
}

static FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__add__ = (binary_operator_t)&Float_add,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt
    },
    .f = 0
};

const Class *Float = (Class *)&_description;