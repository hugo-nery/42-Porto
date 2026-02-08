/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:21:44 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/08 22:33:58 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_iterative_power(int nb, int power);

// int main (){

// 	printf("%d", ft_iterative_power(5, 3));

// 	return (0);
// }

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (nb <= 0)
		return (0);
	else
	{
		res = 1;
		while (power >= 1)
		{
			res *= nb;
			power--;
		}
	}
	return (res);
}
