/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** navy
*/

#ifndef NAVY_H_
    #define NAVY_H_

    #include <unistd.h>
    #include <signal.h>
    #include <stdlib.h>

int main(int ac, char **av);

void h_flag(void);

int nb_ac_check(int ac);

int check_argv(char *file);

int my_get_pid(void);

void sign_on_one(void);

void sign_on_two(char *pid);

void get_sig(void);

void connect_handler(int sig_nb, siginfo_t *siginfo, void *ucontext);

int game(int p);

int end_game(void);

void player1_turn(void);

void player2_turn(void);

char *get_coord(void);

int check_coord(char *coord);

#endif /* !NAVY_H_ */
