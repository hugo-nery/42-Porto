/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/04 20:07:03 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				len += ft_putchr('%');
			else if (*str == 'c')
				len += ft_putchr(va_arg(args, int));
			else if (*str == 's')
				len += ft_putstr(va_arg(args, char *));
			else if (*str == 'd' || *str == 'i')
				len += ft_putnbr(va_arg(args, int));
			else if (*str == 'p')
				len += ft_putstr("0x") + ft_putptr(va_arg(args, uintptr_t));
			else if (*str == 'u')
				len += ft_putuns(va_arg(args, int));
			else if (*str == 'x')
				len += ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef");
			else if (*str == 'X')
				len += ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF");
		}
		else
		{
			len+= ft_putchr(*str);
		}
		str++;
	}
	va_end(args);

	printf("%zu\n", len);

	return (len);
}

