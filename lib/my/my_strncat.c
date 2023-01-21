/*
** EPITECH PROJECT, 2022
** Str n cat
** File description:
** .
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen(dest);
    for (i = 0 ; i < nb && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
