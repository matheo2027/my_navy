/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** main
*/

#include "navy.h"

int main(int ac, char **av)
{
    if (ac < 2 || ac > 3) {
        write(2, "Error: incorrect number of "
        "arguments given, retry with -h\n", 58);
        return 84;
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        h_flag();
    }
    return 0;
}
