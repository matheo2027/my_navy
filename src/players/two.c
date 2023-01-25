/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** two
*/

#include "navy.h"
#include "my.h"

struct info_s *sign_on_two(char *pid)
{
    struct info_s *info;
    int p1_pid = my_getnbr(pid);
    info->p1_pid = p1_pid;
    int p2_pid = my_get_pid();
    info->p2_pid = p2_pid;
    kill(p1_pid, SIGUSR1);
    my_printf("my_pid: %d\n", p2_pid);
    my_printf("successfully connected\n\n");
    print_start_map();
    return (info);
}

void player2_turn(struct info_s *info)
{
    my_printf("waiting for enemy's attack...\n");
    get_enemy_coord();
}
