/*
** EPITECH PROJECT, 2021
** main my_printf
** File description:
** checkcondition
*/

#include "../includes/bsprintf.h"

char *check_condition(char *s, int stop)
{
    if (*s != '%' && stop == 0) {
            my_putchar(*s);
            s++;
    }
    return s;
}