/*
** EPITECH PROJECT, 2019
** Double list
** File description:
** ex00
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"
#include "get_node.c"
#include "manage_add_elem.c"

unsigned int double_list_get_size(double_list_t list)
{
    unsigned int i = 1;

    if (list == NULL)
        return (i);
    else
        for (; (list = list->next); i++);
    return (i);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (1);
    else
        return (0);
}

void double_list_dump(double_list_t list)
{
    if (list == NULL)
        return;
    while (list != NULL) {
        printf("%f\n", list->value);
        list = list->next;
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *list = malloc(sizeof(doublelist_node_t));
    if (list == NULL)
        return (0);
    list->value = elem;
    if ((*front_ptr) != NULL) {
        list->next = (*front_ptr);
    } else {
        list->next = NULL;
        (*front_ptr) = list;
    }
    return (1);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *temp = (*front_ptr);

    doublelist_node_t *list = malloc(sizeof(doublelist_node_t));
    list->value = elem;
    if (temp == NULL) {
        double_list_add_elem_at_front(front_ptr, elem);
    } else {
        list->next = NULL;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        list->value = elem;
        temp->next = list;
        return (1);
    }
}

/*int main(void) {
    double_list_t double_list_head = NULL;
    unsigned int size;
    double i = 5.2;
    double j = 42.5;
    double k = 3.3;

    double_list_add_elem_at_back(&double_list_head, i);
    double_list_add_elem_at_back(&double_list_head, j);
    double_list_add_elem_at_back(&double_list_head, k);

    size = double_list_get_size(double_list_head);
    printf("Il y a %u elements dans la liste\n", size);
    double_list_dump(double_list_head);

    double_list_del_elem_at_back(&double_list_head);
    double_list_del_elem_at_position(&double_list_head, 0);

    size = double_list_get_size(double_list_head);
    printf("Il y a %u elements dans la liste\n", size);
    double_list_dump(double_list_head);
    return(0);
}*/