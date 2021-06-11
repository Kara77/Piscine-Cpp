/*
** EPITECH PROJECT, 2019
** Add Mul - Basic Pointers
** File description:
** ex00
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *second)
{
    int temp = *first;
    *first = *first + *second;
    *second = temp * *second;
}