/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:29:37 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/11 18:39:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

// int *ft_range(int min, int max);

// int main ()
// {
// 	ft_range(-8, 5);

//     return 0;
// }

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	arr = malloc((max - min) * sizeof(max));
	if (min >= max || arr == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
