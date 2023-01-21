/*
** EPITECH PROJECT, 2022
** Task 01
** File description:
** Write a function that allocates memory and
** copies the string given as argument in it.
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    int size = src[i];
    char *ptr;

    ptr = malloc(sizeof(char) * (size + 1));

    while (i < size && src[i] != '\0') {
        ptr[i] = src[i];
        i = i + 1;
    }

    ptr[i] = '\0';
    return (ptr);
}
