/*
** EPITECH PROJECT, 2019
** Copy
** File description:
** ex09 empty
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int empty(const string_t *this)
{
    if (strlen(this->str) == 0)
        return (1);
    return (0);
}