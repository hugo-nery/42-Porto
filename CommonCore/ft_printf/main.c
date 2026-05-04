/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:47 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/04 20:01:38 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	char str[] = "test";
	int nbr = 42;

	//char
	ft_printf("%c-", '%');
	printf("%d\n\n", printf("%c-", '%'));

	ft_printf("%c-", str[0]);
	printf("%d\n\n", printf("%c-", str[0]));

	//string
	ft_printf("%s-", "%%");
	printf("%d\n\n", printf("%s-", "%%"));

	ft_printf("%s-", str);
	printf("%d\n\n", printf("%s-", str));

	//decimal
	ft_printf("%d-", nbr);
	printf("%d\n\n", printf("%d-", nbr));

	//int
	ft_printf("%i-", nbr);
	printf("%d\n\n", printf("%i-", nbr));

	//ptr address
	ft_printf("%p-", &main);
	printf("%d\n\n", printf("%p-", &main));

	ft_printf("%p-", &nbr);
	printf("%d\n\n", printf("%p-", &nbr));

	//unsigned int
	ft_printf("%u-", -nbr);
	printf("%d\n\n", printf("%u-", -nbr));

	ft_printf("%u-", -nbr);
	printf("%d\n\n", printf("%u-", -nbr));

	// //hexa
	ft_printf("%x-", 0x63f05e3b);
	printf("%d\n\n", printf("%x-", 0x63f05e3b));

	//HEXA
	ft_printf("%X-", 0x63f05e3b);
	printf("%d\n\n", printf("%X-", 0x63f05e3b));

	return (0);
}
