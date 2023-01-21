/*
** EPITECH PROJECT, 2022
** B-CPE-101-BDX-1-1-myprintf-alea.chlodnik
** File description:
** my_put_nbr_interfaces for my_printf
** (Done by Matteo).
*/

#include <stdarg.h>
#include "my.h"

int my_put_nbr_int(va_list va_nb)
{
    int nb = va_arg(va_nb, int);

    return my_put_nbr(nb, 10);
}

int my_put_nbr_octal(va_list va_nb)
{
    int nb = va_arg(va_nb, int);

    return my_put_nbr(nb, 8);
}

int my_put_nbr_un(va_list va_nb)
{
    unsigned int nb = va_arg(va_nb, unsigned int);

    return my_put_nbr_u(nb, 10);
}

int my_put_nbr_hex(va_list va_nb)
{
    int nb = va_arg(va_nb, int);

    return my_put_nbr_u(nb, 16);
}

int my_prt_double(va_list va_nb)
{
    double nb = va_arg(va_nb, double);

    return my_put_double(nb);
}
