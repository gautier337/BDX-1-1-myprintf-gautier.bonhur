/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** check_symbol
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/bsprintf.h"

void check_symbol4(char *s, va_list list, int nbr_of_spaces, int nb_afterdot)
{
    char c;

    switch (*s)
    {
    case 'b':
        my_put_nbr_base_uns(va_arg(list, unsigned int), "01");
        break;
    case 'c':
        c = (char) va_arg(list, int);
        if (c == '\0') {
            my_putchar('\0');
            break;
        } else {
            put_spaces(nbr_of_spaces, 1);
            my_putchar(c);
            break;
        }
    }
}

void check_symbol3(char *s, va_list list, int nbr_of_spaces, int nb_afterdot)
{
    switch (*s)
    {
    case 'x':
        dec_to_hex_low(va_arg(list, int), nbr_of_spaces);
        break;
    case 'o':
        my_put_nbr_base(va_arg(list, int), "01234567");
        break;
    case 'u':
        my_put_nbr_unsigned(va_arg(list, unsigned int), "0123456789");
        break;
    case 'p':
        my_putstr("0x");
        my_put_nbr_base(va_arg(list, long int), "0123456789abcdef");
        break;
    default:
        check_symbol4(s, list, nbr_of_spaces, nb_afterdot);
    }
}

void check_symbol2(char *s, va_list list, struct struct_check info)
{
    int d;

    switch (*s)
    {
    case 'd':
    case 'i':
        d = va_arg(list, int);
        put_int_spaces(info.nb_of_spaces, info.nb_afterdot, d, info.neg);
        break;
    case 'X':
        dec_to_hex(va_arg(list, int), info.nb_of_spaces);
        break;
    default:
        check_symbol3(s, list, info.nb_of_spaces, info.nb_afterdot);
    }
}

int check_symbol(char *s, va_list list, struct struct_check info)
{
    char *str;
    int nb_of_spaces = info.nb_of_spaces;
    int nb_afterdot = info.nb_afterdot;

    switch (*s)
    {
    case 's':
        str = va_arg(list, char *);
        troncate(str, nb_of_spaces, nb_afterdot, info.neg);
        break;
    default:
        check_symbol2(s, list, info);
    }
    return 0;
}