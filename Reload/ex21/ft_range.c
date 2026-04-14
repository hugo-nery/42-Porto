/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:55:55 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 15:14:46 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// int *ft_range(int min, int max);

// int main ()
// {
// 	int i = 0;
// 	int min = -6;
// 	int max = 10;

// 	while (i < (max - min))
// 		printf("%d\n", ft_range(min, max)[i++]);

// 	return 0;
// }

int	*ft_range(int min, int max)
{
	int	i;
	int	*my_arr;

	if (min >= max)
		return (malloc (1 * sizeof(int)));
	my_arr = malloc ((max - min) * sizeof(int));
	if (!my_arr)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
			my_arr[i++] = min++;
	}
	return (my_arr);
}
