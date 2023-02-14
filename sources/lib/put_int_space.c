/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** put_int_space
*/

#include "../../includes/bsprintf.h"

void put_int_spaces(int nb_of_spaces, int nb_dot, int d, int neg)
{
    if (neg == 0) {
        if (nb_dot == 0 || nb_dot < lenght_int(d))
            put_spaces(nb_of_spaces, lenght_int(d));
        else if (nb_dot > lenght_int(d))
            put_spaces(nb_of_spaces, (nb_dot - lenght_int(d)) + lenght_int(d));
    }
    if (nb_dot != 0 && nb_dot > lenght_int(d)) {
        troncate_int(d, nb_of_spaces, nb_dot);
    }
    if (neg == 0)
        my_put_nbr(d);
    if (neg == 1) {
        my_put_nbr(d);
        if (nb_dot == 0 || nb_dot < lenght_int(d))
            put_spaces(nb_of_spaces, lenght_int(d));
        else if (nb_dot > lenght_int(d))
            put_spaces(nb_of_spaces, (nb_dot - lenght_int(d)) + lenght_int(d));
    }
}