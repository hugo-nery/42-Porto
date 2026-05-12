/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:55:13 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/12 20:43:41 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t p)
{
	int	len;

	len = 0;
	if (p != 0)
		len += ft_putstr("0x") + ft_puthexa(p, 'x');
	else
		len += ft_putstr("(nil)");
	return (len);
}
