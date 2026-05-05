/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/05 17:19:58 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	len;
	uintptr_t p;

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
			{
				p = va_arg(args, uintptr_t);
				if (p != 0)
					len += ft_putstr("0x") + ft_putptr(p);
				else
					len += ft_putstr("(nil)");
			}
			else if (*str == 'u')
				len += ft_putuns(va_arg(args, unsigned int));
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

	ft_putnbr(len);

	return (len);
}

#include <stdio.h>

char aa(){
	return 0;
}

int main ()
{
	char str[] = "test";
	int nbr = -42;

	//char
	ft_printf("%c-", '%');
	printf("\n");
	printf("%d\n\n", printf("%c-", '%'));

	ft_printf("%c-", str[0]);
	printf("\n");
	printf("%d\n\n", printf("%c-", str[0]));

	//string
	ft_printf("%s-", "%%");
	printf("\n");
	printf("%d\n\n", printf("%s-", "%%"));

	ft_printf("%s-", str);
	printf("\n");
	printf("%d\n\n", printf("%s-", str));

	//decimal
	ft_printf("%d-", nbr);
	printf("\n");
	printf("%d\n\n", printf("%d-", nbr));

	//int
	ft_printf("%i-", nbr);
	printf("\n");
	printf("%d\n\n", printf("%i-", nbr));

	//ptr address
	ft_printf("%p-", NULL);
	printf("\n");
	printf("%d\n\n", printf("%p-", NULL));

	ft_printf("%p-", &main);
	printf("\n");
	printf("%d\n\n", printf("%p-", &main));

	ft_printf("%p-", &nbr);
	printf("\n");
	printf("%d\n\n", printf("%p-", &nbr));

	//unsigned int
	ft_printf("%u-", nbr);
	printf("\n");
	printf("%d\n\n", printf("%u-", nbr));

	ft_printf("%u-", -nbr);
	printf("\n");
	printf("%d\n\n", printf("%u-", -nbr));

	// //hexa
	ft_printf("%x-", 0x63f05e3b);
	printf("\n");
	printf("%d\n\n", printf("%x-", 0x63f05e3b));

	//HEXA
	ft_printf("%X-", 0x63f05e3b);
	printf("\n");
	printf("%d\n\n", printf("%X-", 0x63f05e3b));

	return (0);
}
