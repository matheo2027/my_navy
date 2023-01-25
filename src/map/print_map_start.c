/*
** EPITECH PROJECT, 2023
** print map start
** File description:
** print_map_start
*/

#include "navy.h"
#include "my.h"

int print_start_map(void)
{
    int index = 1;
    my_printf("my positions:\n |A B C D E F G H\n-+---------------\n");
    while (index < 9) {
        my_printf("%d", index);
        my_printf("|. . . . . . . .\n");
        index++;
    }
    my_printf("\n");
    index = 1;
    my_printf("enemy's positions:\n |A B C D E F G H\n-+---------------\n");
    while (index < 9) {
        my_printf("%d", index);
        my_printf("|. . . . . . . .\n");
        index++;
    }
    return 0;
}
