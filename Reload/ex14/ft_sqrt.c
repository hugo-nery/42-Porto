/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:48:40 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 21:00:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_sqrt(int nb);

// int main() {

// 	int n = 9;

// 	printf("rz de %d = %d\n", n, ft_sqrt(n));

// 	return 0;
// }

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
