/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** both
*/

#include "navy.h"

int my_get_pid(void)
{
    __pid_t pid = getpid();
    return (pid);
}
