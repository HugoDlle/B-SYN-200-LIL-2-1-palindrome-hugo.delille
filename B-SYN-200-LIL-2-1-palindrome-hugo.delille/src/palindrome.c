/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

int palindrome_p(int nb, int imax, int imin)
{
    int p = 0;
    int y = 0;

    for (int i = 1; i <= nb; i++) {
        y = transforme_number_bis(i, nb, imax, imin);
        if (y == 1)
            p++;
        else if (y == 84)
            return (84);
    }
    if (p == 0)
        my_putstr("no solution\n");
    return (0);
}

int end_palindrome2(int a, int len, int nb, int max)
{
    if (a == len && nb == max) {
        return (1);
    }
    return (0);
}

int palindrome2(int nb, int max)
{
    char *number = my_get_number(nb);
    int len = my_strlen(number) - 1;
    int a = 0;
    int z = 0;

    if (number == NULL)
        return (84);
    while (a != len && z == 0) {
        if (number[a] != number[len])
            z = 1;
        else {
            a++;
            len--;
        }
    }
    free(number);
    return (end_palindrome2(a, len, nb, max));
}

int end_palindrome1(int a, int len, char *number)
{
    if (a == len) {
        free(number);
        return (1);
    }
    free(number);
    return (0);
}

int palindrome(int nb)
{
    char *number = my_get_number(nb);
    int len = my_strlen(number) - 1;
    int a = 0;
    int z = 0;

    if (number == NULL)
        return (84);
    while (a != len && z == 0) {
        if (number[a] != number[len])
            z = 1;
        else {
            a++;
            len--;
        }
    }
    return (end_palindrome1(a, len, number));
}