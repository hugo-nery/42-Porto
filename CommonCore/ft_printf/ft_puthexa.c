/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:59:57 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/05 17:47:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(uintptr_t p, char c)
{
	int	len;

	len = 0;
	if (p >= 16)
	{
		len += ft_puthexa(p / 16, c);
		len += ft_puthexa(p % 16, c);
	}
	else
	{
		if (c == 'x')
			return (ft_putchr("0123456789abcdef"[p]));
		else
			return (ft_putchr("0123456789ABCDEF"[p]));
	}
	return (len);
}
