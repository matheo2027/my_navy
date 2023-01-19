/*
** EPITECH PROJECT, 2023
** check filepath
** File description:
** check filepath
*/

#include <stdio.h>
#include "navy.h"

int check_argv(char **av)
{
    FILE *fp;
    fp = fopen(av[1], "r");
    if (fp == NULL) {
        my_putstr("FILE NOT FOUND\n");
        return (1);
    }

    fclose(fp);
    return (0);
}
