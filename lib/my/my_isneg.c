/*
** EPITECH PROJECT, 2022
** Task04
** File description:
** Write a function that displays either N,
** if the integer passed as parameter is
** negative, or P, if positive, or null.
*/

int my_isneg(int n)
{
    int a;
    char c;

    if (n < 0) {
        a = 78;
    } else {
        a = 80;
    }

    c = a + 0;

    my_putchar(c);

    return (n);
}
