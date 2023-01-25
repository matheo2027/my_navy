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

int check_argv_help(char *symb, int i)
{
    if (symb[0] != i + '0'){
        write(2, "ERROR: BOAT'S FIRST NUMBER IS UNVAILABLE\n", 42);
        return (84);
    }
    if ((symb[2] < 'A' || symb[2] > 'H') || (symb[5] < 'A' || symb[5] > 'H')
        || (symb[3] < '1' || symb[3] > '8') || (symb[6] < '1' || symb[6] > '8')
        || (symb[1] != ':' || symb[4] != ':')) {
        write(2, "ERROR: BOAT'S COORDINATES ARE UNVAILABLE\n", 42);
        return (84);
    }
    if ((symb[5] - symb[2]) + (symb[6] - symb[3]) != i - 1) {
        write(2, "ERROR: BOAT'S LENGHT IS UNVAILABLE\n", 36);
        return (84);
    }
}

int check_argv(char **av, int n)
{
    int i = 2;
    FILE *fp;
    char *symb = NULL;
    size_t len = 0;
    ssize_t nread;
    fp = fopen(av[n], "r");
    if (fp == NULL) {
        write(2, "ERROR: FILE NOT FOUND\n", 23);
        return (84);
    }
    while ((nread = getline(&symb, &len, fp)) != -1) {
        if (my_strlen(symb) != 8 && my_strlen(symb) != 7)
            return (84);
        if (check_argv_help(symb, i) == 84)
            return (84);
        i++;
    }
    fclose(fp);
    return (0);
}
