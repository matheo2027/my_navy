/*
** EPITECH PROJECT, 2022
** Str to words array
** File description:
** Write a function that splits a string into words.
** Separators will all be non-alphanumeric characters.
** The function returns an array in which each cell
** contains the address of a string (representing a word).
** The last cell must be null to terminate the array.
*/

#include <stdlib.h>

int get_nb_words(const char *str)
{
    int nb = 1;
    int i = 0;
    for (i; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
            nb += 1;
    }
    return (nb);
}

char **my_str_to_words_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int nb_words = get_nb_words(str);
    char **arr = malloc(sizeof(char *) * nb_words);
    for (i = 0; i < nb_words; i++) {
        arr[i] = malloc(sizeof(char) * 40);
        for (j = 0, k; str[k] != ' ' && str[k] != '\n'
        && str[k] != '\0'; j++, k++) {
            arr[i][j] = str[k];
        }
        arr[i][j] = '\0';
        if (str[k] != '\0') {
            k++;
        } else {
            break;
        }
    }
    return (arr);
}
