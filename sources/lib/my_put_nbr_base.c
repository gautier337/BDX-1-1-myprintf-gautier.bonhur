/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** put_nbr_base
*/

#include "../../includes/bsprintf.h"

int change_uns(char *result, char const *base, int len_base, unsigned int nb)
{
    for (int i = 0; nb != 0; i++) {
        result[i] = base[nb % len_base];
        nb = nb / len_base;
    }
    result = my_revstr(result);
    my_putstr(result);
    return 0;
}

int *my_put_nbr_base_uns(unsigned int nb, char const *base)
{
    int len_base = lenght_int(nb);
    char *result = malloc(sizeof(int) * (len_base + 2));

    if (result == NULL)
        return 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb == 0)
        return 0;
    else
        change(result, base, len_base, nb);
    free(result);
    return 0;
}

int change(char *result, char const *base, int len_base, int nb)
{
    int ret = 0;

    for (int i = 0; nb != 0; i++) {
        result[i] = base[nb % len_base];
        nb = nb / len_base;
    }
    result = my_revstr(result);
    my_putstr(result);
    return 0;
}

int *my_put_nbr_base(int nb, char const *base)
{
    int len_base = my_strlen(base);
    char *result = malloc(sizeof(char) * (len_base + 2));

    if (result == NULL)
        return 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb == 0)
        return 0;
    else
        change(result, base, len_base, nb);
    free(result);
    return 0;
}