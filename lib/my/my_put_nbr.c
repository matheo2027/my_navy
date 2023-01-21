/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr for my_printf
** (adjusted with Matteo)
*/

#include <stdint.h>

int my_putchar(char c);

const char* nb_base = "0123456789ABCDEF";

int my_put_nbr_u(uintmax_t nb, int base)
{
    int display_counter = 0;

    if (nb > 9)
        display_counter += my_put_nbr_u(nb / base, base);

    return display_counter + my_putchar(nb_base[nb % base]);
}

int my_put_nbr(int nb, int base)
{
    int display_counter = 0;

    if (nb < 0) {
        display_counter += my_putchar('-');
        nb *= -1;
    }

    return display_counter + my_put_nbr_u(nb, base);
}

int my_put_double(double nb)
{
    int display_counter = 0;
    if (nb < 0) {
        display_counter += my_putchar('-');
        nb *= -1;
    }
    nb *= 1000000;
    long long llnb = nb / 1000000;
    display_counter += my_put_nbr_u(llnb, 10);
    display_counter += my_putchar('.');
    llnb = (long long)nb % 1000000;
    return display_counter + my_put_nbr_u(llnb, 10);
}
