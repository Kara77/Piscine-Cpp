/*
** EPITECH PROJECT, 2019
** Compare
** File description:
** ex06 compare
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}

int compare_c(const string_t *this, const char *str)
{
    return ((strcmp(this->str, str)));
}