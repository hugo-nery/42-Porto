/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:29:37 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 16:32:21 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdlib.h>

void	ft_printnb(int num);
int		*ft_range(int min, int max);

// int main ()
// {
// 	int *my_nums = ft_range(-4, 5);

// 	int arr_len = (5 - (-4));

// 	int i = 0;

// 	while (i < arr_len)
// 	{
// 		ft_printnb(my_nums[i]);
// 		write(1, "\n", 1);
// 		i++;
// 	}

//     return 0;
// }

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	arr = NULL;
	if (min >= max)
		return (arr);
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// void	ft_printnb(int num)
// {
// 	long	n;

// 	n = num;
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n = -n;
// 	}
// 	if (n > 9)
// 		ft_printnb (n / 10);
// 	write(1, &("0123456789"[n % 10]), 1);
// }
