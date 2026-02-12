/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:44:35 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/11 18:44:04 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main ()
{
    int *my_arr;

    my_arr = NULL;
    ft_ultimate_range(&my_arr, 6, 10);
    return 0;
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc((max - min) * sizeof(max));
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		printf("%d, ", arr[i]);
		i++;
	}
	*range = arr;
	return (max - min);
}
