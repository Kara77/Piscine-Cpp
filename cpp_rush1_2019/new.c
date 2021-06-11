/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** new.c
*/

#include "new.h"
#include "player.h"


Object *new(const Class *class, ...)
{
    Object *obj;
    va_list ap;

    va_start(ap, class);
    obj = va_new(class, &ap);
    va_end(ap);
    return (obj);
}

Object *va_new(const Class *class, va_list* ap)
{
    Class *ret = malloc(class->__size__);

    if (!ret)
        raise("Failed Malloc");
    if (!memcpy(ret, class, class->__size__))
        raise("out of memory");
    if (class->__ctor__)
        class->__ctor__(ret, ap);
    return ((Object*)ret);
}

void delete(Object *ptr)
{
    Class *cast = ptr;

    if (ptr && cast->__dtor__)
        cast->__dtor__(ptr);
    if (ptr)
        free(ptr);
}