/*
** EPITECH PROJECT, 2022
** B-CPE-101-BDX-1-1-myprintf-alea.chlodnik
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include "my_printf.h"
#include "my.h"

int get_index(const char* tab, char c)
{
    int i = 0;
    for (i; tab[i] != 0; i++) {
        if (tab[i] == c)
            return i;
    }
    return (-1);
}

int unique_case(const char c, int display_counter)
{
    if (c == 'n')
        return my_put_nbr(display_counter, 10);
    if (c == '%')
        return my_putchar('%');

    return 0;
}

int parse(const char* restrict format, va_list list)
{
    int flag_index, i = 0;
    int display_counter = 0;

    for (i; format[i] != '\0'; i++) {
        if (format[i] != '%' || format[i + 1] == '\0') {
            display_counter += my_putchar(format[i]);
            continue;
        }

        if (format[i + 1] == 'n' || format[i + 1] == '%') {
            display_counter += unique_case(format[i + 1], display_counter);
            i++;
            continue;
        }
        flag_index = get_index(printf_flags, format[i + 1]);
        if (flag_index != -1)
            display_counter += printf_flags_function_pointers[flag_index](list);
        i++;
    }
    return display_counter;
}

int my_printf(const char* restrict format, ...)
{
    va_list list;
    int display_counter = 0;

    va_start(list, format);
    display_counter = parse(format, list);
    va_end(list);

    return display_counter;
}
