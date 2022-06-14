/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

int transforme_number_bis(int nb, int max, int imax, int imin)
{
    int x = nb;
    int z = nb;
    int i = 0;
    int m = (imax != 0 ? imax : max);

    while (palindrome2(x, max) == 0 && i < m) {
        x += my_revnbr(x);
        i++;
        if (palindrome2(x, max) == 84)
            return (84);
    }
    if (i > m) {
        return (0);
    } else if (palindrome2(x, max) == 1 && i >= imin) {
        print_success(z, x, i, 10);
        my_putstr("\n");
        return (1);
    }
    return (0);
}

int transforme_number(int nb, int imax, int imin)
{
    int x = nb;
    int z = nb;
    int i = 0;
    int m = (imax != 0 ? imax : 100);

    while (palindrome(x) == 0 && i < m) {
        x += my_revnbr(x);
        i++;
        if (palindrome(x) == 84)
            return (84);
    }
    if (i > m) {
        my_putstr("no solution\n");
        return (0);
    } else if (palindrome(x) == 1 && i >= imin) {
        print_success(z, x, i, 10);
        my_putstr("\n");
        return (0);
    }
    return (0);
}