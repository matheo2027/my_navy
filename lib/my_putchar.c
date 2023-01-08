/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar_prt is for my_printf
*/

#include <stdarg.h>
#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}

int my_putchar_prt(va_list va_c)
{
    char c = va_arg(va_c, int);

    return my_putchar(c);
}
