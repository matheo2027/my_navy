/*
** EPITECH PROJECT, 2022
** Task 03
** File description:
** Write a recursive function that returns
** the first argument raised to the power p,
** where p is the second argument.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 1) {
        return (1);
    }

    return (nb * my_compute_power_rec(nb, p - 1));
}
