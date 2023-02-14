/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** define structure
*/

#include "../includes/bsprintf.h"

struct_check_t define_struct(char *s)
{
    struct_check_t my_struct;

    my_struct.neg = (s[1] == '-') ? 1 : 0;
    my_struct.nb_of_spaces = number_before_symbol(s);
    my_struct.nb_afterdot = number_after_dot(s);

    return my_struct;
}