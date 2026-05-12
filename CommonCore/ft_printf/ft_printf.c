/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/12 20:44:14 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pholder(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == '%')
		len += ft_putchr('%');
	else if (c == 'c')
		len += ft_putchr(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, uintptr_t));
	else if (c == 'u')
		len += ft_putuns(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_puthexa(va_arg(args, unsigned int), c);
	else
		len += ft_putchr('%') + ft_putchr(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			len += ft_pholder(args, *(++str));
		else
			len += ft_putchr(*str);
		str++;
	}
	va_end(args);
	return (len);
}

/*
#include <stdio.h>

int main ()
{
	char str[] = "test";
	int nbr = -42;

	//char
	ft_printf("%d", ft_printf("%c-", '%'));
	printf("\n");
	printf("%d\n\n", printf("%c-", '%'));

	ft_printf("%d", ft_printf("%c-", str[0]));
	printf("\n");
	printf("%d\n\n", printf("%c-", str[0]));

	//string
	ft_printf("%d", ft_printf("%s-", "%%"));
	printf("\n");
	printf("%d\n\n", printf("%s-", "%%"));

	ft_printf("%d", ft_printf("%s-", str));
	printf("\n");
	printf("%d\n\n", printf("%s-", str));

	//decimal
	ft_printf("%d", ft_printf("%d-", nbr));
	printf("\n");
	printf("%d\n\n", printf("%d-", nbr));

	//int
	ft_printf("%d", ft_printf("%i-", nbr));
	printf("\n");
	printf("%d\n\n", printf("%i-", nbr));

	//ptr address
	ft_printf("%d", ft_printf("%p-", NULL));
	printf("\n");
	printf("%d\n\n", printf("%p-", NULL));

	ft_printf("%d", ft_printf("%p-", &main));
	printf("\n");
	printf("%d\n\n", printf("%p-", &main));

	ft_printf("%d", ft_printf("%p-", &nbr));
	printf("\n");
	printf("%d\n\n", printf("%p-", &nbr));

	//unsigned int
	ft_printf("%d", ft_printf("%u-", nbr));
	printf("\n");
	printf("%d\n\n", printf("%u-", nbr));

	ft_printf("%d", ft_printf("%u-", -nbr));
	printf("\n");
	printf("%d\n\n", printf("%u-", -nbr));

	//hexa
	ft_printf("%d", ft_printf("%x-", 0x63f05e3b));
	printf("\n");
	printf("%d\n\n", printf("%x-", 0x63f05e3b));

	//HEXA
	ft_printf("%d", ft_printf("%X-", 0x63f05e3b));
	printf("\n");
	printf("%d\n\n", printf("%X-", 0x63f05e3b));

	ft_printf("%d", ft_printf("%X-", 0x63f05e3b));
	printf("\n");
	printf("%d\n\n", printf("%X-", 0x63f05e3b));

	// ft_printf("%d", ft_printf("%l-", 50));
	return (0);
}
*/