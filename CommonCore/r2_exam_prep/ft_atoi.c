/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:55:46 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/16 12:11:02 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nb)
{
	int sign;
	int number;

	sign = 1;
	if (*nb == '-' || *nb == '+')
	{
		if (*nb == '-')
			sign = -1;
		nb++;
	}
	number = 0;
	while (*nb >= '0' && *nb <= '9')
	{
		number = (number * 10) + (*nb - '0');	
		nb++;
	}
	return (number * sign);
}

#include <stdio.h>

int main(int argc, char **argv)
{		
	if (argc > 1)
		printf("%d\n", ft_atoi(argv[1]));
		
}