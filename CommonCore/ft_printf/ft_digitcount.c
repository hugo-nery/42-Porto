/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:15:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/02 13:54:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_digitcount(int nbr)
{
	long	n;
	size_t	digits;

	n = nbr;
	digits = 1;
	if (n < 0)
	{
		n = -n;
		digits++;
	}
	while (n > 9)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}