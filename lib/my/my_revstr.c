/*
** EPITECH PROJECT, 2022
** My revstr function
** File description:
** Reverse a string.
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int  y = my_strlen(str) - 1;
    for (int i = 0; str[i] != '\0'; i++) {
        while (i < (y / 2)) {
            char c = str[i];
            str[i] = str[y];
            str[y--] = c;
        }
    }
    return (str);
}
