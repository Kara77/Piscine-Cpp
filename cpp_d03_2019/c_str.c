/*
** EPITECH PROJECT, 2019
** Copy
** File description:
** ex08 c_str
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

const char *c_str(const string_t *this)
{
    return(this->str);
}