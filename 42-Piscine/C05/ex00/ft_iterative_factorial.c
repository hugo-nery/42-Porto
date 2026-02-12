/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:07:06 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/12 16:07:24 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_iterative_factorial(int nb);

// int main (){

//     printf("%d", ft_iterative_factorial(4));

//     return 0;
// }

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb != 0)
		while (nb > 1)
			res = res * (nb--);
	return (res);
}
