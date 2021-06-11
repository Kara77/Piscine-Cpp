/*
** EPITECH PROJECT, 2019
** AT
** File description:
** ex03 at.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (pos < 0 || pos > (strlen(this->str) -1))
        return (-1);
    else
        return(this->str[pos]);
}