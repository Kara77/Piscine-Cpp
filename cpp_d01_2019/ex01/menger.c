/*
** EPITECH PROJECT, 2019
** The Menger Sponge
** File description:
** ex01
*/

#include <stdio.h>

void display(int my_squares, int x, int y)
{
    printf("%03d ", my_squares);
    printf("%03d ", x + my_squares);
    printf("%03d\n", y + my_squares);
}

int menger(int my_squares, int my_levels, int x, int y)
{
    if (my_levels == 0)
        return (0);
    my_squares = my_squares / 3;
    display(my_squares, x, y);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != 1 || j != 1) {
                menger(my_squares, my_levels - 1,
                i * my_squares + x, j * my_squares + y);
            }
        }
    }
}