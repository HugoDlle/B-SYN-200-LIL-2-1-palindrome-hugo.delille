/*
** EPITECH PROJECT, 2021
** my_revnbr
** File description:
** lib
*/

int my_revnbr(int nbr)
{
    int inverse_nbr = 0;

    for (; nbr > 0; nbr /= 10)
        inverse_nbr = (inverse_nbr * 10) + (nbr % 10);
    return (inverse_nbr);
}