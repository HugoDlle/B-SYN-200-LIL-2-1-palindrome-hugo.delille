/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Task06 Day06
*/

#include <unistd.h>

int my_strcmp(char const *s1, char const *s2)
{
    int c_s1 = 0;
    int c_s2 = 0;

    for (int ca = 0; s1[ca] != '\0'; ca++)
        c_s1 = c_s1 + s1[ca];
    for (int cb = 0; s2[cb] != '\0'; cb++)
        c_s2 = c_s2 + s2[cb];
    return (c_s1 - c_s2);
}
