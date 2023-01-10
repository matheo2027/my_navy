/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-navy-matheo.piques
** File description:
** navy
*/

#ifndef NAVY_H_
    #define NAVY_H_

    #include <unistd.h>

int main(int ac, char **av);

void h_flag(void);

int my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(const char* str);

int check_argv(char **av);

#endif /* !NAVY_H_ */
