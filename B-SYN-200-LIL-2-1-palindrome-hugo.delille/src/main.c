/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

int check_arg_duplicate(char **av)
{
    int types[5] = {0, 0, 0, 0, 0};

    for (int i = 1; av[i] != NULL; i++) {
        if (!my_strcmp("-n", av[i]) && ++types[0] == 2)
            return (84);
        if (!my_strcmp("-p", av[i]) && ++types[1] == 2)
            return (84);
        if (!my_strcmp("-b", av[i]) && ++types[2] == 2)
            return (84);
        if (!my_strcmp("-imin", av[i]) && ++types[3] == 2)
            return (84);
        if (!my_strcmp("-imax", av[i]) && ++types[4] == 2)
            return (84);
    }
    return (0);
}

int check_nbr(char *str)
{
    if (str == NULL)
        return (84);
    if (str[0] < '0' || str[0] > '9' || atoi(str) < 0)
        return (84);
    return (0);
}

int check_base_nbr(char *str)
{
    if (str == NULL)
        return (84);
    if (str[0] < '0' || str[0] > '9' || atoi(str) <= 1 || atoi(str) > 10)
        return (84);
    return (0);
}

int check_arg_val(char **av)
{
    for (int i = 1; av[i] != NULL; i += 2) {
        if (!my_strcmp("-n", av[i]) && !check_nbr(av[i + 1]))
            continue;
        if (!my_strcmp("-p", av[i]) && !check_nbr(av[i + 1]) &&
            palindrome(atoi(av[i + 1])))
            continue;
        if (!my_strcmp("-b", av[i]) && !check_base_nbr(av[i + 1]))
            continue;
        if (!my_strcmp("-imin", av[i]) && !check_nbr(av[i + 1]))
            continue;
        if (!my_strcmp("-imax", av[i]) && !check_nbr(av[i + 1]))
            continue;
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            helper();
            return (0);
        }
    }
    if (check_arg_duplicate(av) || check_arg_val(av)) {
        my_putstr("invalid argument\n");
        return (84);
    }
    return (flag_gestionning(av));
}