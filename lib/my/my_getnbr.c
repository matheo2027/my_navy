/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** get nbr
*/

#include <stdio.h>

int is_neg(char const* str, int i)
{
    int n = 0;

    while (i >= 0) {
        if (str[i] == '-')
            n++;

        if (str[i] != '+' && str[i] != '-')
            break;
        i--;
    }
    return (n % 2 == 0 ? 1 : -1);
}

int my_getnbr(char *str)
{
    int i = 0;
    int buff = 0;
    int symbol = 1;

    while (str[i] < '0' || str[i] > '9') {
        i++;
    }

    symbol = is_neg(str, i - 1);

    while (str[i] >= '0' && str[i] <= '9') {
        if (buff >= 214748364 && str[i] >= '8' && symbol == 1)
            return 0;
        if (buff >= 214748364 && str[i] >= '9' && symbol == -1)
            return 0;
        buff = buff * 10 + str[i] - '0';
        i++;
    }
    return buff * symbol;
}
