/*
** EPITECH PROJECT, 2022
** B-CPE-101-BDX-1-1-myprintf-alea.chlodnik
** File description:
** my_printf.h
*/

#include <stdio.h>
#include "my.h"

#ifndef MY_PRINTF_
    #define MY_PRINTF_

    int my_put_nbr_un(va_list va_nb);

    int my_put_nbr_octal(va_list va_nb);

    int my_put_nbr_int(va_list va_nb);

    int my_put_nbr_hex(va_list va_nb);

    const char printf_flags[17] = "dioxXcsufeEgGpn%";
    int (*printf_flags_function_pointers[17])(va_list) = {
        &my_put_nbr_int,
        &my_put_nbr_int,
        &my_put_nbr_octal,
        &my_put_nbr_hex,
        &my_put_nbr_hex,
        &my_putchar_prt,
        &my_prt_str,
        &my_put_nbr_un,
    };

#endif
