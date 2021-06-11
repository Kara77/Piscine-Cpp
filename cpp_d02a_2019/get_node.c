/*
** EPITECH PROJECT, 2019
** Simple list
** File description:
** ex00
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    return(list->value);
}

double double_list_get_elem_at_back(double_list_t list)
{
    if (list == NULL)
        return (0);
    if (list->next == NULL)
        return (list->value);
    while (list->next != NULL) {
        list = list->next;
    }
    return (list->value);
}

double double_list_get_elem_at_position(double_list_t list, unsigned int position)
{
    if (position = 0)
        return (double_list_get_elem_at_front(list));
    for (unsigned int i = 0; i < position && list != NULL; i++) {
        list = list->next;
    }
    if (list == NULL)
        return (0);
    else
        return (list->value);
}

doublelist_node_t *list_get_first_node_with_value(double_list_t list, double value)
{
    doublelist_node_t *temp = list;
    while (temp != NULL) {
        if (temp->value == value)
            return (temp);
        temp = temp->next;
    }
    return (NULL);
}