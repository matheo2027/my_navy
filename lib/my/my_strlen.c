/*
** EPITECH PROJECT, 2022
** My str len
** File description:
** .
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }

    return (i);
}
