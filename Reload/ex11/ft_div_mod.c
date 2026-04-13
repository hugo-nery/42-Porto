/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:18:44 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 17:23:04 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void ft_div_mod(int a, int b, int *div, int *mod);

// int main (){

//     int div = 0;
//     int mod = 0;

//     ft_div_mod(10, 3, &div, &mod);

//     printf ("div = %d | mod = %d", div, mod);

//     return 0;
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
