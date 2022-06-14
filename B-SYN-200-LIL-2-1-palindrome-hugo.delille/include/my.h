/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** palindrome
*/

#include <stdlib.h>
#include <unistd.h>

void my_putstr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_strlen(char const *str);
int main(int ac, char **av);
void helper(void);
int my_factrec_synthesis (int nb);
int my_squareroot_synthesis (int nb);
int power(int nb);
int put_in_power(int nb);
char *my_get_number(int nb);
int my_get_nbr(char *str);
int palindrome(int nb);
int palindrome2(int nb, int max);
int transforme_number(int nb, int imax, int imin);
int palindrome_p(int nb, int imax, int imin);
void print_success(int nb1, int nb2, int iteration, int base);
int my_revnbr(int nbr);
int  my_strcmp(char const *s1, char const *s2);
int n_gestionning(char **av);
int p_gestionning(char **av);
int flag_gestionning(char **av);
int transforme_number_bis(int nb, int max, int imax, int imin);
//int checked_error(char **av);
//int checked_flags(char *str);
//int checked_is_number(char *str);
int check_arg_duplicate(char **av);
int check_nbr(char *str);
int check_base_nbr(char *str);
int check_arg_val(char **av);
