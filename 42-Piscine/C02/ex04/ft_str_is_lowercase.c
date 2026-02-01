/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:06:11 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 22:19:14 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_str_is_lowercase(char *str);

// int main () {

//     char text[] = "aAbcd";

//     printf("%d", ft_str_is_lowercase(text));

//     return 0;
// }

int	ft_str_is_lowercase(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			if (*str < 'a' || *str > 'z')
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}

// cc -Wall -Wextra -Werror