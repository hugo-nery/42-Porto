/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:13:41 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 15:20:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_sqrt(int nb);

// int main (){

// 	printf ("%d", ft_sqrt(36));

// 	return 0;
// }

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i != nb && i < nb)
		i++;
	if (i >= 2 && i == nb)
		return (0);
	return (i);
}
