/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:36:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 19:09:50 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_str_is_printable(char *str);

// int main () {

//     // char text[] = "cof sˆdf sf orwe sdf";
//     // char text[0];

//     printf("%d", ft_str_is_printable(NULL));

//     return 0;
// }

int	ft_str_is_printable(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			if ((int)*str < 32 || (int)*str > 126)
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}

// cc -Wall -Wextra -Werror