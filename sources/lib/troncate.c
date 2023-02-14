/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** troncateint
*/

#include "../../includes/bsprintf.h"

void display(char *str, int nbr_of_spaces, int nb_afterdot, int neg)
{
    if (nb_afterdot == 0 && neg == 0) {
        put_spaces(nbr_of_spaces, my_strlen(str));
        my_putstr(str);
    }
    if (nb_afterdot == 0 && neg == 1) {
        my_putstr(str);
        put_spaces(nbr_of_spaces, my_strlen(str));
    }
}

void troncate_int(int nbr, int nbr_of_spaces, int nb_afterdot)
{
    int int_lenght = lenght_int(nbr);

    if (nb_afterdot > int_lenght) {
        for (int i = 0; i < nb_afterdot - int_lenght; i++)
            my_putchar('0');
    }
}

void troncate(char *str, int nbr_of_spaces, int nb_afterdot, int neg)
{
    char new_str[my_strlen(str)];
    int troncate = 0;
    int i = 0;

    if (nb_afterdot != 0) {
        for (; i != nb_afterdot; i++)
            new_str[i] = str[i];
        new_str[i] = '\0';
    }
    if (nb_afterdot != 0 && neg == 1) {
        my_putstr(new_str);
        put_spaces(nbr_of_spaces, my_strlen(new_str));
    }
    if (nb_afterdot != 0 && neg == 0) {
        put_spaces(nbr_of_spaces, my_strlen(new_str));
        my_putstr(new_str);
    }
    display(str, nbr_of_spaces, nb_afterdot, neg);
}