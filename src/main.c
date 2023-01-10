/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** main
*/

#include "navy.h"
#include <stdbool.h>

int main(int ac, char **av)
{
    if (ac < 2 || ac > 3) {
        write(2, "Error: incorrect number of "
        "arguments given, retry with -h\n", 59);
        return 84;
    }
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        h_flag();
        return (0);
    }
    check_argv(av[1]);
    return 0;
}
