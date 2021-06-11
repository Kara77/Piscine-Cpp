/*
** EPITECH PROJECT, 2019
** My String
** File description:
** ex10 find.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    int i = 0;

    if (pos < 0)
        return (-1);
    while (this->str[pos] != str->str[i]) {
        if (this->str[pos] == '\0' || str->str[i] == '\0')
            return (-1);
        pos++;
    }
    return (pos);
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int i = 0;

    if (pos < 0)
        return (-1);
    while (this->str[pos] != str[i]) {
        if (this->str[pos] == '\0' || str[i] == '\0')
            return (-1);
        pos++;
    }
    return (pos);
}