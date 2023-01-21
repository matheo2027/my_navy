/*
** EPITECH PROJECT, 2022
** Task01
** File description:
** Write a function that copies a string into another.
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    for ( ; src[i] != '\0'; i = i + 1) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
