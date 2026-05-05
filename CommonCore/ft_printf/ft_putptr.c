/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:55:13 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/05 16:51:00 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t p)
{
	size_t	len;

	len = 0;
	if (p >= 16)
	{
		len += ft_putptr(p / 16);
		len += ft_putptr(p % 16);
	}
	else
	{
		return (ft_putchr("0123456789abcdef"[p]));
	}
	return (len);
}
