/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** player 1
*/

#include "navy.h"
#include "my.h"

void sign_on_one(void)
{
    int p1_pid = my_get_pid();
    my_printf("my_pid: %d\n", p1_pid);
    my_printf("waiting for enemy connection...\n\n");
    get_sig();
    print_start_map();
}

void enemy_turn(struct info_s *info)
{
    my_printf("\nwaiting for enemy's attack...\n");
    kill(info->p2_pid, SIGUSR2);
}

void player1_turn(struct info_s *info)
{
    char *coord = malloc(sizeof(char) * 2);
    do {
        my_printf("attack: ");
        coord = get_coord();
        if (check_coord(coord) == 1) {
            my_putstr("wrong position\n");
        } else {
            info->coord = coord;
            my_printf("%s\n", coord);
        }
        if (check_result(coord) == 1) {
            info->res = 'h';
            my_printf("%s: hit", coord);
        } else {
            info->res = 'm';
            my_printf("%s: missed", coord);
        }
        enemy_turn(info);
    } while (end_game() != 0);

}
