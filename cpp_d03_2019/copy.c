/*
** EPITECH PROJECT, 2019
** Copy
** File description:
** ex07 copy
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int count = 0;

    while (n > 0) {
        s[count] = this->str[pos];
        pos++;
        count++;
        n--;
    }
    s[count] = '\0';
    return (count);
}