/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** both
*/

#include <stdio.h>
#include "navy.h"
#include "my.h"

int my_get_pid(void)
{
    __pid_t pid = getpid();
    return (pid);
}

void connect_handler(int sig_nb, siginfo_t *siginfo, void *ucontext)
{
    if (sig_nb == SIGUSR1) {
        sleep(1);
        my_printf("\nenemy connected\n");
    }
}

void get_sig(void)
{
    struct sigaction sig_act = {0};
    sig_act.sa_flags = SA_RESTART | SA_SIGINFO;
    sig_act.sa_sigaction = &connect_handler;
    sigaction(SIGUSR1, &sig_act, NULL);
    pause ();
}

char *get_coord(void)
{
    char *coord = NULL;
    size_t len = 0;
    ssize_t read;
    read = getline(&coord, &len, stdin);
    return (coord);
}

int check_coord(char *coord)
{
    return 0;
}
