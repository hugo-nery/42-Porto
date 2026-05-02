/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:15:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/02 13:18:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_digitcount(int nbr);

int	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr (n / 10);
	write (1, &"0123456789"[n % 10], 1);
	return (ft_digitcount(nbr));
}
