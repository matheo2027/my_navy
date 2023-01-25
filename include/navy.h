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

    typedef struct info_s {
        int p1_pid;
        int p2_pid;
        char *coord;
        char res;
    } info_s;

int main(int ac, char **av);

void h_flag(void);

int nb_ac_check(int ac);

int check_argv(char **av, int n);

int check_argv_help(char *line, int i);

int my_get_pid(void);

void sign_on_one(void);

struct info_s *sign_on_two(char *pid);

void get_sig(void);

void connect_handler(int sig_nb, siginfo_t *siginfo, void *ucontext);

void turn_handler(int sig_nb, siginfo_t *siginfo, void *ucontext);

int game(int p, struct info_s *info);

int end_game(void);

void player1_turn(struct info_s *info);

void player2_turn(struct info_s *info);

char *get_coord(void);

int check_coord(char *coord);

int check_result(char *coord);

void get_enemy_coord(void);

int print_start_map(void);

#endif /* !NAVY_H_ */
