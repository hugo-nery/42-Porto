/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:10:57 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 11:36:14 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdio.h>

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

int     *ft_rrange(int start, int end)
{
	int *lst_nbs;
	int len;
	int i;

	lst_nbs = 0;
	len = 0;
	if (end > start)
	{
		i = start;
		while (i++ <= end)
			len++;	
	}
	else
	{
		i = end;
		while (i++ <= start)
			len++;
	}

	lst_nbs = malloc (len * sizeof(int));
	if (!lst_nbs)
		return (0);
	
	// if (end < start)
	// {
	// 	i = end;
	// 	end = start;
	// 	start = i;
	// }
	i = 0;
	if (end < 0)
	{
		while (end <= start)
			lst_nbs[i++] = end++;
	}
	else
	{
		while (end >= start)
			lst_nbs[i++] = end--;
	}

	return (lst_nbs);
}

int main(int argc, char **argv)
{
	int *lst;
	int len = 0;
	int i = 0;

	int start;
	int end;
	
	if (argc == 3)
	{
		start = ft_atoi(argv[1]);
		end = ft_atoi(argv[2]);
		
		if (end > start)
		{
			i = start;
			while (i++ <= end)
				len++;	
		}
		else
		{
			i = end;
			while (i++ <= start)
				len++;
		}
	
		lst = ft_rrange(start, end);
		i = 0;
		while (i < len)
		{
			printf("%d ", lst[i++]);
		}
		
	}
	else
		printf ("Invalid.\n");

	return (0);
}