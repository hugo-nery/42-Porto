/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:23:41 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 12:16:14 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int main (){

// 	printf("%d", ft_iterative_factorial(0));

//     return 0;
// }

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
		res *= nb--;
	return (res);
}
