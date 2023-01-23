/*
** EPITECH PROJECT, 2023
** check filepath
** File description:
** check filepath
*/

#include <stdio.h>
#include "navy.h"
#include "my.h"

int nb_ac_check(int ac)
{
    if (ac != 2 && ac != 3) {
        write(2, "Error: incorrect number of "
        "arguments given, retry with -h\n", 59);
        return 1;
    }
    return 0;
}

int error_map(char *file)
{
    return (0);
}

int check_argv(char *file)
{
    FILE *fp;
    fp = fopen(file, "r");
    if (fp == NULL) {
        write(2, "ERROR: FILE NOT FOUND\n", 23);
        return (1);
    }
    if (error_map(file) != 0) {
        write(2, "FAULTY FILE\n", 13);
    }
    fclose(fp);
    return (0);
}
