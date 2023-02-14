/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** decimal to haxa
*/

#include "../../includes/bsprintf.h"

void dec_to_hex(int num, int nbr_of_spaces)
{
    char hex[] = "0123456789ABCDEF";

    char hexadecimal[64 + 1];

    int q = num;
    int r = 0;
    int index = 0;

    while (q != 0){
        r = num % 16;
        q = num / 16;
        hexadecimal[index] = hex[r];
        num = q;
        index++;
    }
    hexadecimal[index] = '\0';
    put_spaces(nbr_of_spaces, my_strlen((hexadecimal)));
    my_putstr(my_revstr(hexadecimal));
}

void dec_to_hex_low(int num, int nbr_of_spaces)
{
    char hex_low[] = "0123456789ABCDEF";

    char hexadecimal_low[64 + 1];

    int q = num;
    int r = 0;
    int index = 0;

    while (q != 0){
        r = num % 16;
        q = num / 16;
        hexadecimal_low[index] = hex_low[r];
        num = q;
        index++;
    }
    hexadecimal_low[index] = '\0';
    put_spaces(nbr_of_spaces, my_strlen((hexadecimal_low)));
    my_putstr(my_strlowcase(my_revstr(hexadecimal_low)));
}