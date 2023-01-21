/*
** EPITECH PROJECT, 2022
** Task 05
** File description:
** Write a function that returns the square root
** (if it is a whole number) of the number given
** as argument. If the square root is not a whole
** number, the function should return 0.
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int i = 1;
    if (nb < 1)
        return 1;
    while (i < (nb / 2)) {
        int pow = my_compute_power_rec(i, 2);
        if (pow > nb)
            return 0;
        if (pow == nb)
            return i;
        i++;
    }
    return 0;
}
