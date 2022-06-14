/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

int power(int nb)
{
    int i = 1;

    for (; nb > 10; nb /= 10, i++);
    return (i);
}

int put_in_power(int nb)
{
    int i = 1;

    for (int z = 0; z < nb; z++)
        i *= 10;
    return (i);
}
