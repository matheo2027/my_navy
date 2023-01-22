/*
** EPITECH PROJECT, 2022
** My str cmp
** File description:
** Reproduce the behavior of the strcmp function.
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int x = my_strlen(s1);
    int y = my_strlen(s2);
    if (x != y) {
        if (x < y) {
        return (-1);
        }
        if (x > y) {
        return (1);
        }
    }
    for (int i = 0; i < x; i = i + 1) {
        if (s1[i] != s2[i] && s1[i] < s2[i]) {
                return (-1);
        }
        if (s1[i] != s2[i] && s1[i] > s2[i]) {
            return (1);
        }
    }
    return (0);
}
