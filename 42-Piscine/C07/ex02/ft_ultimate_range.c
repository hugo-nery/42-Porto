/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:44:35 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 12:33:54 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_printnb(int num);
int		ft_ultimate_range(int **range, int min, int max);

// int main ()
// {
//     int *my_arr;
// 	int arr_len;
// 	int i;

//     my_arr = 0;
//     arr_len = ft_ultimate_range(&my_arr, -5, 10);

// 	i = 0;
// 	while (i < arr_len)
// 	{
// 		ft_printnb (my_arr[i]);
// 		write (1, "\n", 1);
// 		i++;
// 	}

//     return 0;
// }

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = NULL;
	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

void	ft_printnb(int num)
{
	long	n;

	n = num;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_printnb (n / 10);
	write (1, &"0123456789"[n % 10], 1);
}
