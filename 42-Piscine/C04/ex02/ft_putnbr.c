/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:08:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 14:58:58 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// #include <stdio.h>

// void ft_putnbr(int nb);

// int main () {

//     ft_putnbr(-64548);

//     return 0;
// }

void	ft_putnbr(int nb)
{
	char		c;
	long int	x;

	x = nb;
	if (x < 0)
	{
		write(1, "-", 1);
		x = x * -1;
	}
	if (x < 10)
	{
		c = x + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}
