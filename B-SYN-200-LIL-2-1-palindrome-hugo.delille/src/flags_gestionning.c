/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "my.h"

int n_gestionning(char **av)
{
    int n = 0;
    int imin = 0;
    int imax = 100;

    for (int i = 1; av[i] != NULL; i++) {
        if (my_strcmp(av[i], "-p") == 0) {
            helper();
            return (84);
        }
        if (my_strcmp(av[i], "-imin") == 0)
            imin = my_get_nbr(av[i + 1]);
        if (my_strcmp(av[i], "-imax") == 0)
            imax = my_get_nbr(av[i + 1]);
    }
    for (; my_strcmp(av[n], "-n") != 0; n++);
    if (imin > imax)
        exit(84);
    return (transforme_number(my_get_nbr(av[n + 1]), imax, imin));
}

int p_gestionning(char **av)
{
    int n = 0;
    int imin = 0;
    int imax = 100;

    for (int i = 0; av[i] != NULL; i++) {
        if (my_strcmp(av[i], "-n") == 0) {
            helper();
            return (84);
        }
        if (my_strcmp(av[i], "-imin") == 0)
            imin = my_get_nbr(av[i + 1]);
        if (my_strcmp(av[i], "-imax") == 0)
            imax = my_get_nbr(av[i + 1]);
    }
    for (; my_strcmp(av[n], "-p") != 0; n++);
    if (imin > imax)
        exit(84);
    return (palindrome_p(my_get_nbr(av[n + 1]), imax, imin));
}

int flag_gestionning(char **av)
{
    for (int i = 1; av[i] != NULL; i++) {
        if (my_strcmp(av[i], "-n") == 0) {
            return (n_gestionning(av));
        } else if (my_strcmp(av[i], "-p") == 0) {
            return (p_gestionning(av));
        }
    }
    return (0);
}