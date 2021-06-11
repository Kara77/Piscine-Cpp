/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 04
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "new.h"
#include "char.h"

typedef struct
{
    Class   base;
    char     c;
}   CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->c = (char)va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
}

static char const *Char_str(CharClass *this)
{
    char *str;
    int size;

    size = snprintf(NULL, 0, "<%s (%c)>", this->base.__name__, this->c);
    if (!(str = malloc(size + 1)))
        raise("str malloc failed");
    str[size] = 0;
    sprintf(str, "<%s (%c)>", this->base.__name__, this->c);
    return (str);
}

static CharClass *Char_add(CharClass *first, CharClass *second)
{
    char c;
    Object *p3;

    c = first->c + second->c;
    p3 = new(Char, c);
    return (p3);
}

static CharClass *Char_sub(CharClass *first, CharClass *second)
{
    char c;
    Object *p3;

    c = first->c - second->c;
    p3 = new(Char, c);
    return (p3);
}

static CharClass *Char_mul(CharClass *first, CharClass *second)
{
    char c;
    Object *p3;

    c = first->c * second->c;
    p3 = new(Char, c);
    return (p3);
}

static CharClass *Char_div(CharClass *first, CharClass *second)
{
    char c;
    Object *p3;

    if (second->c != 0) {
        c = first->c / second->c;
        p3 = new(Char, c);
        return (p3);
    } else {
        raise("error");
    }
}

static bool Char_eq(CharClass *first, CharClass *second)
{
    if (first->c == second->c) {
        return (true);
    } else {
        return (false);
    }
}

static bool Char_gt(CharClass *first, CharClass *second)
{
    if (first->c > second->c) {
        return (true);
    } else {
        return (false);
    }
}

static bool Char_lt(CharClass *first, CharClass *second)
{
    if (first->c < second->c) {
        return (true);
    } else {
        return (false);
    }
}

static CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&Char_str,
        .__add__ = (binary_operator_t)&Char_add,
        .__sub__ = (binary_operator_t)&Char_sub,
        .__mul__ = (binary_operator_t)&Char_mul,
        .__div__ = (binary_operator_t)&Char_div,
        .__eq__ = (binary_comparator_t)&Char_eq,
        .__gt__ = (binary_comparator_t)&Char_gt,
        .__lt__ = (binary_comparator_t)&Char_lt
    },
    .c = 0
};

const Class *Char = (Class *)&_description;