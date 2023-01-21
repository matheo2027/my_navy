/*
** EPITECH PROJECT, 2022
** My str is alpha
** File description:
** .
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {

    if ((str[i] >= '0' && str[i] <= '9') ||
        (str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z')) {
        return (1);
    } else {
        return (0);
    }

    i = i + 1;

    }
}
