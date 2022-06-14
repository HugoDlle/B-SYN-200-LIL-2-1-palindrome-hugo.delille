/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** palindrome
*/

#include "../include/my.h"

void helper(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./palindrome -n number -p palindrome ");
    my_putstr("[-b base] [-imin i] [-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t-n n\t\tinteger to be transformed (>=0)\n");
    my_putstr("\t-p pal\t\tpalindromic number to be obtained ");
    my_putstr("(incompatible with the -n option) (>=0)\n");
    my_putstr("\t\t\tif defined, all fitting values of n will be output\n");
    my_putstr("\t-b base\t\tbase in which the procedure will");
    my_putstr(" be executed (1<b<=10) [def: 10]\n");
    my_putstr("\t-imin i\t\tminimum number of iterations,");
    my_putstr(" included (>=0) [def: 0]\n");
    my_putstr("\t-imax i\t\tmaximum number of iterations,");
    my_putstr(" included (>=0) [def: 100]\n");
}