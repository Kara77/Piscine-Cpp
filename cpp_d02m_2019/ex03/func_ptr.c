/*
** EPITECH PROJECT, 2019
** Func PTR
** File description:
** ex03
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int i = strlen(str) - 1;

    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");
}

void print_upper(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        printf("%c", toupper(str[i]));
        i++;
    }
    printf("\n");
}

void print_42(const char *str)
{
    int i = 42;
    printf("%d\n", i);
}

void do_action(action_t action , const char *str)
{
    action_t i;
    void (*my_functions[4])(const char *str) = {&print_normal,
        &print_reverse, &print_upper, &print_42};

    for (i = PRINT_NORMAL; i <= PRINT_42; i++) {
        if (action == i) {
            (*my_functions[i])(str);
            break;
        }
    }
}