/*
** EPITECH PROJECT, 2022
** Task 02
** File description:
** Write a function that copies n characters from a string into another.
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    while (i < n) {
        dest[i] = '\0';
        i = i + 1;
    }
    return (dest);
}
