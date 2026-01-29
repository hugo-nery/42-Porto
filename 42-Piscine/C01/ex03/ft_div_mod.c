/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:19:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 21:37:12 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_div_mod(int a, int b, int *div, int *mod);

// int main () {

//     int a = 10;
//     int b = 7;

//     int div = 0;
//     int mod = 0;

//     ft_div_mod(a, b, &div, &mod);

//     printf("%d / %d = %d\n", a, b, div);
//     printf("%d %c %d = %d\n", a, '%' ,b , mod);

//     return 0;
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// cc  -Wall -Wextra -Werror