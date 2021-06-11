/*
** EPITECH PROJECT, 2019
** vertex.c
** File description:
** Class for vertex
*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "new.h"
#include "vertex.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
}

static char const *Vertex_str(VertexClass *this)
{
    char *str;
    int size;

    if (this == NULL)
        raise("NULL");
    size = snprintf(NULL, 0, "<%s (%d, %d, %d)>>", this->base.__name__, this->x, this->y, this->z);
    if (!(str = malloc(size + 1)))
        raise("malloc fail");
    snprintf(str, size, "<%s (%d, %d, %d)>>", this->base.__name__, this->x, this->y, this->z);
    return (str);
}

static VertexClass *Vertex_add(VertexClass *first, VertexClass *second)
{
    int x;
    int y;
    int z;
    Object *p3;

    x = first->x + second->x;
    y = first->y + second->y;
    z = first->z + second->z;
    p3 = (Object *)new(Vertex, x, y, z);
    return (p3);
}

static VertexClass *Vertex_sub(VertexClass *first, VertexClass *second)
{
    int x;
    int y;
    int z;
    Object *p3;

    x = first->x - second->x;
    y = first->y - second->y;
    z = first->z - second->z;
    p3 = (Object *)new(Vertex, x, y, z);
    return (p3);
}

static VertexClass *Vertex_mul(VertexClass *first, VertexClass *second)
{
    int x;
    int y;
    int z;
    Object *p3;

    x = first->x * second->x;
    y = first->y * second->y;
    z = first->z * second->z;
    p3 = (Object *)new(Vertex, x, y, z);
    return (p3);
}

static VertexClass *Vertex_div(VertexClass *first, VertexClass *second)
{
    int x;
    int y;
    int z;
    Object *p3;

    if (second->x == 0 && second->y == 0 && second->z == 0)
        raise("div by 0");
    x = first->x / second->x;
    y = first->y / second->y;
    z = first->z / second->z;
    p3 = (Object *)new(Vertex, x, y, z);
    return (p3);
}

static VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_str,
        .__add__ = (binary_operator_t)&Vertex_add,
        .__sub__ = (binary_operator_t)&Vertex_sub,
        .__mul__ = (binary_operator_t)&Vertex_mul,
        .__div__ = (binary_operator_t)&Vertex_div,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class *Vertex = (Class *)&_description;