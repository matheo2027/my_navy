/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** both2
*/
#include "navy.h"
#include "my.h"

void turn_handler(int sig_nb, siginfo_t *siginfo, void *ucontext)
{
    if (sig_nb == SIGUSR2) {
        my_printf("%s: ", coord);
    }

    // if USR1 -> 
}