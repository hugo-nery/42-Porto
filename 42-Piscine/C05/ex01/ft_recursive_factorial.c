/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:17:27 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/10 22:34:27 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_recursive_factorial(int nb);

// int main () {

//     printf("%d", ft_recursive_factorial(4));

//     return 0;
// }

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
