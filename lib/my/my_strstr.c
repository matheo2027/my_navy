/*
** EPITECH PROJECT, 2022
** str str
** File description:
** Find the first occurrence of the substring needle in the string haystack.
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    char *retptr;
    char *elseret = 0;

    for ( ; str[i] != '\0'; i++) {
        if (to_find[i] == str[i]) {
            retptr = &str[i];
            return (retptr);
        } else {
            return (elseret);
        }
    }
}
