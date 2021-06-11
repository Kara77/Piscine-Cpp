/*
** EPITECH PROJECT, 2019
** Append
** File description:
** ex02 append.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    this->str = realloc(this->str, *(ap->str));
    strcat(this->str, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    this->str = realloc(this->str, strlen(this->str) + 
        (size_t)strlen(ap) + 1);
    strcat(this->str, ap);
}