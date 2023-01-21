/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-antman-alea.chlodnik
** File description:
** lyr_int_to_str
*/

#include <stdio.h>
#include <stdlib.h>

void my_swap(char *a, char *b)
{
    char x = *a;
    *a = *b;
    *b = x;
}

char *my_revstr(char *str)
{
    int  y = (my_strlen(str) - 1);
    for (int i = 0; str[i] != '\0'; i++) {
        while (i < (y / 2)) {
            char c = str[i];
            str[i] = str[y];
            str[y--] = c;
        }
    }
    return (str);
}

int my_abs(int nb)
{
    if (nb < 0) {
        nb = nb * (-1);
        return (nb);
    } else {
        return (nb);
    }
}

char *int_to_str(char *str, int nb)
{
    int i = 0;
    int res = 0;
    int abs = my_abs(nb);
    int nb_len = my_strlen(str);
    char *nb_str = malloc(sizeof(char) * (nb_len + 1));
    while (abs) {
        res = abs % 10;
        if (res >= 10) {
            str[i++] = 65 + (res - 10);
        } else
            str[i++] = 48 + res;
        abs = abs / 10;
    }
    if (i == 0)
        str[i++] = '0';
    if (nb < 0)
        str[i++] = '-';
    str[i] = '\0';
    nb_str = my_revstr(str);
    return (nb_str);
}
