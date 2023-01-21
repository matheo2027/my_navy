/*
** EPITECH PROJECT, 2022
** Task 01
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

void my_swap(int *a, int *b)
{
    int x = *b;
    *b = *a;
    *a = x;
}
