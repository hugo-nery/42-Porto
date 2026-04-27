/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:59:32 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/23 14:14:09 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write (fd, "-", 1);
		nbr = -(nbr);
	}
	if (nbr > 10)
		ft_putnbr_fd (nbr / 10, fd);
	write (fd, &"0123456789"[nbr % 10], 1);
}
