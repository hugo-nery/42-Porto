/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:50:28 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 11:10:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *my_nbs;
	size_t len;
	size_t i;
	
	len = 0;
	i = start;
	if (end < start)
	{
		while (i >= end)
		{
			i--;
			len++;
		}
	}
	else
	{
		while (i <= end)
		{
			i++;
			len++;
		}
	}
	my_nbs = malloc (len * sizeof(int));
	if (!my_nbs)
		return (0);
	
	i = 0;
	if (end > start)
	{
		while (start <= end)
			my_nbs[i++] = start++;
	}
	else
	{
		while (start >= end)
			my_nbs[i++] = start--;
	}

	return (my_nbs);
}

#include <stdio.h>

int main ()
{
	int *lst;
	
	int i = 0;
	int len = 0;
	
	int start = 0;
	int end = -3;
	
	i = start;
	while (i <= end)
	{
		printf ("%d\n", len);
		i++;
		len++;
	}

	lst = ft_range(start, end);
	i = 0;
	while (i < 4)
		printf ("%d ", lst[i++]);
	
	return (0);
}