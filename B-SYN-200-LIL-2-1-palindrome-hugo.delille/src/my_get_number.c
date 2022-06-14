/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

int my_get_nbr(char *str)
{
    int signe = 1;
    int nb = 0;
    int start = 0;

    if (str[0] == '-') {
        signe *= -1;
        start++;
    }
    for (int i = start; str[i] != 0; i++) {
        nb += str[i] - 48;
        if (str[i + 1] != 0)
            nb *= 10;
    }
    if (signe < 0) {
        nb *= -1;
    }
    return (nb);
}

char *my_get_number(int nb)
{
    int x = 0;
    int y = 0;
    char *number = malloc(sizeof(char) * (power(nb) + 1));
    int i = 0;

    if (number == NULL)
        return (NULL);
    for (; nb > 10; i++) {
        y = put_in_power(power(nb) - 1);
        x = nb / y;
        number[i] = x + '0';
        nb %= y;
    }
    if (nb > 0) {
        number[i] = nb + '0';
        number[i + 1] = 0;
    }
    return (number);
}