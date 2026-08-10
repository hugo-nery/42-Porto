/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:11:28 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/16 12:27:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t ft_digit_count(int nb);

char *ft_itoa(int nb)
{
	char *text;
	size_t len;

	len = ft_digit_count(nb);
	text = malloc((len + 1) * sizeof(char));
	if (!text)
		return (NULL);
	text[len] = '\0';
	if (nb < 0)
	{
		text[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		text[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (text);
}

size_t ft_digit_count(int nb)
{
	size_t count;

	count = 0;
	if(nb <= 0)
	{
		count++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

#include <stdio.h>

int main()
{		
	printf("%s\n", ft_itoa(-5632));
		
}