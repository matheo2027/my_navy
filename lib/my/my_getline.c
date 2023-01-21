/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_getline : get a line from
** a char ** into a char*
*/

#include <stdlib.h>

char *my_getline(char **map, int i)
{
    int j = 0;
    char *str = malloc(100);

    for (j; j != '\0'; j++) {
        str[j] = map[i][j];
    }
    str[j] = '\0';
    return (str);
}
