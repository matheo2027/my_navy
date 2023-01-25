/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** main
*/

#include "navy.h"
#include "my.h"

int main(int ac, char **av)
{
    struct info_s *info;
    if (nb_ac_check(ac) == 1)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        h_flag();
        return 0;
    }
    if (ac == 2 && check_argv(av, 1) == 0) {
        sign_on_one();
        game(1, info);
    } else if (ac == 3 && check_argv(av, 2) == 0) {
        info = sign_on_two(av[1]);
        game(2, info);
    } else {
        write(2, "ERROR: FILE IS UNVAILABLE\n", 27);
        return 84;
    }

    return 0;
}
