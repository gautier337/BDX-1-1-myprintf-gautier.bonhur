/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** putspaces
*/

#include "../../includes/bsprintf.h"

void put_spaces(int nbr_of_spaces, int to_delete)
{
    int spaces = nbr_of_spaces - to_delete;

    for (; spaces > 0; spaces--)
        my_putchar(' ');
}