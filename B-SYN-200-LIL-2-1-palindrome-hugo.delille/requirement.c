/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** palindrome requirement
*/

int my_factrec_synthesis(int nb)
{
    int x = 0;

    if (nb == 0)
        return (1);
    if (nb > 0 && nb < 13) {
        x = nb * my_factrec_synthesis(nb - 1);
        return (x);
    }
    return (0);
}

int my_squareroot_synthesis(int nb)
{
    int x = 1;

    if (nb < 0)
        return (-1);
    if (nb == 0)
        return (0);

    for (; nb >= x * x; x++) {
        if (nb == (x * x)) {
            return (x);
        }
    }
    return (-1);
}