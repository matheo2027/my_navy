/*
** EPITECH PROJECT, 2023
** check filepath
** File description:
** check filepath
*/

#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "navy.h"

int check_argv(char *av)
{
    FILE *fp;
    fp = fopen(av[1], "r");
    if (fp == NULL) {
        my_putstr("FILE NOT FOUND\n");
        return (84);
    }
    char c;
    while ((c = fgetc(fp)) != EOF)
        my_putchar(c);
    return (0);

    fclose(fp);
}
