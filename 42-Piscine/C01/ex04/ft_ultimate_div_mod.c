/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:21:50 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 21:39:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_ultimate_div_mod(int *a, int *b);

// int main () {

//     int a = 10;
//     int b = 7;

//     printf("a = %d \nb = %d\n\n", a, b);

//     ft_ultimate_div_mod(&a, &b);

//     printf("div = %d \nmod = %d\n\n", a, b);

//     return 0;
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

// cc  -Wall -Wextra -Werror