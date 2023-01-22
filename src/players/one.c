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
    int pid = my_get_pid();
    my_printf("my_pid: %d\n", pid);
    my_printf("waiting for enemy connection...\n");
    pause();
    my_printf("enemy connected\n");
}
