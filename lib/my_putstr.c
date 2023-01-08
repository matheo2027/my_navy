/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_prt_str is for my_printf.
*/

#include <stdarg.h>
#include "navy.h"

int my_putstr(const char* str)
{
    int display_counter = 0;
    int i = 0;
    for (i;str[i] != '\0'; i++) {
        display_counter += my_putchar(str[i]);
    }
    return display_counter;
}

int my_prt_str(va_list va_str)
{
    char* str = va_arg(va_str, char*);

    return my_putstr(str);
}
