/*
** EPITECH PROJECT, 2019
** Tab to 2dtab
** File description:
** ex02
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    (*res) = malloc(sizeof(int *) * length);
    for(int i = 0; i < length; i++) {
        (*res)[i] = malloc(sizeof(int) * (width + 1));
        for(int j = 0; j < width; j++) {
            (*res)[i][j] = tab[i * width + j];
        }
    }
}