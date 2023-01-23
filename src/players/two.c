/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** two
*/

#include "navy.h"
#include "my.h"

void sign_on_two(char *pid)
{
    int p1_pid = my_getnbr(pid);
    int p2_pid = my_get_pid();
    kill(p1_pid, SIGUSR1);
    my_printf("my_pid: %d\n", p2_pid);
    my_printf("successfully connected\n\n");
    print_start_map();
}

void player2_turn(void)
{
    return;
}
