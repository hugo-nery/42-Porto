#ifndef MY_HEADER_H
# define MY_HEADER_H

#include <unistd.h>

void ft_putnbr (int nb);
void ft_evenodd (int nb);
void ft_foreach(int *tab, int length, void (*f)(int));

#endif