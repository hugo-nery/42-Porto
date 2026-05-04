/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:59:57 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/04 20:06:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(uintptr_t p, char *base)
{
	size_t len;

	len = 0;
	if (p >= 16)
	{
		len += ft_puthexa(p / 16, base);
		len += ft_puthexa(p % 16, base);
	}
	else
	{
		return (ft_putchr(base[p]));
	}
	return (len);
}
