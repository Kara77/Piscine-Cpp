/*
** EPITECH PROJECT, 2019
** Mem PTR
** File description:
** ex01
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mem_ptr.h"

char *my_strcat(char *dest, char const *src)
{    
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while(src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc((my_strlen(str1) + my_strlen(str2)) + 1);
    *res = my_strcat(*res, str1);
    *res = my_strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    str_op->res = malloc((my_strlen(str_op->str1) +
        my_strlen(str_op->str2)) + 1);
    str_op->res = my_strcat(str_op->res, str_op->str1);
    str_op->res = my_strcat(str_op->res, str_op->str2);
}