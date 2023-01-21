/*
** EPITECH PROJECT, 2022
** Str capitalize
** File description:
** .
*/

int char_is_alpha(char c)
{
    return (c >= 'a' && c <= 'z');
}

int char_is_symbol(char c)
{
    return (c == 32 || c == '+' || c == '-');
}

char* my_strcapitalize(char* str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;

    while (str[++i] != '\0') {
        if (char_is_alpha(str[i]) && char_is_symbol(str[i - 1])) {
            str[i] -= 32;
            continue;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    return str;
}
