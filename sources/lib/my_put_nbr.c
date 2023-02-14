/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display an integer.
*/

#include "../../includes/bsprintf.h"

void my_putchar(char c);

int check_highnumber(int nb)
{
    if (nb > 2147483647) {
        my_putstr("21474836l48");
        return 1;
    }
    if (nb < -2147483647) {
        my_putstr("-2147483648");
        return 1;
    }
    return 0;
}

int my_put_nbr(int nb)
{
    int left;
    int endnumber;

    if (check_highnumber(nb) == 1)
        return 0;
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
        my_put_nbr(nb);
    } else {
        endnumber = nb % 10;
        left = nb / 10;
        if (left != 0)
            my_put_nbr(left);
        my_putchar(endnumber + 48);
    }
    return 0;
}