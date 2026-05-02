/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:47 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/02 17:09:16 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	char str[] = "test";
	int nbr = 42;

	ft_printf("%c-", str[0]);
	printf("%d\n\n", printf("%c-", str[0]));

	ft_printf("%s-", str);
	printf("%d\n\n", printf("%s-", str));

	ft_printf("%d-", nbr);
	printf("%d\n\n", printf("%d-", nbr));

	ft_printf("%i-", nbr);
	printf("%d\n\n", printf("%i-", nbr));

	ft_printf("%p-", &nbr);
	printf("%d\n\n", printf("%p-", &nbr));




	return (0);
}
