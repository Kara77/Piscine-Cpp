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

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem, 
unsigned int position)
{
    unsigned int i = 0;

    if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    double_list_t list = malloc(sizeof(doublelist_node_t));
    list->value = elem;
    list->next = NULL;
    if (list == NULL) {
        return (0);
    } else {
        double_list_t temp = (*front_ptr);
        while (i != position) {
            i++;  
        }
        temp->next = list;
        return (1);
    }
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    if (*front_ptr != NULL) {
        double_list_t second_element = (*front_ptr)->next;
        free((*front_ptr));
        return (1);
    } else
        return (0);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    if ((*front_ptr) == NULL)
        return (0);
    if ((*front_ptr)->next == NULL) {
        free(*front_ptr);
        return (1);
    }
    double_list_t temp = (*front_ptr);
    double_list_t ptemp = (*front_ptr);
    while (temp->next != NULL) {
        ptemp = temp;
        temp = temp->next;
    }
    ptemp->next = NULL;
    free(temp);
    return (1);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr, 
                                            unsigned int position)
{
    unsigned int i = 0;

    if ((*front_ptr) == NULL)
        return (0);
    if ((*front_ptr)->next == NULL) {
        free(*front_ptr);
        return (1);
    }
    double_list_t temp = (*front_ptr);
    double_list_t ptemp = (*front_ptr);
    while (i != position) {
        ptemp = temp;
        i++;
    }
    ptemp->next = NULL;
    free(temp);
    return (1);
}