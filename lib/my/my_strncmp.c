/*
** EPITECH PROJECT, 2022
** Str n cmp
** File description:
** .
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    if (n < 0) {
        return (0);
    }
    if (n == 0) {
        my_strcmp(s1, s2);
    }
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] == s2[i]) {
            return (0);
        }
        if (s1[i] < s2[i]) {
            return (-1);
        }
        if (s1[i] > s2[i]) {
            return (1);
        }
        n = n + 1;
    }
}
