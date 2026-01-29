/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:03:38 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 21:07:15 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_swap(int *a, int *b);

// int main () {
// 	int my_a = 0;
// 	int my_b = 5;
// 	printf("a = %d, \tb = %d\n", my_a, my_b);
// 	ft_swap(&my_a, &my_b);
// 	printf("a = %d, \tb = %d\n", my_a, my_b);
//     return 0;
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// cc -Wall -Wextra -Werror 