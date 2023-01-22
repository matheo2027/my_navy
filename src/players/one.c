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
    my_printf("waiting for enemy connection...\n");
    get_sig();
}

void player1_turn(void)
{
    char *result = malloc(sizeof(char) * 10);
    char *coord = malloc(sizeof(char) * 2);
    my_printf("my positions:\n");

    my_printf("enemy's positions:\n");


    do {
        my_printf("attack: ");
        coord = get_coord();
        if (check_coord(coord) == 1) {
            my_putstr("wrong position\n");
            result = "hit";
        } else {
            my_printf("%s\n", coord);
        }
    } while (my_strcmp(result, "hit") == 0);

}
