/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** game
*/

#include "navy.h"
#include "my.h"

int end_game(void)
{
    return 0;
}

int game(int p, struct info_s *info)
{
    while (end_game() != 0) {
        if (p == 1)
            player1_turn(info);
        if (p == 2)
            player2_turn(info);
        if (p != 1 && p != 2) {
            write(2, "Error: invalid player number\n", 30);
            return 84;
        }
    }
    return 0;
}
