/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:25:44 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 22:14:54 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_str_is_numeric(char *str);

// int main () {
// 	// char text[] = "123";
// 	printf("%d\n", ft_str_is_numeric(NULL));
//     return 0;
// }

int	ft_str_is_numeric(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			if (*str < '0' || *str > '9')
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}

// cc -Wall -Wextra -Werror