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

int check_argv_help(char *line, int i)
{
    if (line[0] != i + '0'){
        write(2, "ERROR: BOAT'S FIRST NUMBER IS UNVAILABLE\n", 42);
        return (84);
    }
    if ((line[2] < 'A' || line[2] > 'H') || (line[5] < 'A' || line[5] > 'H')
        || (line[3] < '1' || line[3] > '8') || (line[6] < '1' || line[6] > '8')
        || (line[1] != ':' || line[4] != ':')) {
        write(2, "ERROR: BOAT'S COORDINATES ARE UNVAILABLE\n", 42);
        return (84);
    }
    if ((line[5] - line[2]) + (line[6] - line[3]) != i - 1) {
        write(2, "ERROR: BOAT'S LENGHT IS UNVAILABLE\n", 36);
        return (84);
    }
}

int check_argv(char **av, int n)
{
    int i = 2;
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    fp = fopen(av[n], "r");
    if (fp == NULL) {
        write(2, "ERROR: FILE NOT FOUND\n", 23);
        return (84);
    }
    while((nread = getline(&line, &len, fp)) != -1) {
        if (my_strlen(line) != 8 && my_strlen(line) != 7) {
            write(2, "ERROR: FILE IS UNVAILABLE\n", 25);
            return (84);
        }
        if (check_argv_help(line, i) == 84)
            return (84);
        i++;
    }
    fclose(fp);
    return (0);
}
