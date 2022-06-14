/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

void print_success(int nb1, int nb2, int iteration, int base)
{
    my_put_nbr(nb1);
    my_putstr(" leads to ");
    my_put_nbr(nb2);
    my_putstr(" in ");
    my_put_nbr(iteration);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(base);
}