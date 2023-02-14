/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** main
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/bsprintf.h"

int number_after_dot(char *s)
{
    int result;
    int yesorno = 0;

    for (int x = 0; x != my_strlen(s) && !(s[x] >= 'a' && s[x] <= 'z'); x++) {
        if (s[x] == '.')
            yesorno = 1;
    }
    for (int i = my_strlen(s); *s != '.' && yesorno == 1; s++);
    if (*s == '.')
        s++;
    result = my_getnbr(s);

    return result;
}

int number_before_symbol(char *s)
{
    int counter;
    struct_check_t my_struct;

    s++;
    if (*s == '-')
        s++;
    counter = my_getnbr(s);

    return counter;
}

char *forwad_ptr_to_symbol(char *s)
{
    int space = 0;

    s++;
    if (*s == ' ')
        space = 1;
    for (; (*s == ' ') ||
        (*s >= '0' && *s <= '9') ||
        (*s == '.') ||
        (*s == '-');
        s++);
    if (*s != 's' && *s != '%' && space == 1) {
        my_putchar(' ');
    }
    if (*s == '%')
        my_putchar('%');
    return s;
}

int my_printf(char *s, ...)
{
    va_list list;
    struct_check_t my_struct;

    va_start(list, s);
    for (int stop = 0; *s && stop == 0;) {
        if ((*s == '%' && s[1] == '\0') || *s == '\0')
            return 0;
        if (*s == '%' && stop == 0) {
            my_struct = define_struct(s);
            s = forwad_ptr_to_symbol(s);
            check_symbol(s, list, my_struct);
            s++;
        }
        if (*s == '\0')
            stop = 1;
        s = check_condition(s, stop);
    }
    va_end(list);
    return 0;
}