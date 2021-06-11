/*
** EPITECH PROJECT, 2019
** Assign
** File description:
** ex01 assign.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    this->str = realloc(this->str, strlen(str->str) + 1);
    strcpy(this->str, str->str);
}

void assign_c(string_t *this, const char *s)
{
    this->str = realloc(this->str, (size_t)strlen(s) + 1);
    strcpy(this->str, (char*)s);
}