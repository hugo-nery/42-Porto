/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:59:40 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/10 15:05:01 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// #include <stdio.h>

// int ft_fibonacci(int index);

// int main (){

// 	printf("%d", ft_fibonacci(5));
// 	return 0;
// }

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
