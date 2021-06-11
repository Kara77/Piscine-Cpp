/*
** EPITECH PROJECT, 2019
** Size
** File description:
** ex05 size
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int size(const string_t *this)
{
    if (this->str != NULL)
        return (strlen(this->str));
    return (-1);
}