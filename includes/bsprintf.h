/*
** EPITECH PROJECT, 2021
** myprintf
** File description:
** header
*/

#ifndef BSPRINTF_H_
    #define BSPRINTF_H_

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>

typedef struct struct_check {
    int nb_of_spaces;
    int nb_afterdot;
    int neg;
} struct_check_t;

int my_printf(char *s, ...);
void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int lenght_int(int nbr);
int my_getnbr(char *str);
int my_strlen (char const *str);
char *my_revstr(char *str);
struct_check_t define_struct(char *s);
int number_after_dot(char *s);
int number_before_symbol(char *s);
char *my_strupcase(char *str);
char *my_put_nbr_unsigned(unsigned int nb, char const *base);
char *my_strlowcase(char *str);
void put_int_spaces(int nb_of_spaces, int nb_dot, int d, int neg);
char *check_condition(char *s, int stop);
void dec_to_hex(int num, int nbr_of_spaces);
void dec_to_hex_low(int num, int nbr_of_spaces);
void put_spaces(int nbr_of_spaces, int to_delete);
void check_symbol2(char *s, va_list list, struct struct_check info);
int *my_put_nbr_base(int nb, char const *base);
void troncate_int(int nbr, int nbr_of_spaces, int nb_afterdot);
void troncate(char *str, int nbr_of_spaces, int nb_afterdot, int neg);
int *my_put_nbr_base_uns(unsigned int nb, char const *base);
int check_symbol(char *s, va_list list, struct struct_check info);
#endif
