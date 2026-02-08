/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:34:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/08 22:39:16 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_recursive_power(int nb, int power);

// int main (){

// 	printf("%d", ft_recursive_power(4, 3));

// 	return 0;
// }

int	ft_recursive_power(int nb, int power)
{
	if (nb <= 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
