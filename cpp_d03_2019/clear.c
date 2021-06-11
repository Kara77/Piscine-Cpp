/*
** EPITECH PROJECT, 2019
** Clear
** File description:
** ex04 clear
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void clear(string_t *this)
{
    assign_c(this, "\0");
}