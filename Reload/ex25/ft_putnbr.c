/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:56:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 17:14:28 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr (int nb);
void ft_foreach(int *tab, int length, void (*f)(int));

int main ()
{

	int tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 3, &ft_putnbr);

	return 0;
}

void ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
	
}

void ft_putnbr (int nb)
{
	long n = nb;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr (n / 10);
		
	write(1, &("0123456789"[n % 10]), 1);
}
