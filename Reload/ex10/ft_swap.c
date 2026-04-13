/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:13:33 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 17:17:53 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void ft_swap(int *a, int *b);

// int main () {

//     int a = 10;
//     int b = 50;

//     printf ("%d x %d\n", a, b);

//     ft_swap (&a, &b);

//     printf ("%d x %d\n", a, b);

//     return 0;
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
