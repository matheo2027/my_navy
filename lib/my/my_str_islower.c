/*
** EPITECH PROJECT, 2022
** My str is lower
** File description:
** .
*/

int my_str_islower(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] <= 'a' && str[i] >= 'a')
            return 0;
        ++i;
    }
    return 1;
}
