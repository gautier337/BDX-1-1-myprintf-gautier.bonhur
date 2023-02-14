/*
** EPITECH PROJECT, 2021
** test 
** File description:
** criterion myprintf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(my_printf, test_ez, .init = cr_redirect_stdout)
{
    my_printf("%5.2s\n", "salut");
    cr_assert_stdout_eq_str("   sa\n");
}

Test(my_printf, test_c_int, .init = cr_redirect_stdout)
{
    my_printf("%s %c %d\n", "salut", 'a', 55);
    cr_assert_stdout_eq_str("salut a 55\n");
}

Test(my_printf, test_b, .init = cr_redirect_stdout)
{
    my_printf("%b\n", 10);
    cr_assert_stdout_eq_str("1010\n");
}

Test(my_printf, test_x, .init = cr_redirect_stdout)
{
    my_printf("%0d\n", 10);
    cr_assert_stdout_eq_str("10\n");
}

Test(my_printf, test_w, .init = cr_redirect_stdout)
{
    my_printf("%d\n", 10);
    cr_assert_stdout_eq_str("10\n");
}