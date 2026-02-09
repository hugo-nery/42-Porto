/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:21:13 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 15:46:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb);

int main (){

	printf("%d", ft_is_prime(25));

	return 0;
}

int ft_is_prime(int nb)
{
	if ((nb == 2) || (nb > 1 && nb % 2 != 0))
		return (1);
	return (0);
}